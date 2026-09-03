# A - Second Half Sum

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB  
**Score:** 100 points

## Problem Statement

You are given an integer sequence of length **N**:

**A = (A₁, A₂, ..., Aₙ)**

Here, **N** is even.

Find the sum of the latter half of **A**, that is:

**A₍N/2₎₊₁ + A₍N/2₎₊₂ + ... + Aₙ**

## Constraints

- All input values are integers.
- **N** is an even number satisfying **2 ≤ N ≤ 100**.
- **1 ≤ Aᵢ ≤ 100**.

## Input

The input is given from Standard Input in the following format:

```text
N
A₁ A₂ ... Aₙ
```

## Output

Output the sum of the latter half of the sequence.

## Examples

### Example 1

**Input:**

```text
8
1 3 7 8 4 2 5 6
```

**Output:**

```text
17
```

**Explanation:**

The length of the sequence is **N = 8**, so we need to find the sum of:

**A₅ + A₆ + A₇ + A₈**

Therefore:

**4 + 2 + 5 + 6 = 17**

---

### Example 2

**Input:**

```text
2
1 100
```

**Output:**

```text
100
```

---

### Example 3

**Input:**

```text
10
31 41 59 26 53 58 97 93 23 84
```

**Output:**

```text
355
```