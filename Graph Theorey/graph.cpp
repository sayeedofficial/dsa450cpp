#include <bits/stdc++.h>
using ll = long long;
using namespace std;



void dfs(vector<int> adj[], int sv, bool visited[]) {
	cout << sv << " ";
	visited[sv] = true;
	for (auto x : adj[sv]) {
		if (visited[x] == 0)
			dfs(adj, x, visited);
	}
}
void addEdge(vector<int> adj[], int e1, int e2) {
	adj[e1].push_back(e2);
	adj[e2].push_back(e1);
}


int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int v;
	cin >> v;
	vector<int> adj[v];
	bool visited[v];
	for (int i = 0; i < v; i++) {
		visited[i] = false;
	}
	addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);

	for (int i = 0; i < v; i++)
		if (visited[i] == 0)
			dfs(adj, i, visited);

	return 0;
}