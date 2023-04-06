//
//  main.cpp
//  Cs123 8-2
//
//  Created by Justin Brown on 12/8/22.
//

#include <iostream>

using namespace std;

int smallestIndex(int a[], int arrSize);

int smallestIndex(int a[], int arrSize) {
    int leastIndex = 0;
    for (int i = 1; i < arrSize; i++) {
        if (a[leastIndex] > a[i]) {
            leastIndex = i;
        }
    }
    return leastIndex;
}
int main() {
    
    int arr[15];
    
    cout << "Enter 15 integers: " << endl;
    for (int i= 0; i < 15; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<15; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "The smallest element in list is: " << arr[smallestIndex(arr, 15)] << endl;
    cout << "The position of the first occurrence of the element in list is integer: " <<  smallestIndex(arr, 15) + 1 <<  endl;
    return 0;
}
