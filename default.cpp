#include <iostream>
#include <algorithm>

using namespace std;



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





	return 0;
}
