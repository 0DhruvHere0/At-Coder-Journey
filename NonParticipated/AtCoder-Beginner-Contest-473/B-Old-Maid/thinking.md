In this questions I looked at the input which was of two lines, first was number of cards and in second line value of each card.
Then I looked at code constrains which were:
    1. Maximum number of cards is 100
    2. Maximum value of card is 100
    3. No value is float.
    This gave me an idea of brute force.
Then I looked at question and saw duplicate cards were being removed. So, I thought to remove the duplicates by converting into set.
But the question told that the maximum amount of cards deleted at a time will be 2.
So, I thought that the cards with even count will always be deleted. I created an unordered_map because its average time complexity is O(1). And save the count in that.
Since, I wanted to find the sum, I created a variable named sum=0 and for all the values of cards whose count is odd I added those values to sum.
And in the end printed the sum.