#include <iostream>
#include <algorithm>
using namespace std;
void inputArray(int arr[], int n) {
    cout<< "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }
}

void printArray(int arr[], int n) {
    cout<< "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }
    cout <<endl;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return 0;
}

 findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

float averageArray(int arr[], int n) {
    int sum = sumArray(arr, n);
    return static_cast<float>(sum) / n;
}

void sortArray(int arr[], int n) {
    sort(arr, arr + n);
}

int searchValue(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (int arr[] == value) {
            return i;
        }
    }
    return -;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;

    int arr[n];

    inputArray(arr, n);

    printArray(arr, n);

    cout<< "Largest element: " << findMax(arr, n) << endl;
    cout<< "Smallest element: " << findMin(arr, n) << endl;
    cout<< "Sum of elements: " << sumArray(arr, n) << endl;
    cout<< "Average of elements: " << averageArray(arr, n) << endl;

    int sortedArr[n];
    copy(arr, arr + n, sortedArr);
    sortArray(sortedArr, n);
    cout<< "Sorted array: ";
    printArray(sortedArr, n);

    int searchValue;
    cout<< "Enter a value to search: ";
    cin>> searchValue;
    int index = searchValue(arr, n, searchValue);
    if (index != -1) {
        cout << "Value found at index: " << index << endl;
    } else {
        cout<< "Value not found in the array." << endl;
    }

    return 0;
}
