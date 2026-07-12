# C++ Interview Gotchas — Quick Reference

Common mistakes that cost people time or correctness in timed coding interviews. Skim this once you're mid-way through the DSA roadmap, then revisit before mock interviews.

---

## 1. Pass by Value vs Reference (bites people constantly in recursion/backtracking)

```cpp
// WRONG — modifications inside the function don't persist
void backtrack(vector<int> path) { path.push_back(1); }

// RIGHT — pass by reference to avoid copying + to persist changes
void backtrack(vector<int>& path) { path.push_back(1); }

// When you DON'T want changes to persist (e.g. adding a copy to results)
results.push_back(path);      // this makes a copy — safe
results.push_back(move(path)); // moves instead of copies — faster, but path is now unusable after
```

**Rule of thumb:** in backtracking, pass containers by reference and push/pop the same object, rather than passing copies at every recursive call — copying a vector at every level of recursion silently turns your solution from O(n) extra space into O(n²) or worse, and can cause TLE.

---

## 2. Integer Overflow

```cpp
int a = 1e9, b = 1e9;
int sum = a + b;       // overflows! int max is ~2.1 billion
long long sum = (long long)a + b;  // correct — cast BEFORE the operation
```

**Rule of thumb:** if a problem involves large sums, products, or counts (especially anything with `10^9` constraints), default to `long long` instead of `int`. This is one of the most common silent-wrong-answer bugs in interviews.

---

## 3. `size()` returns `unsigned` — comparing with signed ints breaks

```cpp
vector<int> v = {1,2,3};
for (int i = v.size() - 1; i >= 0; i--) { ... }   // fine as written, BUT:

// If v is EMPTY:
for (int i = 0; i < v.size() - 1; i++) { ... }
// v.size() - 1 underflows to a huge unsigned number → infinite/garbage loop
```

**Rule of thumb:** when subtracting from `.size()`, either check for empty containers first, or cast to `int`: `(int)v.size() - 1`.

---

## 4. `map`/`unordered_map` auto-creates entries on access

```cpp
unordered_map<int,int> m;
if (m[5] > 0) { ... }   // this CREATES key 5 with value 0 if it doesn't exist!

// Correct way to check existence without side effects:
if (m.find(5) != m.end()) { ... }
if (m.count(5)) { ... }   // also fine, count() is 0 or 1 for a map
```

**Rule of thumb:** use `.count()` or `.find()` to check existence — using `[]` for a check silently mutates your map.

---

## 5. Iterator invalidation while modifying a container

```cpp
vector<int> v = {1,2,3,4,5};
for (auto it = v.begin(); it != v.end(); it++) {
    if (*it == 3) v.erase(it);   // invalidates 'it' — undefined behavior on next iteration
}

// Correct:
for (auto it = v.begin(); it != v.end(); ) {
    if (*it == 3) it = v.erase(it);  // erase returns the next valid iterator
    else it++;
}
```

**Rule of thumb:** never modify a container's structure (erase/insert) while iterating with a stale iterator — always reassign from what the modifying call returns.

---

## 6. String comparison and mutation

```cpp
string s = "hello";
s[0] = 'H';           // fine, std::string supports this
string t = s + "!";   // fine, but repeated += in a loop is O(n) each time → O(n²) total

// For building strings in a loop, prefer:
string result;
result.reserve(expectedSize);  // avoids repeated reallocations
for (...) result += c;
```

---

## 7. Recursion default argument gotcha

```cpp
// If you use default params for "helper" state in recursion, be careful:
void dfs(TreeNode* node, int depth = 0) {
    // this works fine for a single top-level call,
    // but if called recursively without passing depth explicitly, it resets to 0 every time — bug
    dfs(node->left, depth + 1);  // correct — pass explicitly
    dfs(node->left);             // WRONG — depth silently resets to 0
}
```

---

## 8. `sort()` with custom comparators — lambda signature

```cpp
// Correct lambda comparator signature — must return bool, take const refs
sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
    return a.second < b.second;   // ascending by second element
});
```

**Common mistake:** writing a comparator that isn't a strict weak ordering (e.g. using `<=` instead of `<`) — this causes undefined behavior / crashes in some STL implementations, not just "wrong sort order."

---

## 9. `priority_queue` is max-heap by default

```cpp
priority_queue<int> maxHeap;                          // max-heap (default)
priority_queue<int, vector<int>, greater<int>> minHeap; // min-heap — this exact syntax trips people up
```

**Rule of thumb:** memorize the min-heap declaration syntax cold — it's asked constantly and easy to blank on under pressure.

---

## 10. Array/vector out-of-bounds — no automatic error in release mode

```cpp
vector<int> v = {1,2,3};
cout << v[5];   // undefined behavior — might not crash, might print garbage, might crash later
```

Unlike Python/JS, C++ won't throw a clean exception by default (`.at(5)` will throw, `[]` won't). Off-by-one errors here can produce confusing behavior that looks unrelated to the actual bug.
**Rule of thumb:** double check loop bounds (`< n` vs `<= n`) especially in binary search and two-pointer problems — this is the single most common source of silent bugs in interviews.

---

## 11. Global/static variables persisting across test cases (LeetCode-specific)

```cpp
class Solution {
    vector<int> memo;   // if declared as a member, this persists ONLY within one Solution instance
public:
    int solve(int n) {
        // if you use `static` inside a function, it persists ACROSS different test cases/calls
        // on some online judges — this can cause wrong answers on the 2nd+ test case
        static unordered_map<int,int> cache;  // DANGEROUS on LeetCode — leaks across runs
    }
};
```

**Rule of thumb:** avoid `static` local variables for memoization on LeetCode; use member variables or pass a memo table explicitly instead.

---

## 12. Modulo with negative numbers

```cpp
int a = -7 % 3;   // in C++, this is -1, NOT 2 (unlike Python)
```

**Rule of thumb:** if a problem involves modulo arithmetic and negative numbers are possible, normalize with `((a % m) + m) % m`.

---

## Quick Pre-Interview Checklist

- [ ] Did I use `long long` where sums/products could exceed ~2 billion?
- [ ] Am I passing large containers by reference, not by value?
- [ ] Did I check container emptiness before `.size() - 1` type operations?
- [ ] Am I using `.count()`/`.find()` instead of `[]` for existence checks on maps?
- [ ] Are my loop bounds correct (`<` vs `<=`)?
- [ ] Did I state time/space complexity out loud before coding?
- [ ] Did I test with an empty input, single-element input, and a normal case mentally before submitting?
