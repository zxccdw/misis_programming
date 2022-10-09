//A-B Palindrome
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
	int a, b, n;
	string s;
	cin >> a >> b >> s;
	swap(a, b);
	n = s.size();
	for (int i = 0; i < n / 2; ++i) {
		if (s[i] == '?' && s[n - i - 1] != '?') {
			if (s[n - i - 1] == '1') {
				a -= 2;
				s[i] = '1';
			}
			else {
				b -= 2;
				s[i] = '0';
			}
		}
		else if (s[i] != '?' && s[n - i - 1] == '?') {
			if (s[i] == '1') {
				a -= 2;
				s[n - i - 1] = '1';
			}
			else {
				b -= 2;
				s[n - i - 1] = '0';
			}
		}
		else {
			if (s[i] == '1') {
				a -= 1;
			}
			else if(s[i] == '0') {
				b -= 1;
			}
			if (s[n - i - 1] == '1') {
				a -= 1;
			}
			else if(s[n - i - 1] == '0'){
				b -= 1;
			}
		}
	}

	if (n % 2 == 1 && s[n / 2] == '1') {
		a -= 1;
	}
	else if (n % 2 == 1 && s[n / 2] == '0') {
		b -= 1;
	}
	else if (n % 2 == 1 && s[n / 2] == '?') {
		if (a % 2 == 1) {
			s[n / 2] = '1';
			a -= 1;
		}
		else {
			b -= 1;
			s[n / 2] = '0';
		}
	}
	bool fl = 1;
	for (int i = 0; i + i <= n; ++i) {

		if (s[i] == s[n - i - 1] && s[i] == '?') {
			if (a > 1) {
				s[i] = '1';
				s[n - i - 1] = '1';
				a -= 2;
			}
			else {
				s[i] = '0';
				s[n - i - 1] = '0';
				b -= 2;
			}
		}
		else if (s[i] != s[n - i - 1]) {
			fl = 0;
			break;
		}
	}
	if (fl && a == 0 && b == 0) {
		cout << s;
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