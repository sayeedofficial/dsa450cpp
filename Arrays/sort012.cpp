#include <iostream>
using namespace std;

void sort012(int *arr, int n) {
	int count0 = 0, count1 = 0, count2 = 0;

	for (int i = 0; i < n; i++) {
		switch (arr[i]) {
		case 0 : count0++;
		case 1 : count1++;
		case 2 : count2++;
		}
	}

	int i = 0;
	while (i != count0) {
		arr[i] = 0;
		i++;
	}
	while (i != count1) {
		arr[i] = 1;
		i++;
	}
	while (i != count2) {
		arr[i] = 2;
		i++;
	}
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
	sort012(arr, n);
	printArray(arr, n);

	return 0;
}
