#include<iostream>
using namespace std;

void reverse(int *arr,int n){
    int i = 0;
    int j = n - 1;
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
}

int main(){

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    reverse(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " " << endl;
    }
}