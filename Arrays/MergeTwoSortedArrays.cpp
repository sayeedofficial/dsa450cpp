#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int *arr,int n){
	for(int i=0;i<n;i++){ 
		cout<<arr[i]<<" ";
	}
	
}

void mergeTwoSortedArraysWithOutExtraSpace(int *arr1,int *arr2,int n1,int n2){
	//time complexity o(nlogn);
	//space complexity o(n1+n2);
	int i=0,j=0,k=n1-1;

	while(i<=k && j<n2){
		if(arr1[i]<arr2[j]) i++;
		else
			swap(arr2[j++],arr1[k--]);
	}
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);
	printArray(arr1,n1);
	printArray(arr2,n2);

}


void mergeTwoSorted(int *arr1,int *arr2,int n1,int n2){
	//space complexity o(1)
	//time  complexity o(m+n)
	int i=0,j=0,k=0;

	int *res = new int[n1+n2];
	while(i<n1 && j<n2){
		if(arr1[i]<arr2[j]){
			res[k]= arr1[i];
			i++,k++;
		}else{
			res[k] = arr2[j];
			j++,k++;
		}
	}

	while(i<n1){
		res[k] = arr1[i];
		i++;k++;
	}
	while(j<n2){
		res[k] = arr2[j];
		j++;k++;
	}

	for(int i=0;i<n1+n2;i++){
		cout<<res[i]<<" ";
	}

}




int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int n1,n2;
	cin>>n1>>n2;
	int *arr1 = new int[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int *arr2 = new int[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}

	mergeTwoSortedArraysWithOutExtraSpace(arr1,arr2,n1,n2);
	return 0;
}
