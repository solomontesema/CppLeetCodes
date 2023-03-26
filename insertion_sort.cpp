#include <iostream>
using namespace std;
/*
Insertion Sort builds a final sorted array one element at a time. It iterates through an array and compares the current element to the previous elements in the array. It has a space complexity of O(1) and time complexity of O(n^2).
*/
void insertionSort(int arr[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
       key = arr[i];
       j = i - 1;
       while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = key;
   }
}

int main() {
   int arr[] = { 12, 11, 13, 5, 6 };
   int n = sizeof(arr) / sizeof(arr[0]);
   insertionSort(arr, n);
   cout << "Sorted array: \n";
   for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
   cout << endl;
   return 0;
}

