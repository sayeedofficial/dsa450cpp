#include <iostream>
#include <algorithm>

using namespace std;


void RotateByOne(int *arr,int n){
	int temp = arr[n-1];
	for(int i=n;i>0;i--){
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
}

void printArray(int *arr,int n){
	for(int i=0;i<n;i++){ 
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{


	int n;
	cin>>n;

	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	RotateByOne(arr,n);
	printArray(arr,n);





	return 0;
}
