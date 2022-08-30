#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include<iostream>
#include<vector>

using namespace std;

void split(vector<int>& arr, vector<int>& left_arr, vector<int>& right_arr){
    for(int i=0; i < arr.size()/2; i++){
        left_arr.push_back(arr[i]);
    }
    for(int i = arr.size()/2; i < arr.size(); i++){
        right_arr.push_back(arr[i]);
    }
}

void merge(vector<int>& arr, vector<int>& left_arr, vector<int>& right_arr){
    int index1= 0;
    int index2= 0;
    while( (index1 != left_arr.size()) && (index2 != right_arr.size()) ){
        if(left_arr[index1] > right_arr[index2]){
            arr[index1+index2] = right_arr[index2];
            index2++;
        }
        else{
            arr[index1+index2] = left_arr[index1];
            index1++;
        }
    }
    if(index1 != left_arr.size()){
        while(index1!=left_arr.size()){
            arr[index1+index2] = left_arr[index1];
            index1++;
        }
    }
    else{
        while(index2 != right_arr.size()){
            arr[index1+index2] = right_arr[index2];
            index2++;
        }

    }
}

void mergeSort(vector<int>& arr){
    if(arr.size() < 2) return;

    vector<int> left_arr;
    vector<int> right_arr;

    split(arr, left_arr, right_arr);
    mergeSort(left_arr);
    mergeSort(right_arr);
    merge(arr, left_arr, right_arr);
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

    mergeSort(arr);

    cout << endl << endl << "After sorting:" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}
