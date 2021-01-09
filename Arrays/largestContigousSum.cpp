#include <iostream>
using namespace std;

void print(int *arr,int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void largestSum(int *arr,int n){
	int currentSum=0,maximumSum=0;

	for(int i = 0;i<n;i++){
		currentSum+=arr[i];
		if(currentSum>maximumSum){
			maximumSum = currentSum;
		}
		if(maximumSum<0){
			maximum=0;
		}
	}

	cout<<maximumSum<<endl;

}

int main() {


	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	largestSum(arr,n);

	








}
