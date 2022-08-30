#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
    for(int i = 0; i < arr.size() - 1; i++){
        int index = i;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        if(index != i){
            swap(arr[i], arr[index]);
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

    selectionSort(arr);

    cout << endl << endl << "After sorting:" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}
