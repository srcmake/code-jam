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
    string s; cin >> s;
    string ans;

    // Get a version of s without doubles
    string sSingled = "";
    for(int i = 0; i < s.length(); i++) {
        // Just add the first letter
        if(i == 0) { sSingled += s[i]; continue; }

        // For every next letter, if it matches the prev letter, don't add it to the single
        if(s[i] == s[i-1]) { continue; }

        // Single letter, so add it.
        sSingled += s[i];
    }

    int singleIndex = 0;
    int sIndex = 0;

    for(int singleIndex = 0; singleIndex < sSingled.length()-1; singleIndex++) {
        // If the current letter is larger than the next one, don't change anything
        if(sSingled[singleIndex] > sSingled[singleIndex+1]) {
            // Add this letter the appropriate number of times to ans
            while(true) {
                ans += s[sIndex];
                sIndex += 1;

                if(s[sIndex] != s[sIndex-1]) { break; }
            }
        }

        // If the current letter is smaller, then we need to double
        else {
            while(true) {
                ans += s[sIndex];
                ans += s[sIndex];
                sIndex += 1;

                if(s[sIndex] != s[sIndex-1]) { break; }
            }
        }
    }

    // Add the appropriate number of the final letter
    while(sIndex < s.length()) {
        ans += s[sIndex];
        sIndex++;
    }

    cout << ans;
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