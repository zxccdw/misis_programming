//Remove Duplicates
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


using namespace std;
typedef long long ll;
mt19937 rng(time(0)); uniform_int_distribution<int>uid(-1e9, 1e9);
const int INF = 100000;




void first_solve() {
	int n, vr, q, sch = 0;
	int ar[INF];
	int was[INF];

	fill(was, was + INF, -INF);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> ar[i];
	}
	for (int i = n - 1; i >= 0; --i) {
		if (was[ar[i]] == -INF) {
			sch += 1;
			was[ar[i]] = i;
		}
	}
	cout << sch << endl;
	for (int i = 0; i < n; ++i) {
		if (was[ar[i]] == i) {
			cout << ar[i] sp;
		}
	}
}

void second_solve() {
	int n, vr, q, sch = 0;
	int ar[INF];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> ar[i];
	}
	for (int i = n - 1; i >= 0; --i) {
		if (ar[i] == -INF) {
			continue;
		}
		sch += 1;
		for (int j = 0; j < i; ++j) {
			if (ar[j] == ar[i]) {
				ar[j] = -INF;
			}
		}
	}
	cout << sch << endl;
	for (int i = 0; i < n; ++i) {
		if (ar[i] == -INF) {
			continue;
		}
		cout << ar[i] sp;
	}
}



signed main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#ifdef _DEBUG
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	second_solve();
	/*cout << INF << endl;
	for (int i = 0; i < INF; ++i) {
		cout << i % 50 sp;
	}
	cout << endl;*/
}