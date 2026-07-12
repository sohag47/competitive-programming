# C++ for DSA & Interview Prep — Roadmap & Daily Checklist

**Goal:** Learn just enough C++ to be fluent with the STL, then master DSA/Algorithms for job interviews.
**Format:** Check off `[ ]` → `[x]` as you complete each day. Re-open this file daily.
**Total duration:** ~14-16 weeks (adjust pace to your availability — 1-2 hrs/day minimum recommended)

---

## How to use this file

- Each week has a **theme**, a **daily checklist**, and a **problem set**.
- Don't skip the "review" days — spaced repetition is what makes DSA stick.
- If a day's topic isn't done, don't move on — DSA compounds; gaps hurt you later.
- Track problems solved on [LeetCode](https://leetcode.com) or [NeetCode](https://neetcode.io) (pattern-based, free, highly recommended alongside this).

---

## PHASE 1: Just Enough C++ (Week 1)

### Week 1 — C++ Syntax & Fundamentals

- [ ] Day 1: Install g++/clang, set up a code editor (VS Code recommended). Write & compile "Hello World". Learn `cin`/`cout`, variables, data types.
- [ ] Day 2: Control flow — `if/else`, `switch`, `for`, `while`, `do-while` loops.
- [ ] Day 3: Functions — parameters, return types, default args, function overloading.
- [ ] Day 4: Arrays (1D & 2D), C-style strings vs `std::string`.
- [ ] Day 5: Pointers & references — what they are, pass-by-value vs pass-by-reference (critical for recursion later).
- [ ] Day 6: `struct` and basic `class` — enough to build a `Node` for linked lists/trees later.
- [ ] Day 7: **Review day.** Redo Days 1-6 exercises from memory. Write 3 small programs without looking anything up.

---

## PHASE 2: STL Mastery (Weeks 2-3)

### Week 2 — Core Containers

- [ ] Day 8: `vector` — declaration, `push_back`, `pop_back`, iteration, 2D vectors.
- [ ] Day 9: `string` — methods (`substr`, `find`, `append`), string as char array manipulation.
- [ ] Day 10: `pair` and `tuple` — used constantly in DSA for storing (value, index) etc.
- [ ] Day 11: `map` / `unordered_map` — when to use ordered vs unordered, time complexity differences.
- [ ] Day 12: `set` / `unordered_set` — same ordered vs unordered distinction.
- [ ] Day 13: `stack`, `queue`, `deque` — interfaces and typical use cases.
- [ ] Day 14: **Review day.** Solve 5 easy LeetCode problems using only what you learned this week.

### Week 3 — Iterators, Algorithms & Practice

- [ ] Day 15: `priority_queue` (heaps) — min-heap vs max-heap syntax in C++.
- [ ] Day 16: Iterators — `begin()`, `end()`, `rbegin()`, how ranged-for works under the hood.
- [ ] Day 17: `<algorithm>` library — `sort`, `reverse`, `max_element`, `min_element`, custom comparators (lambdas).
- [ ] Day 18: `lower_bound`, `upper_bound`, `binary_search` — binary search on sorted containers.
- [ ] Day 19: Lambdas in C++ — syntax, capturing variables, using them in `sort`/comparators.
- [ ] Day 20: Time & space complexity refresher — Big-O, how to analyze your own code.
- [ ] Day 21: **Review day.** Solve 5-8 easy/medium LeetCode problems mixing containers + algorithms.

---

## PHASE 3: Core DSA Topics (Weeks 4-15)

> Pattern per week: **Learn concept → Solve 8-12 problems → Review weak spots.**
> Recommended: cross-reference with [NeetCode 150](https://neetcode.io/practice) for problem lists.

### Week 4 — Arrays & Two Pointers

- [ ] Day 22: Two-pointer technique — theory + 2-3 easy problems.
- [ ] Day 23: Sliding window (fixed size) — theory + problems.
- [ ] Day 24: Sliding window (variable size) — problems.
- [ ] Day 25: Prefix sums — theory + problems.
- [ ] Day 26: Kadane's Algorithm (max subarray) + variants.
- [ ] Day 27: Mixed practice — 4-5 problems, timed (20-25 min each).
- [ ] Day 28: **Review + redo** any problem that took >25 min or you couldn't solve.

### Week 5 — Hashing

- [ ] Day 29: Hash map fundamentals — frequency counting patterns.
- [ ] Day 30: Two Sum family of problems.
- [ ] Day 31: Group Anagrams, subarray sum problems using hash maps.
- [ ] Day 32: Hash sets for deduplication/lookup problems.
- [ ] Day 33: Mixed hashing practice — 4-5 problems.
- [ ] Day 34: Mixed hashing practice — 4-5 problems.
- [ ] Day 35: **Review day.**

### Week 6 — Recursion & Backtracking

- [ ] Day 36: Recursion fundamentals — base case, recursive case, call stack visualization.
- [ ] Day 37: Backtracking template — subsets, permutations.
- [ ] Day 38: Combination Sum problems.
- [ ] Day 39: N-Queens, Sudoku-style backtracking.
- [ ] Day 40: Mixed backtracking practice.
- [ ] Day 41: Mixed backtracking practice.
- [ ] Day 42: **Review day.**

### Week 7 — Linked Lists

- [ ] Day 43: Singly linked list — build from scratch, traversal, insertion, deletion.
- [ ] Day 44: Reverse a linked list (iterative + recursive).
- [ ] Day 45: Fast & slow pointers (cycle detection, middle of list).
- [ ] Day 46: Merge two sorted lists, merge K sorted lists.
- [ ] Day 47: Doubly linked list concepts + LRU Cache problem.
- [ ] Day 48: Mixed linked list practice.
- [ ] Day 49: **Review day.**

### Week 8 — Stacks & Queues

- [ ] Day 50: Stack-based problems — valid parentheses, min stack.
- [ ] Day 51: Monotonic stack pattern — next greater element.
- [ ] Day 52: Queue-based problems, circular queue.
- [ ] Day 53: Implement a queue using stacks (and vice versa).
- [ ] Day 54: Mixed stack/queue practice.
- [ ] Day 55: Mixed stack/queue practice.
- [ ] Day 56: **Review day.**

### Week 9 — Trees Part 1

- [ ] Day 57: Binary tree basics — build from scratch, DFS traversals (preorder/inorder/postorder).
- [ ] Day 58: BFS traversal (level order) using a queue.
- [ ] Day 59: Tree properties — height, diameter, balanced check.
- [ ] Day 60: Binary Search Tree (BST) — insert, search, delete.
- [ ] Day 61: Validate BST, BST iterator problems.
- [ ] Day 62: Mixed tree practice.
- [ ] Day 63: **Review day.**

### Week 10 — Trees Part 2 (Advanced)

- [ ] Day 64: Lowest Common Ancestor (LCA) problems.
- [ ] Day 65: Serialize/deserialize a tree.
- [ ] Day 66: Trie (prefix tree) — build from scratch, word search problems.
- [ ] Day 67: Segment trees / Fenwick trees — conceptual intro (advanced, optional deep dive).
- [ ] Day 68: Mixed advanced tree practice.
- [ ] Day 69: Mixed advanced tree practice.
- [ ] Day 70: **Review day.**

### Week 11 — Heaps / Priority Queues

- [ ] Day 71: Heap fundamentals — build/heapify, `priority_queue` usage recap.
- [ ] Day 72: Kth largest/smallest element problems.
- [ ] Day 73: Top K frequent elements.
- [ ] Day 74: Merge K sorted lists (heap approach), median from data stream.
- [ ] Day 75: Mixed heap practice.
- [ ] Day 76: Mixed heap practice.
- [ ] Day 77: **Review day.**

### Week 12 — Graphs Part 1

- [ ] Day 78: Graph representations — adjacency list/matrix, build from scratch.
- [ ] Day 79: BFS on graphs — shortest path in unweighted graph.
- [ ] Day 80: DFS on graphs — connected components, cycle detection.
- [ ] Day 81: Topological sort (Kahn's algorithm + DFS-based).
- [ ] Day 82: Union-Find (Disjoint Set Union) — theory + implementation.
- [ ] Day 83: Mixed graph practice.
- [ ] Day 84: **Review day.**

### Week 13 — Graphs Part 2 (Weighted)

- [ ] Day 85: Dijkstra's algorithm — shortest path with weights.
- [ ] Day 86: Bellman-Ford (negative weights) — conceptual + implementation.
- [ ] Day 87: Minimum Spanning Tree — Kruskal's algorithm.
- [ ] Day 88: Minimum Spanning Tree — Prim's algorithm.
- [ ] Day 89: Mixed weighted graph practice.
- [ ] Day 90: Mixed weighted graph practice.
- [ ] Day 91: **Review day.**

### Week 14 — Dynamic Programming Part 1 (Foundations)

- [ ] Day 92: DP fundamentals — memoization vs tabulation, identifying DP problems.
- [ ] Day 93: 1D DP — climbing stairs, house robber, fibonacci-style problems.
- [ ] Day 94: 1D DP — coin change, minimum cost problems.
- [ ] Day 95: Longest Increasing Subsequence.
- [ ] Day 96: Mixed 1D DP practice.
- [ ] Day 97: Mixed 1D DP practice.
- [ ] Day 98: **Review day.**

### Week 15 — Dynamic Programming Part 2 (2D & Advanced)

- [ ] Day 99: 2D DP — unique paths, grid-based problems.
- [ ] Day 100: Knapsack pattern (0/1 knapsack, subset sum).
- [ ] Day 101: Longest Common Subsequence, edit distance.
- [ ] Day 102: Palindrome-related DP problems.
- [ ] Day 103: Mixed 2D DP practice.
- [ ] Day 104: Mixed 2D DP practice.
- [ ] Day 105: **Review day.**

---

## PHASE 4: Sorting, Greedy & Interview Polish (Week 16)

### Week 16 — Final Topics + Mock Interviews

- [ ] Day 106: Sorting algorithms deep dive — merge sort, quick sort (know how to implement from scratch).
- [ ] Day 107: Greedy algorithms — interval scheduling, activity selection.
- [ ] Day 108: Bit manipulation basics — AND/OR/XOR tricks, common bit problems.
- [ ] Day 109: Mock interview #1 — 2 medium problems, timed, explain your approach out loud.
- [ ] Day 110: Mock interview #2 — 1 medium + 1 hard problem.
- [ ] Day 111: Review all weak topics identified across the whole plan.
- [ ] Day 112: **Final review.** Redo 5 problems from your "struggled" list from scratch.

---

## Ongoing (Post-Roadmap)

- [ ] Continue solving 3-5 problems/week to stay sharp.
- [ ] Do timed mock interviews weekly (Pramp, interviewing.io, or with a friend).
- [ ] Revisit company-tagged LeetCode problem lists if targeting specific companies.
- [ ] Study system design basics if interviewing for mid/senior roles (separate track).

---

## Quick Reference: Complexity Cheat Sheet

| Structure      | Access   | Search   | Insert   | Delete   |
| -------------- | -------- | -------- | -------- | -------- |
| Array/Vector   | O(1)     | O(n)     | O(n)     | O(n)     |
| Linked List    | O(n)     | O(n)     | O(1)     | O(1)     |
| Hash Map/Set   | -        | O(1) avg | O(1) avg | O(1) avg |
| BST (balanced) | O(log n) | O(log n) | O(log n) | O(log n) |
| Heap           | O(1) top | O(n)     | O(log n) | O(log n) |

---

## Tracking Your Progress

| Metric                | Target  |
| --------------------- | ------- |
| Total problems solved | 150-250 |
| Easy problems         | ~60     |
| Medium problems       | ~120    |
| Hard problems         | ~30-40  |
| Mock interviews done  | 8-10+   |

## **Notes / struggle log** (add your own entries below as you go):

-
-
