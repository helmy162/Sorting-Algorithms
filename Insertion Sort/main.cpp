#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
    for(int i=1; i<arr.size(); i++){
        int element = arr[i];
        int j = i - 1;
        while(j >= 0){
            if(arr[j] > element){
                arr[j+1] = arr[j];
                j= j-1;
            }
            else break;
        }
        arr[j+1] = element;
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

    insertionSort(arr);

    cout << endl << endl << "After sorting:" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}
