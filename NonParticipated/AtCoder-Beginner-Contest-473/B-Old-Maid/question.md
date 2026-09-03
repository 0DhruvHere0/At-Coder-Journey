# B - Old Maid

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB  
**Score:** 200 points

## Problem Statement

Takahashi currently has **N** cards. The **i-th** card (`1 ≤ i ≤ N`) has the integer **Aᵢ** written on it.

He repeats the following operation as many times as possible:

- Choose two different cards with the same integer written on them, and eat those two cards. The eaten cards are permanently removed and cannot be chosen in subsequent operations.

Find the sum of the integers written on the cards that remain when the operation can no longer be performed.

## Constraints

- `1 ≤ N ≤ 100`
- `1 ≤ Aᵢ ≤ 100` (`1 ≤ i ≤ N`)
- All input values are integers.

## Input

The input is given from Standard Input in the following format:

```text
N
A₁ A₂ ... Aₙ
```

## Output

Output the sum of the integers written on the remaining cards.

## Examples

### Example 1

**Input:**

```text
8
2 7 1 8 2 8 1 8
```

**Output:**

```text
15
```

**Explanation:**

For example, Takahashi operates as follows:

1. The fourth card and sixth card both have `8` written on them, so he chooses them and eats them.
2. The first card and fifth card both have `2` written on them, so he chooses them and eats them.
3. The third card and seventh card both have `1` written on them, so he chooses them and eats them.

The remaining cards contain `7` and `8`, so the answer is:

`7 + 8 = 15`

The operations can be visualized as follows:

![Operations on the cards](https://img.atcoder.jp/abc473/839dc9d3f8c77f88619fee1b74e6428d.png)

Note that there are three cards with `8` written on them. Once two of them are eaten, the remaining one cannot be eaten.

---

### Example 2

**Input:**

```text
5
1 2 3 4 5
```

**Output:**

```text
15
```

**Explanation:**

All cards contain different integers, so Takahashi cannot perform the operation even once. Therefore, all cards remain and their sum is `15`.

---

### Example 3

**Input:**

```text
15
58 97 74 16 97 74 97 16 51 52 58 52 74 32 43
```

**Output:**

```text
297
```
