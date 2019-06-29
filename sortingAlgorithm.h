#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

void selectionSort(int list[], const int& length, long long& comparisons, long long& swaps);
  // function to sort the array using selectioin sort algorithm
  // postCondition: list will be sorted smallest to largest, and return the number of comparisons and swaps made


void insertionSort(int list[], const int& length, long long& comparisons, long long& swaps);
  // function to sort the array using insertion sort algorithm
  // postCondition: list will be sorted smallest to largest, and return the number of comparisons and swaps made


void bubbleSort(int list[], const int& length, long long& comparisons, long long& swaps);
  // function to sort the array using bubble sort algorithm
  // postCondition: list will be sorted smallest to largest, and return the number of comparisons and swaps made 



#endif
