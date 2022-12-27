#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;


constexpr int SIZE = 1e5;

vector<vector<string> > ar;
vector<string> vr;
int h, w, uk = 0, cnt = 1;

void cout_matrix() {
	int stand = to_string(w * h).size();
	for (int i = 0; i < w; ++i) {
		for (int j = 0; j < h; ++j) {
			if (ar[i][j].size() < stand) {
				while (ar[i][j].size() != stand) {
					ar[i][j] = "0" + ar[i][j];
				}
			}
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
}



void fill_po_chas() {
	pair<int, int> cur = make_pair(uk, uk);
	while (ar[cur.first][cur.second] == "0") {
		for (int i = cur.second; i < w - cur.second; ++i) {
			ar[cur.first][i] = to_string(cnt);
			cnt += 1;
		}

		for (int i = cur.first + 1; i < h - cur.first; ++i) {
			ar[i][h - cur.second - 1] = to_string(cnt);
			cnt += 1;
		}
		
		for (int i = w - cur.second - 2; i > cur.second; --i) {
			ar[h - cur.first - 1][i] = to_string(cnt);
			cnt += 1;
		}

		for (int i = h - cur.first - 1; i > cur.second; --i) {
			ar[i][cur.second] = to_string(cnt);
			cnt += 1;
		}
		uk += 1;
		cur = make_pair(uk, uk);
		//cout_matrix();
		//cout << endl;

	}

}


void fill_protiv() {
	return;
}


int main() {
	cin >> h >> w;
	string napr;
	cin >> napr;

	for (int i = 0; i < w; ++i) {
		vr.push_back("0");
	}
	for (int i = 0; i < h; ++i) {
		ar.push_back(vr);
	}
	if (napr == "cws") {
		fill_po_chas();
	}
	
	cout_matrix();
}