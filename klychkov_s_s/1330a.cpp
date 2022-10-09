//Dreamoon and Ranking Collection
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
#define min(a, b) (a) < (b) ? a : b


//using namespace std;
typedef long long ll;
std::mt19937 rng(time(0)); std::uniform_int_distribution<int>uid(-1e9, 1e9);
const int INF = 202;


void solve() {
    std::vector<int> u;
    int n, x, vr;
    std::cin >> n >> x;
    for (int i = 0; i <= INF; i++) {
        u.push_back(false);
    }
    for (int i = 1; i <= n; i++) {
        std::cin >> vr;
        u[vr] = true;
    }
    for (int i = n + x; i > 0; i--) {
        int sch = 0;
        for (int j = 1; j <= i; j++) {
            if (!u[j]) {
                sch++;
            }
        }
        if (sch <= x) {
            std::cout << i << endl;
            return;
        }
    }
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