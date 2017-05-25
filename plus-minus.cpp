// HackerRank > Algorithms > Plus Minus
// Source: https://www.hackerrank.com/challenges/plus-minus

// Summary: 
// You must print the following  lines:
// 1. A decimal representing of the fraction of positive numbers in the array compared to its size.
// 2. A decimal representing of the fraction of negative numbers in the array compared to its size.
// 3. A decimal representing of the fraction of zeroes in the array compared to its size.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}

	int positive = 0;
	int negative = 0;
	int zero = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0)
			positive++;
		else if (arr[i] < 0)
			negative++;
		else if (arr[i] == 0)
			zero++;
	}

	double positive_fraction = (double)positive / n;
	double negative_fraction = (double)negative / n;
	double zero_fraction = (double)zero / n;

	cout << setprecision(6) << positive_fraction << endl;
	cout << setprecision(6) << negative_fraction << endl;
	cout << setprecision(6) << zero_fraction << endl;

	return 0;
}
