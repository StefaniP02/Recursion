#include <iostream>

using namespace std;

bool isEqual(int* arr1, int arr1Length, int* arr2, int arr2Length, int arr1Index, int arr2Index);
void printArrayRecursive(int* arr, int length, int currentIndex);
int countDigitsRecursive(int number);
int sumOfDigits(int number);

int main() {
    //int length;
    //cin >> length;
    //int *arr = new int[length];

    //for (int i = 0; i < length; i++) {
    //    int current;
    //    cin >> current;
    //    arr[i] = current;
    //}


//    cout << countDigitsRecursive(1111);
  cout << sumOfDigits(123);
    //printArrayRecursive(arr, length, 0);

    return 0;

}

int sumOfDigits(int number){
    if( number <= 0){
        return 0;
    }

    return number % 10 + sumOfDigits(number / 10);
}

int countDigitsRecursive(int number){
    if (number <= 0){
        return 0;
    }

    return 1 + countDigitsRecursive(number / 10);
}

void printArrayRecursive(int* arr, int length, int currentIndex){
    if(currentIndex == length){
        return;
    }

    cout << arr[currentIndex];
    printArrayRecursive(arr, length, ++currentIndex);
}

bool isEqual(int* arr1, int arr1Length, int* arr2, int arr2Length, int arr1Index, int arr2Index){
    return false;
}

