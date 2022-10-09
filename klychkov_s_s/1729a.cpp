//Two Elevators
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
const int INF = 1e9;

void solve() {
	int a, b, c, first = 0, second = 0;
	cin >> a >> b >> c;
	first = abs(1 - a);
	second = abs(c - b) + abs(c - 1);
	if (first == second) {
		cout << 3;
	}
	else if (first > second) {
		cout << 2;
	}
	else {
		cout << 1;
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