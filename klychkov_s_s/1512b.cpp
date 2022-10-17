//Almost Rectangle
#if 0
#pragma GCC optimize("O3,unroll-loops,fast-math")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
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
#include <bitset>
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long, long>
#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a < b) ? b : a)
#define ALL(a) a.begin(), a.end()
#define sp << " "
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

inline void smax(int& a, int b) { if (b > a)a = b; }
inline void smin(int& a, int b) { if (b < a)a = b; }
inline void smax(ll& a, ll b) { if (b > a)a = b; }
inline void smin(ll& a, ll b) { if (b < a)a = b; }

//#define ll __int128
//#define int ll
//#define char ll
//#define double ll

//using namespace std;

const std::string DIGITS = "0123456789";
const std::string ALPH = "abcdefghijklmnopqrstuvwxyz";
std::mt19937 rng((unsigned int)(time(nullptr) + 'm' + 'a' + 'n' + 'u' + 'l'));
std::uniform_int_distribution<int>uid(-1e9, 1e9);
const double PI = 2 * acos(0.0);
constexpr ll LLINF = ll(2e18) + 13;
constexpr int INF = int(1e9) + 7;
constexpr int SIZE = 1e6 + 10;


void solve() {
	int n;
	std::string vr;
	std::cin >> n;
	char ar[410][410];
	std::vector<std::pii> asd;
	for (int i = 0; i < n; ++i) {
		std::cin >> vr;
		for (int j = 0; j < n; ++j) {
			if (vr[j] == '*') {
				asd.push_back(std::mp(i, j));
			}
			ar[i][j] = vr[j];
		}
	}

	if (asd[0].first == asd[1].first) {
		if (asd[0].first == n - 1) {
			ar[0][asd[0].second] = '*';
			ar[0][asd[1].second] = '*';
		}
		else {
			ar[n - 1][asd[0].second] = '*';
			ar[n - 1][asd[1].second] = '*';
		}
	}
	else if (asd[0].second == asd[1].second) {
		if (asd[0].second == n - 1) {
			ar[asd[0].first][0] = '*';
			ar[asd[1].first][0] = '*';
		}
		else {
			ar[asd[0].first][n - 1] = '*';
			ar[asd[1].first][n - 1] = '*';
		}
	}
	else {
		ar[asd[0].first][asd[1].second] = '*';
		ar[asd[1].first][asd[0].second] = '*';
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << ar[i][j];
		}
		std::cout << std::endl;
	}
	//cout << endl;
}

signed main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#ifdef _DEBUG
	freopen("C:\\Users\\zxccdw\\source\\repos\\CMakeProject1\\input.txt", "r", stdin);
	freopen("C:\\Users\\zxccdw\\source\\repos\\CMakeProject1\\output.txt", "w", stdout);
#endif
	int t = 1;
	std::cin >> t;
	while (t--) {
		solve();
	}
}