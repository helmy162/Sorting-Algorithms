#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr, int first, int last){

    if (first < last)
    {
        int pivot = arr[last];
        int i = (first - 1);
        for (int j = first; j < last; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[last]);

        quickSort(arr, first, i);
        quickSort(arr, i + 2, last);
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

    quickSort(arr, 0, arr.size()-1);

    cout << endl << endl << "After sorting:" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}
