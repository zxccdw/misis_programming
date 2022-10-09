//Cypher
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <map>
#include <chrono>
#include <set>
#include <stack>
#include <vector>
#include <time.h>
#include <random>
#include <algorithm>
#include <string>
#include <string.h>
#include <queue>
#include <deque>
#include <functional>
#include <cctype>
#include <list>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <complex>
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long, long>
#define sp << " "
#define endl "\n"
#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a < b) ? b : a)

using namespace std;
typedef long long ll;
std::mt19937 rng(time(0)); std::uniform_int_distribution<int>uid(-1e9, 1e9);
const int INF = 1e9 + 7;


void solve() {
	vector<int> ar;
	int n, vr, sz;
	string buk;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> vr;
		ar.push_back(vr);
	}
	for (int i = 0; i < n; ++i) {
		cin >> sz >> buk;
		for (int j = 0; j < sz; ++j) {
			if (buk[j] == 'D') {
				ar[i] = (ar[i] + 1) % 10;
			}
			else {
				ar[i] = (10 + ar[i] - 1) % 10;
			}
		}
	}
	for (auto& i : ar) {
		cout << i sp;
	}
	cout << endl;
}

signed main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#ifdef _DEBUG
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	int t;
    std::cin >> t;
	while (t--) {
		solve();
	}
}