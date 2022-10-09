//Dorms War
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
#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a < b) ? b : a)

using namespace std;
typedef long long ll;
std::mt19937 rng(time(0)); std::uniform_int_distribution<int>uid(-1e9, 1e9);
const int SIZE = 1e5 + 10;

void solve() {
    int n;
    cin >> n;
    int last = 0;
    string s;
    cin >> s;
    set<char> bad;
    int k; 
    char c;
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cin >> c;
        bad.insert(c);
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (bad.count(s[i])) {
            ans = max(ans, i - last);
            last = i;
        }
    }
    cout << ans << "\n";
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