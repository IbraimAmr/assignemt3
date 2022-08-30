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
void SelectionSort(std::vector<int>& arr) {
    int size;
    int min;
    int minIndex, counter = 0;
    for (int i = 0; i < size - 1; i++) {
        min = arr[i];
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            counter++;
            if (min > arr[j]) {
                min = arr[j];
                minIndex = j;
            }
        }
        if (minIndex != i) {
            arr[minIndex] = arr[i];
            arr[i] = min;
        }
    }
}