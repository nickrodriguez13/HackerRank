// HackerRank > Algorithms > Mini-Max Sum
// Source: https://www.hackerrank.com/challenges/mini-max-sum

// Summary: 
// Print two space-separated long integers denoting the respective
// minimum and maximum values that can be calculated by 
// summing exactly four of the five integers. (The output 
// can be greater than 32 bit integer.)

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	long int a;
	long int b;
	long int c;
	long int d;
	long int e;
	cin >> a >> b >> c >> d >> e;

	long int numbers[5] = { a, b, c, d, e };
	long int sum = 0;
	long int maximum, minimum;

	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		sum = 0;

		for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++) {
			if (i != j)
				sum += numbers[j];
		}
		if (i == 0) {
			maximum = sum;
			minimum = sum;
		}
		if (sum > maximum)
			maximum = sum;
		if (sum < minimum)
			minimum = sum;
	}

	cout << minimum << " " << maximum << endl;

	return 0;
}
