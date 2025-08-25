## ex00 : map

### Database has the following format:

```year-month-day , value of one bitcoin```

### input.txt has the following format:

```year-month-day | amount of bitcoin in the account```

### Output should be:

```year-moth-day => amount of bitcoin in the account => account value```

## ex01 : stack


## ex02 : vector & deque

### How the algorithm works?

We get a number sequence as input to the program. Let's consider the following sequence: `5 7 3 2 1 6`

We first consider the numbers as **elements** **recursively** and assign each element a **pair** if possible.<br>We start with the **element size of 1**, this means that each element has 1 number,  so that each number in the sequence `5 7 3 2 1 6` is it's own element.

**Recursion level: 1**

We then assign each element a pair, which is always the next element in the sequence (**This does not change!**). So for the element `5` the pair would be `7`, for `3` the pair would be `2` and for `1` the pair would be `6`.<br>So the sequence after assiging the pairs would look like this:
```
5	7	3	2	1	6
1	1	2	2	3	3
```

We then swap the pairs if needed, so that the smaller element is always before the larger element.<br>For the first pair `5` and `7`, no swapping is necessary since `5` is smaller than `7`. The second pair `3` and `2` needs to be swapped since `3` is larger than `2`. The third pair is fine as well since `1` is smaller than `6`.<br>So the sequence after the swapping looks like this:
```
5	7	2	3	1	6
1	1	2	2	3	3
```

Now the pairs are sorted in ascending order. We will continue swapping the pairs recursively with the new number sequence by **doubling the element size** so the next recursion has the **element size of 2**, this means that each element has 2 numbers.

**Recursion level: 2**

We again assign a pair to each of the elements, which is always the next element. So for the element `5 7` the pair would be `2 3`. The element `1 6` does not have a pair so we leave that be for now.<br>So the sequence after assigning the pairs would look like this:
```
5 7		2 3		1 6
 1	 	 1	 	 2
```

**Recursion level: 3**

Now we start swapping the pairs again. **We only consider the last number of each element** and compare that with the next elements last number. So since `7` is greater than `3` whe swap the elements and end up with the following number sequence.
```
2 3		5 7		1 6
 1		 1		 2
```

**Recursion level: 4**

In the next recursion with the **element size of 4**, the only element would be `2 3 5 7` since we don't have enough numbers to create another element. Because we have only one element in this recursion level we come back to the previous level.

**Back to recursion level 3**

In this recursion level we had this number sequence:
```
2 3		5 7		1 6
 b1		 a1		 b2
```
(`a1` is greater than it's pair `b1`. `b2` doesn't have a pair)

We put the elements into two different containers, `main` and `pend`. The `main` will initially contain all the `a` elements and the `pend` will initially contain all `b` elements (including the odd elements which do not have a pair).

So the `main` would contain `5 7`, and `pend` would contain `2 3` and `1 6`.<br> We start inserting elements from `pend` into `main` using **binary search** using the **jacobsthal sequence**.
