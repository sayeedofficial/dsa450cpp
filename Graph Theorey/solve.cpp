#include <bits/stdc++.h>
using ll = long long;
using namespace std;


bool solve(ll *arr, int n) {
	ll sum = 0;
	sort(arr, arr + n);

	ll l = 0, r = n - 1;
	while (l < r) {
		if (arr[l] + arr[r] == sum)
			return true;
		else if (arr[l] + arr[r] < sum)
			l++;
		else if (arr[l] + arr[r] > sum)
			r--;
	}
	return false;

}




int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n;
	cin >> n;

	ll *arr = new ll[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	solve(arr, n);

	(true == solve(arr, n)) ? cout << "Two numbers add upto 0" : cout << "Two numbers does not add upto 0";




	return 0;
}