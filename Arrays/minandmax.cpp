#include <iostream>
#include <utility>
using namespace std;

pair<int,int> minandmax(int *arr,int n){
    pair<int, int> ans;

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n;i++){
        if(arr[0]>max){
            max = arr[0];
        }
        if(arr[0]<min){
            min = arr[0];
        }
    }
    ans.first = min;
    ans.second = max;

    return ans;
}

int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int, int> result = minandmax(arr, n);
    cout << "min" << result.first << " "<< "max" << result.second<<endl;
}