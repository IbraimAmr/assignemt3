#include <iomanip>
#include <algorithm>
#include <iostream>
#include <random>
#include <list>
using namespace std;
typedef int ElementType;
#define SIZE 30
template <typename ElementType>
void bubbleSort(std::vector<int>& arr);
void SelectionSort(std::vector<int>& arr);
void insertionSort(std::vector<int>& arr);
void quicksort(std::vector<int>& arr);
template <typename ElementType>
void merge(int*, int*, int, int, int);
void mergesort(int*, int*, int, int);
void split(ElementType[], int, int, int&);
void insertionSort(std::vector<int>& arr) {
    int size;
    int index, temp, counter = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] < arr[i - 1]) {
            counter++;
            temp = arr[i]; index = i;
            do {
                arr[index] = arr[index - 1];
                index--;
                counter++;
            } while (index > 0 && arr[index - 1] > temp);

            arr[index] = temp;
        }
}