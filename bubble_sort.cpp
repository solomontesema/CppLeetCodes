#include <iostream>

using namespace std;
/*
 Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. It has a space complexity of O(1) and time complexity of O(n^2).
*/
void bubbleSort2(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSort(int arr[], int n, bool descending= false){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
            bool order = descending ? (arr[j+1] < arr[j]): (arr[j+1] > arr[j]);
            if(order){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 2, 7, 1, 9, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n, false);

    cout << "\nAfter ascending order sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n, true);

    cout << "\nAfter descending order sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

