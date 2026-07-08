# Partition Equal Subset Sum

**Platform:** GeeksforGeeks
**Difficulty:** Medium
**Topic:** Dynamic Programming, Recursion, Memoization

---

# Problem Statement

Given an array `arr[]`, determine whether it can be partitioned into two subsets such that the sum of elements in both subsets is equal.

Each element must belong to exactly one subset.

---

# Key Observation

Let the total sum of all elements be `S`.

* If `S` is **odd**, it is impossible to divide the array into two equal subsets.
* If `S` is **even**, the problem reduces to finding a subset whose sum is:

```text
Target = S / 2
```

If such a subset exists, the remaining elements will also have sum `S / 2`.

Thus, the problem becomes a **Subset Sum** problem.

---

# Approach 1: Recursion

## Idea

For every element, we have two choices:

1. **Include** the current element in the subset.
2. **Exclude** the current element.

We recursively explore both possibilities until:

* Target becomes `0` → subset found.
* Index reaches the end of the array or target becomes negative → invalid path.

### Time Complexity

**O(2ⁿ)**

Every element has two choices (include or exclude).

### Space Complexity

**O(n)**

Recursive call stack.

---

# Approach 2: Memoization (Top-Down DP)

## Idea

The recursive solution solves many identical subproblems repeatedly.

Store the result for every state:

```text
(index, target)
```

Before solving a state, check whether it has already been computed.

This avoids redundant recursive calls.

### DP State

```text
dp[index][target]
```

* `-1` → Not computed
* `0` → False
* `1` → True

### Time Complexity

**O(n × target)**

Each state is computed only once.

### Space Complexity

**O(n × target)**

For the DP table.

---

# Complexity Comparison

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Recursion   | O(2ⁿ)           | O(n)             |
| Memoization | O(n × target)   | O(n × target)    |

---

# Key Interview Points

* Check whether the total sum is **even** before solving the problem.
* Convert the problem into a **Subset Sum** problem with target `sum / 2`.
* Every element has only two choices: **Include** or **Exclude**.
* Memoization eliminates overlapping subproblems by storing computed states.
* This is a classic Dynamic Programming problem and is frequently asked in coding interviews.
