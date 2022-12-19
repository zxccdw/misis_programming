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
#include <fstream>
#include "my_lib.hpp"
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
constexpr int SIZE = 1000 + 10;
constexpr double eps = 0.00001;

using namespace std;

struct Pendulum {
	const double dt = 0.01, g = 9.8;
	double m = 10, k = 100, mu = 1;
	double x_stable = 0, x = 10, v = 0, f = 0, a = 0, y = 0;
	double t = 0;
};

Pendulum model, mt_temp;

double sign(double t) {
	if (t - 0 > eps) {
		return 1;
	}
	if (t - 0 < eps) {
		return -1;
	}
	return 0;
}

void move(Pendulum &model) {
	model.t += model.dt;
	model.f = model.k * (model.x_stable - model.x) - sign(model.v) * model.mu * model.m * model.g;
	model.a = model.f / model.m;
	model.v += model.a * model.dt;
	model.x += model.v * model.dt;
}


signed main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#ifdef _DEBUG
	freopen("C:\\Users\\zxccdw\\source\\repos\\CMakeProject1\\input.txt", "r", stdin);
	freopen("C:\\Users\\zxccdw\\source\\repos\\CMakeProject1\\output.txt", "w", stdout);
#endif
	for (double t = 0; t < 1000; t += 1) {
		move(model);
		cout << model.x << endl;
	}
}