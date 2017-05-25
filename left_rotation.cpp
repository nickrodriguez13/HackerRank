// Summary: 
// Print a single line of (n) space-separated integers denoting the 
// final state of the array after performing  left rotations.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, d; 
    cin >> n >> d;
    
    vector<int> a(n); 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int new_pos;
    vector<int> new_a(n);
    
    for(int i = 0; i < n; i++)
    {
        new_pos = i - d; 
        if (new_pos < 0) new_pos = n + new_pos; 
       
        new_a[new_pos] = a[i];
    }
    
    for(int i = 0; i < n; i++) {
        cout << new_a[i] << " ";
    }
    
    return 0;
}
