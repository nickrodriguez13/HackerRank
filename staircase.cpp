// HackeRank > Algorithms > Staircase
// Source: https://www.hackerrank.com/challenges/staircase

// Summary: 
// Print a staircase of size  using # symbols and spaces.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j >= (n - i)) cout << '#';
			else cout << ' ';
		}
		cout << endl;
	}

	return 0;
}
