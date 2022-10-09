//Deadly Laser
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

//using namespace std;
typedef long long ll;
std::mt19937 rng(time(0)); std::uniform_int_distribution<int>uid(-1e9, 1e9);
const int INF = 1e9;

bool exist(int x, int y, int n, int m) {
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    return true;
}

void solve() {
	int n, m, s_x, s_y, d;
	std::cin >> n >> m >> s_x >> s_y >> d;
	if (min(s_x - 1, m - s_y) <= d && min(n - s_x, s_y - 1) <= d) {
		std::cout << -1;
	}
	else {
		std::cout << n + m - 2;
	}
	std::cout << endl;
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