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
void bubbleSort(std::vector<int>& arr) {
    int temp;
    int size;
    int counter = 0;
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++) {
            counter++;
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}