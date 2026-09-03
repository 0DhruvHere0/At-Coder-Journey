# Approach
At first, I looked at the problem statement and saw that the input consisted of:
- A single integer `N`, which represents the size of the array.
- The values of the array itself.
Then, I looked at the constraints:
1. The array will always have an even length.
2. The maximum size of the array is `100`.
Since the array size is very small, this gave me the idea that a brute-force approach would work well.
So, I created the array and then used a `for-loop` starting from the `N/2`-th element.
The `N/2`-th element is the first element of the **second half** of the array.
For example, if:
```text
N = 6