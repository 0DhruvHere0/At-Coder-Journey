# A - Maximal Value

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB  
**Score:** 100 points

## Problem Statement

You are given an integer sequence of length **N**:

`A = (A₁, A₂, ..., Aₙ)`.

Find the number of integers **i** between **1** and **N - 2** (inclusive) satisfying:

`Aᵢ < Aᵢ₊₁ > Aᵢ₊₂`.

## Constraints

- `3 ≤ N ≤ 100`
- `1 ≤ Aᵢ ≤ 100`
- All input values are integers.

---

## Input

The input is given from Standard Input in the following format:

```text
N
A₁ A₂ ... Aₙ
```
## Output

Output the answer

## Examples

### Example 1

**Input**

```text
6
3 1 4 1 5 2
```

**Output**

```text
2
```

### Example 2
**Input**
```text
5
1 1 1 2 1
```
**Output**
```text
1
```
## Example 3
**Input**
```text
10
7 3 9 8 10 3 1 5 5 4
```
**Output**
```text
2
```