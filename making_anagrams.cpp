// Summary:
// Print a single integer denoting the number of characters you
// must delete to make the two strings anagrams of each other.

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

int number_needed(string a, string b) {
    int deletions = 0;
    bool match = false; 
    
    for(int i = 0; i < a.length(); i++) {
        match = false; 
        for(int j = 0; j < b.length(); j++) {
            if(a[i] == ' ') break;
            if(a[i] == b[j]) {
                a[i] = ' ';
                b[j] = ' ';
            }
        }
    }
    
    for(int i = 0; i < b.length(); i++) {
        match = false; 
        for(int j = 0; j < a.length(); j++) {
            if(b[i] == ' ') break;
            if(b[i] == a[j]) {
                b[i] = ' ';
                a[j] = ' ';
            }
        }
    }
    
    for(int i = 0; i < a.length(); i++) {
        if (a[i] != ' ') deletions++;
    }
    for(int i = 0; i < b.length(); i++) {
        if (b[i] != ' ') deletions++;
    }
    
    return deletions; 
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
