// HackerRank > Algorithms > Diagonal Difference
// Source: https://www.hackerrank.com/challenges/diagonal-difference

// Summary of Problem:
// Print the absolute difference between the two sums 
// of the matrix's diagonals as a single integer.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(n));
	for (int a_i = 0; a_i < n; a_i++) {
		for (int a_j = 0; a_j < n; a_j++) {
			cin >> a[a_i][a_j];
		}
	}

	int sumPrimaryDiagonal = 0;
	int j = 0;

	for (int i = 0; i < n; i++) {
		sumPrimaryDiagonal += a[i][j];
		j++;
	}

	int sumSecondaryDiagonal = 0;
	j = 0;

	for (int i = n - 1; i >= 0; i--) {
		sumSecondaryDiagonal += a[i][j];
		j++;
	}

	int difference = abs(sumPrimaryDiagonal - sumSecondaryDiagonal);
	cout << difference << endl;

	return 0;
}
