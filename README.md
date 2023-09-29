# Sorting Algorithms in C

## Objectives

The primary objectives of this project are to implement at least four different sorting algorithms in C programming, understand the concept of Big O notation for evaluating time complexity, learn how to select the best sorting algorithm for a given input, and explore the concept of stable sorting algorithms.

## Sorting Algorithms Implemented

1. **Bubble Sort**: A simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. It has a time complexity of O(n^2).

2. **Insertion Sort**: Another comparison-based sorting algorithm that builds the final sorted array one item at a time. It has an average time complexity of O(n^2) but can perform well for small datasets.

3. **Quick Sort**: A divide-and-conquer sorting algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. Quick Sort has an average time complexity of O(n log n).

4. **Merge Sort**: A stable sorting algorithm that divides the unsorted list into n sub-lists, each containing one element, and then repeatedly merges sub-lists to produce new sorted sub-lists until there is only one sub-list remaining. Merge Sort has a time complexity of O(n log n).

## Big O Notation and Time Complexity

In computer science, Big O notation is used to describe the upper bound on the time complexity of an algorithm. It helps us analyze and compare the efficiency of algorithms as the input size grows.

For example:
- Bubble Sort: O(n^2)
- Insertion Sort: O(n^2)
- Quick Sort: O(n log n)
- Merge Sort: O(n log n)

Understanding Big O notation is crucial for selecting the most efficient algorithm for a specific task.

## Selecting the Best Sorting Algorithm

The choice of the best sorting algorithm depends on various factors such as the size of the dataset, the initial order of elements, and the available memory. 

- **Bubble Sort** and **Insertion Sort** are suitable for small datasets or nearly sorted data.
- **Quick Sort** and **Merge Sort** are efficient for larger datasets, with Quick Sort often being faster in practice due to smaller constant factors.

## Stable Sorting Algorithm

A stable sorting algorithm is one that maintains the relative order of equal elements in the sorted output as they appeared in the original input. 

- **Merge Sort** is an example of a stable sorting algorithm. It ensures that elements with equal keys appear in the same order in the sorted output as they did in the input.

This project provides you with practical implementations of sorting algorithms in C and the knowledge needed to analyze and choose the most suitable algorithm for different scenarios. Enjoy exploring and learning! 🚀📊
