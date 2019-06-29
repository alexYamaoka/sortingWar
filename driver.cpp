#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#define NDEBUG
#include <cassert>
#include "sortingAlgorithm.h"

using namespace std;

void getData(int list[], const int& length);
  // function to read in data from txt file into array
  // postCondition: reads in 200,000 randomly generated integers into array

int main()
{
  const int length = 200'000;          // 200,000 random integers in txt file
  int unsortedList[length];           // array to hold the integers
  long long numOfComparisons = 0;     // number of comparisons
  long long numOfSwaps = 0;           // number of swaps
  time_t start;                       // used to calculate how long the sorting takes
  time_t end;                             // start and end
  double seconds;                         // stored in variable seconds



  cout << "Sorting Algorithm Comparisons" << endl;
  cout << "Metrics" << endl;
  cout << "Unsorted Array" << endl;
  cout << endl;

  //******************************************************************************************************************************************

  numOfComparisons = 0;
  numOfSwaps = 0;
  getData(unsortedList, length);
    // reads in integers from txt file

  cout << "Reading in data" << endl;
  cout << "Calling Selection Sort...." << endl;
  time(&start);
  selectionSort(unsortedList, length, numOfComparisons, numOfSwaps);
  time(&end);
  seconds = end - start;
  cout << "Selection Sort - " << " Comparisons: " << numOfComparisons << " Swaps: " << numOfSwaps << " Seconds: " << seconds << endl;
  cout << endl;


  //******************************************************************************************************************************************

  numOfComparisons = 0;
  numOfSwaps = 0;
  getData(unsortedList, length);

  cout << "Reading in data" << endl;
  cout << "Calling Insertion Sort...." << endl;
  time(&start);
  insertionSort(unsortedList, length, numOfComparisons, numOfSwaps);
  time(&end);
  seconds = end - start;
  cout << "Insertion Sort - " << " Comparisons: " << numOfComparisons << " Swaps: " << numOfSwaps << " seconds: " << seconds << endl;
  cout << endl;


  //******************************************************************************************************************************************

  numOfComparisons = 0;
  numOfSwaps = 0;
  getData(unsortedList, length);


  cout << "Reading in data" << endl;
  cout << "Calling Bubble Sort...." << endl;
  time(&start);
  bubbleSort(unsortedList, length, numOfComparisons, numOfSwaps);
  time(&end);
  seconds = end - start;
  cout << "Bubble Sort - " << " Comparisons: " << numOfComparisons << " Swaps: " << numOfSwaps << " seconds: " << seconds << endl;
  cout << endl;






  return 0;
}


void getData(int list[], const int& length)
{
  ifstream fin;
  bool success = true;

  fin.open("numbers.txt");

  if (fin)
  {
    cout << "File Successfully Opened" << endl;
  }
  else
  {
    cout << "Error opening file. Please try again" << endl;
    success = false;
    assert(success != false);
    return;
  }

  for (int i = 0; i < length; i++)
  {
    fin >> list[i];
  }

  cout << "length of list: " << length << endl << endl;


  fin.close();
}
