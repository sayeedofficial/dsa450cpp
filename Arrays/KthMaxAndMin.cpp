#include <iostream>
#include <algorithm>

using namespace std;

void printKthMinAndMax(int *arr, int n, int k) {

	if (n == 0 || k > n) return;


	sort(arr, arr + n);
	cout << "Kth Minimum" << " " << (arr[k - 1]) << endl;
	cout << "Kth Maximum" << " " << (arr[n - k]) << endl;
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
	int k;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> k;
	printKthMinAndMax(arr, n, k);





	return 0;
}
