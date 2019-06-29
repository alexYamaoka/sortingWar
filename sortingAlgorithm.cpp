#include <iostream>
#include "sortingAlgorithm.h"

using namespace std;

void selectionSort(int list[], const int& length, long long& comparisons, long long& swaps)
{
  int index = 0;
  int smallestIndex = 0;
  int location = 0;
  int temp = 0;


  for (index = 0; index < length - 1; index++)
  {
    smallestIndex = index;

    for (location = index + 1; location < length; location++)
    {
      comparisons++;
      if (list[location] < list[smallestIndex])
      {
        smallestIndex = location;
      }

    }


    temp = list[smallestIndex];
    list[smallestIndex] = list[index];
    list[index] = temp;
      swaps++;
      swaps++;
      swaps++;
  }
}


void insertionSort(int list[], const int& length, long long& comparisons, long long& swaps)
{
  int temp = 0;
  int location = 0;

  for (int firstOutOfOrder = 1; firstOutOfOrder < length; firstOutOfOrder++)
  {
    comparisons++;

    if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
    {
      temp = list[firstOutOfOrder];
      location = firstOutOfOrder;
      swaps++;
      swaps++;

      do
      {
        list[location] = list[location - 1];
        location--;
        swaps++; //dd this swaps
        comparisons++;
      }while (location > 0 && list[location - 1] > temp);

      list[location] = temp;

      swaps++;
    }
  }
}


void bubbleSort(int list[], const int& length, long long& comparisons, long long& swaps)
{
  int temp = 0;


  for (int iteration = 1; iteration < length; iteration++)
  {
    for (int index = 0; index < length - iteration; index++)
    {
      comparisons++;

      if (list[index] > list[index + 1])
      {

        temp = list[index];
        list[index] = list[index + 1];
        list[index + 1] = temp;
        swaps++;
        swaps++;
        swaps++;

      }

    }

  }

}
