#include <iostream>
using namespace std;

void print(int *arr,int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void rotate(int *arr,int n){
	int temp = arr[0];
	for(int i = 0;i<n-1;i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = temp;
	print(arr,n);
}


int main() {


	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	rotate(arr, n);








}
