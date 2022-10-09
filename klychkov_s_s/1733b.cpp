//Rule of League
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
#define int long long

using namespace std;
typedef long long ll;
std::mt19937 rng(time(0)); std::uniform_int_distribution<int>uid(-1e9, 1e9);
const int INF = 1e9 + 7;


void solve() {
	int n, x, y, sch = 1, vr;
	cin >> n >> x >> y;
	if (x == 0 && y == 0) {
		cout << -1;
	}
	else if (x == 0 || y == 0) {
		if (x == 0) {
			swap(x, y);
		}
		if ((n - 1) % x != 0) {
			cout << -1;
		}
		else {
			for (int k = 2; k <= n; k += x) {
				for (int j = 0; j < x; ++j) {
					cout << k sp;
				}
			}
		}
	}
	else {
		cout << -1;
	}
	cout << endl;
}

signed main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#ifdef _DEBUG
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}