# Approach
In this question, I first looked at the input format. It had two lines:
- The first line contained the number of cards.
- The second line contained the value of each card.
Then I looked at the constraints:
1. The maximum number of cards is `100`.
2. The maximum value of a card is `100`.
3. The values are integers, so there are no floating-point values.
```text 
These small constraints gave me the idea that a brute-force approach could work.
Then I looked at the question more carefully and noticed that duplicate cards were being removed. Initially, I thought about removing duplicates by converting the values into a `set`.
However, the question stated that the maximum number of cards deleted at a time is `2`.
Because of this, I realized that cards with an **even frequency** will eventually be completely deleted. For example:
```
- A card appearing `2` times → both can be deleted.
- A card appearing `4` times → two pairs can be deleted.
- A card appearing `6` times → three pairs can be deleted.
```text
Therefore, only cards that appear an **odd number of times** will remain.
To keep track of how many times each card appears, I created an `unordered_map`. The average time complexity for insertion and lookup in an `unordered_map` is `O(1)`.
I stored the frequency of every card in the map.
Then, since I needed to find the sum of the cards that remain, I created a variable:
```
```cpp
sum = 0;