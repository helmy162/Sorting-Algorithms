#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    for (int i = 0; i < arr.size()-1; i++){
        for (int j = 1; j < arr.size() - i -1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    vector<int> arr;
    int i=10;
    srand(time(0));
    while(i--){
        int x = rand() % 10;
        arr.push_back(x);
    }

    cout << "Before sorting:" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }

    bubbleSort(arr);

    cout << endl << endl << "After sorting:" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}