#include <iostream>
#include <algorithm>

using namespace std;

void findLargestSumContigous(int *arr, int n) {
	int actualSum = 0, currentSum = 0;

	for (int i = 0; i < n; i++) {
		currentSum += arr[i];
		if (currentSum > actualSum) {
			actualSum = currentSum;
		}
		if(currentSum<0){
			currentSum = 0;
		}
		
	}

	cout<<currentSum<<endl;
}


void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{


	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	findLargestSumContigous(arr,n);





	return 0;
}
