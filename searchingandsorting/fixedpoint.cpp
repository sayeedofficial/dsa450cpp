#include <iostream>
using namespace std;



//linear search
vector<int> fixedPoint(int *arr,int n){
	vector<int> result;
	for(int i=0;i<n;i++){
		if(i==arr[i]){
			result.push_back(arr[i]);
		}
	}
	return result;
}

int main() {


	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) { b 
		cin >> arr[i];
	}


	fixedPoint(arr, n);








}
