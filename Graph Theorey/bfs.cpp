#include <bits/stdc++.h>
using ll = long long;
using namespace std;


void addEdge(vector<int> adj[], int e1, int e2) {
	adj[e1].push_back(e2);
	adj[e2].push_back(e1);
}


void bfs(vector<int> adj[], int v, int sv) {
	bool visited[v] = {false};
	queue<int> edgesQueue;
	edgesQueue.push(sv);
	while (edgesQueue.empty() == false) {
		auto x =  edgesQueue.front();
		edgesQueue.pop();
		cout << x << " ";
		for (auto x : adj[u]) {
			if (visited[x] == false) {
				visited[x] = true;
				edgesQueue.push(x);

			}
		}

	}
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