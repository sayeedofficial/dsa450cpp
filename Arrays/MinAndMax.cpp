#include <iostream>
#include <climits>
using namespace std;


void printMinAndMax(int *arr, int n) {
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Minimum" << " " << min << endl;
	cout << "Maximum" << " " << max << endl;
}


int main(int argc, char const *argv[])
{

	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	printMinAndMax(arr, n);



	return 0;
}
