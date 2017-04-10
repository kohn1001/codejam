//
//  hack47.cpp
//  codejam
//
//  Created by Nathaniel Kohn on 21 M 2017.
//  Copyright © 2017 Nathaniel Kohn. All rights reserved.
//

#include <stdio.h>


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <sstream>


#ifdef NATTY
#define INF 0x3f3f3f3f
#define rep(i, j, k) for(int i = (int)j; i < (int)k; ++i)
#define sz(x) ( (int) x.size())
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
#define zero(x) memset((x), 0, sizeof((x)))
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int ,int>;
using vi = vector<int>;
using vii = vector<ii>;
using sii = set<ii>;



int main()

{
    int N; int T;
    cin >> T;
    rep(i, 0, T) {
        std::
        vii v;
        sii ropesSet;
        cin >> N;
        for (int i = 0; i < N; ++i) {
            //        reverseStr(s) ;
            int L, R;
            cin >> L >> R;
            v.emplace_back(make_pair(L,R));
            ropesSet.emplace(make_pair(L, R));
        }
        cout << "Case #" << i+1 << ": " << "inter_num" << endl;
    }
    
    //    cout << "the sum: " << sum << endl;
    // cout << "the sum: " << sum << endl;
    
    return 0;
}
#endif
