## ex00 : map

### Database has the following format:

```year-month-day , value of one bitcoin```

### input.txt has the following format:

```year-month-day | amount of bitcoin in the account```

### Output should be:

```year-moth-day => amount of bitcoin in the account => account value```

## ex01 : stack


## ex02 : vector

### How the algorithm works: I guess ? :D

We get a string of numbers as input to the program. After the input is received, we start putting the numbers in two or three vectors. Let's call them `large` and `small` and `lefovers`.

We think of the numbers in pairs, if we consider the following numbers:

`5 3 4 7`

The pairs would be `5` and `3`, `4` and `7`. We compare these pairs and put the larger number in the `large` vector and the smaller number in `small` vector. So because `5` is greater than `3`, `5` would go in the `large` vector and `3` would go in the `small` vector. With the same logic `7` would go in the `large` vector and `4` would go in the `small` vector.

If we would have an uneven amount of numbers as input:

`5 3 4 7 1`

The pairs would be `5` and `3`, `4` and `7`, the lefover that doesn't have a pair is `1`. Like before we would compare the pairs and put `5` and `7` in the large vector and `3` and `4` in the `small` vector. `1` would go in the `leftover` vector.

### How do we sort these numbers with the least amount of comparisons?

**Indexes!** We have two vectors: `large` that contains `5` and `7`. `small` that contains `3` and `4`. In the beginning `5` and `3` were pairs that we compared, now they are in seperate containers and we need to assing them an index so we remember that they were pairs. It's easy now since they both are the first element in their respective containers, so we assign them the index of `1`. Of course we'll do the same with the rest of the numbers, so `7` and `4` would be assigned with the index of `2`.

**NOTE:** The indexes will not change as we start sorting, we need to still keep track of the pairs until the very end

### Let's start sorting!

First we need to sort the `large` vector, since it's already sorted we are good. If it weren't we would have to sort them using **merge-insertion** which is what we are doing. What matters is that the indexes remain the same so that the pair in the `small` vector knows where it's pair is. The easiest way to do this is to move the pair in the `small` container to the same index as their pair in the `large` container.

Now that we have assigned indexes to the numbers and the `large` container is sorted we will start sorting. We will use **binary search** to find the correct place in the `large` container to insert the number found in the `small` container. Using the same numbers as before and the `large` container sorted we know that the first element `3` found in the `small` container is smaller than the first element `5` found in the `large` container. After the number `3` is inserted we should have in the large container:

`3` with the index of `1`<br>`5` with the index of `1`<br>`7` with the index of `2`

The `small` container has only `4` left with the index of `2`.

Using **binary search** we can search for the correct place for `4`. We start in the middle of the container which is `5`. `4` is smaller than `5` so we check that is `4` smaller than `3`. `4` is larger than `3` so the correct place must be in between `3` and `5`!
