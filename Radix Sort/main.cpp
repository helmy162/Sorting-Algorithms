#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void radixSort(vector<int>& arr){
    queue<int> arr2[10];
    int maximum = ceil(log10(arr[0]));
    for(int i=1; i<arr.size(); i++){
        maximum = max(maximum, (int)ceil(log10(arr[i])));
    }

    for(int i=0; i<maximum; i++){
        for(int j=0; j<arr.size();j++){
            arr2[(int)(arr[j]/pow(10, i)) % 10].push(arr[j]);
        }
        int index=0;
        for(int j=0; j<arr.size(); j++){
            while(arr2[index].empty())
            {
                index++;
            }
            arr[j] = arr2[index].front();
            arr2[index].pop();
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

    radixSort(arr);

    cout << endl << endl << "After sorting:" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}
