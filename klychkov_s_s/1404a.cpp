//Balanced Bitstring
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
#include <complex>
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long, long>
#define sp << " "
#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a < b) ? b : a)
#define ALL(a) a.begin(), a.end()
//#define ll __int128
//#define int ll
//#define char ll
//#define double ld
typedef long long ll;
typedef unsigned long long ull;



using namespace std;

std::mt19937 rng(time(0)); std::uniform_int_distribution<int>uid(-1e9, 1e9);

const string DIGITS = "0123456789";
const string ALPH = "abcdefghijklmnopqrstuvwxyz";
const double PI = 2 * acos(0.0);
const int SIZE = 1e5 + 10;

void solve() {
	int k, n, sch_f, cnt;
	string s;
	cin >> n >> k >> s;
	sch_f = 0;
	int sch = 0;
	for (int i = 0; i < k; ++i) {
		for (int j = i + k; j < n; j += k) {
			if (s[j] == '?' && s[i] != '?') {
				s[j] = s[i];
			}
			else if (s[i] == '?' && s[j] != '?') {
				s[i] = s[j];
			}
			else if (s[i] != s[j]) {
				cout << "NO" << endl;
				return;
			}
		}
	}
	int ed = 0, zer = 0;
	for (int i = 0; i < k; ++i) {
		if (s[i] == '1') {
			ed += 1;
		}
		else if (s[i] == '0') {
			zer += 1;
		}
	}
	for (int i = 0; i < k; ++i) {
		if (s[i] == '?') {
			if (ed < k / 2) {
				s[i] = '1';
				ed += 1;
			}
			else {
				s[i] = '0';
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		s[i] = s[i % k];
	}
	ed = 0; zer = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '1') {
			ed += 1;
		}
		if (s[i] == '0') {
			zer += 1;
		}
		if (i % k == k - 1) {
			if (zer == k / 2 && ed == k / 2) {
				zer = 0;
				ed = 0;
				continue;
			}
			else {
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;

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