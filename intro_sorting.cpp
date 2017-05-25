// HackerRank > Algorithms > Intro to Sorting
// Source: https://www.hackerrank.com/challenges/tutorial-intro

// Summary: 
// Given a sorted array () and a number (), 
// can you print the index location of  in the array?

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector<int> numbers;
	int value;
	cin >> value;
	int size;
	cin >> size;
	int nextNumber;

	for (int i = 0; i < size; i++) {
		cin >> nextNumber;
		numbers.push_back(nextNumber);
	}

	for (int i = 0; i < size; i++) {
		if (value == numbers[i]) {
			cout << i << endl;
			break;
		}
	}

	system("PAUSE");

	return 0;
}
