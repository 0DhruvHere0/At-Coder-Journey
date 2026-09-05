# Approach
In this question, I first read at input format two lines:
- Number of values in the array
- Array itself
Then I looked at the constrains:
1. Minimum array size is 3 and maximum is 100
2. Minimum value of any index in array is 1 and max is 100
3. Everything is integer no float.
```text
So, as the question told we need to print the number of elements which are greater than the element on their exact left and right.
From the first constraint I concluded that there is no need to write the invalid array size cases.
Since we want to check 3 indexes at a time (i-1,i,i+1). I ran the loop from 1 to (size of array)-1.
And I also created a count variable that will stores the number of indexes that validate our condition.
Now, I also saw we wanted our current index to be greater than element on previous and next index.
So, what I did was get the greater element from previous and next index and then compare it to our current index.
If it is greater than the max element we selected then we can increment the count else we will not increment it.
```