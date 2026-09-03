At first I looked at the problem statement and saw the inputs that were single integer that will store the size of array and input of the array itself.
Then I looked at the code constrains that were:
    1. The array will always be of even length.
    2. The max size of array will be 100.
    This gave me the idea that brute force approach will work well
So, I created the array. And wrote a "for-loop" from the N/2th element that is our first index for second half till the last index of the array that is N.
And I iterated through each element and added their values to a pre-existent variable that I created as "sum=0" and then printed sum in the end. 
Making this code give the status AC(Accepted)