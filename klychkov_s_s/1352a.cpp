//Sum of Round Numbers
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

//using namespace std;
typedef long long ll;
std::mt19937 rng(time(0)); std::uniform_int_distribution<int>uid(-1e9, 1e9);
const int INF = 1e9;


void solve() {
	std::string num;
	std::cin >> num;
	int k = num.size();
	std::vector <int> ar;
	for (auto& i : num) {
		--k;
		if (i == '0') {
			continue;
		}
		ar.push_back(((i - '0') * pow(10, k)));
	}
	std::cout << ar.size() << endl;
	for (auto& i : ar) {
		std::cout << i sp;
	}
	std::cout << endl;
}


signed main() {
	std:: ios_base::sync_with_stdio(0); std:: cin.tie(0); std:: cout.tie(0);
#ifdef _DEBUG
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	int t;
	std:: cin >> t;
	while (t--) {
		solve();
	}
}