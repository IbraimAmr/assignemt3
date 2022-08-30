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
 //////////////////////////////////////////////////////////////////////////////////
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
             arr[i] =min;
         }
     }    
 }

 ////////////////////////////////////////////////////////////////////////////////////////////////
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
 
 ////////////////////////////////////////////////////////////////////////////////////////////////////
 
 template <typename ElementType>
 void quicksort(std::vector<int>& arr) {
     int var;
     int first, last, x;
     if (first < last) {                
        split(x, first, last, var);  
         quicksort(x, first, var - 1); 
         quicksort(x, var + 1, last);   
     }
 }
 
 void split(ElementType* x,  int first, int last, int& var)
 {
    // int first, last, x;
     ElementType m = x[first];   
     int left = first,                
         right = last;                
     while (left < right) {
         while (m < x[right])      
             right--;                   
         while (left < right &&       
             (x[left] < m || x[left] == m))
             left++;

         if (left < right)             
             swap(x[left], x[right]);   
     }
     
     var = right;
     x[first] = x[var];
     x[var] = m;
 }
 /////////////////////////////////////////////////////////
 template <typename ElementType>
 void mergesort(std::vector<int>& arr) {
     int middle;
     int low,high,a,b;
     if (low < high) {
         middle = (low + high) / 2;
         mergesort(a, b, low, middle);
         mergesort(a, b, middle + 1, high);
         merge(a, b, low, middle, high);
     }
 }
 void merge(int* m, int* n, int low, int  middle, int high) {
     int h, i, j, k;
     h = low;
     i = low;
     j = middle + 1;

     while ((h <= middle) && (j <= high)) {
         if (m[h] <= m[j]) {
             n[i] = m[h];
             h++;
         }
         else {
             n[i] = m[j];
             j++;
         }
         i++;
     }
     if (h > middle) {
         for (k = j; k <= high; k++) {
            n[i] = m[k];
             i++;
         }
     }
     else {
         for (k = h; k <= middle; k++) {
             n[i] = m[k];
             i++;
         }
     }
     for (k = low; k <= high; k++)
         m[k] = n[k];
 }
 /////////////////////////////////////////////////////////////////////////
 
 template <typename ElementType>
 void radixSort(std::vector<int>& arr) {
     list<ElementType>* var = new list<ElementType>[base];
     int basePower = 1;
     ElementType val;
     for (int p = 1; p <= num; p++) {
         while (!x.empty()) {
             val = x.front();
             x.pop_front();
             int digit = val % (base * basePower) / basePower;
             var[digit].push_back(val);
         }
         for (int i = 0; i < base; i++)
             while (!var[i].empty()) {
                 val = var[i].front();
                 x.push_back(val);
                 var[i].pop_front();
             }
         basePower *= base;
         cout << p << ": ";
         for (list<ElementType>::iterator i = x.begin(); i != x.end(); i++)
             cout << setfill('0') << setw(num) << *i << ", ";
         cout << endl;
     }
 }

