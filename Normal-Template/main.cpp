// srcmake's C++ template for Google Code Jam.
// g++ -std=c++11 main.cpp -o main 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cstdio>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;
typedef long double ld;
#define filein "input.in"
#define fileout "output.out"

template<typename T>
void PrintVector(vector<T> v)
    {
    cout << endl;
    for(int i = 0; i < v.size(); i++)
        {
        cout << v[i] << " ";
        }
    cout << endl;
    }

// Do all the work for the code jam problem here.
// Write the answer to a test case.
///////////////////////////////////////////////////
void solve(int t)
    {
    }
///////////////////////////////////////////////////

// Program begins here. Handles writing "Case #: "
int main()
    {
    // Handle reading and writing to file.
    freopen(filein, "r", stdin); freopen(fileout, "w", stdout);

    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++)
        {
        cout << "Case #" << t << ": ";
        solve(t);
        if(t != tt) { cout << "\n"; }
        }
    return 0;
    }