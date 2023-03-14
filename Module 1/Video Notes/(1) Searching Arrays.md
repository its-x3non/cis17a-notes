#Module1 #VideoNotes
# Searching Arrays
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
# [8.1 - Introduction to Search Algorithms](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md)
## Introduction to Search Algorithms
- **Search:** Locate an item in a list of information
- Two algorithms we'll examine:
	- Linear Search
	- Binary Search

## [Linear Search](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md#The-Linear-Search)
### (1 of 2)
- Also called the sequential search
- Starting at the first element, this algorithm sequentially steps through an array examining each element until it locates the value it is searching for.

### (2 of 2)
- [THE ALGORITHM](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md#Linear-Search-Pseudo)

## [A Linear Search Function](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md#Linear-Search-Example)

## Linear Search - Tradeoffs
- Benefits:
	- Easy algorithm to understand
	- Array can be in any order
- [Disadvantages:](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md#Inefficiency-of-the-Linear-Search)
	- Inefficient: for array N elements, examines N/2 elements on average for value in array, N elements for value not in array.

## [Binary Search](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md#The-Binary-Search)
### (1 of 2)
- Requires array elements to be in order
1) Divides the array into 3 sections:
	- Middle element
	- Elements on one side of the middle element
	- Elements on the other side of the middle element
2) If the middle element is the correct value, done. Otherwise, go to step 1 using only half of the array that may contain the correct value.
3) Continue steps 1 and 2 until either the value is found or there are no more elements to examine.

### (2 of 2)
- [THE ALGORITHM](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md#Binary-Search-Pseudo)

## Binary Search - Tradeoffs
- [Benefits:](../Pearson%20Notes/8.1%20Focus%20of%20Software%20Engineering.md#The-Efficiency-of-the-Binary-Search)
	- Much more efficient than linear search. For array of N elements, performs at most **log<sub>2</sub>N** comparisons
- Disadvantages:
	- Requires that array elements be sorted