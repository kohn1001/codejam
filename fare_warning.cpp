//
//
//  Created by Nathaniel Kohn on 11 M 2017.
//  Copyright © 2017 Nathaniel Kohn. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <sstream>
#include <memory>
#include <algorithm>
#include <memory>
#include <iomanip>

/* My Templates for convenience */
#define INF 0x3f3f3f3f
#define rep(i, j, k) for(int i = (int); i < (int)k; ++i)
#define sz(x) ( (int) x.size())
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
#define zero(x) memset((x), 0, sizeof((x)))
#define D(x) cout << "Case #" << (x)+1 << ": "
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int ,int>;
using vi = vector<int>;
using vii = vector<ii>;
using seii = set<ii>;
using stii = stack<ii>;
using StrSet = set<string>;
using vs = vector<string>;

#ifdef DEB

int main()

{
	map<int, int> m;
    <int> q;
	int T;
    cin >> T;
    rep(i, 0, T) {
        ll K, N, R;
        //4 6 4
        cin >> R >> K >> N;
        vector<ll> v(N);
        for (ll j = 0; j < N; ++j) {
            cin >> v[j];
        }
        ll sum = 200;
        ll offset = 0;
        for (ll j = 50000000; j < R; ++j) {
            //j = 3
            //cap = 6
            ll cap = K;
            vi visited(N,0);
            //offset%7= 3 v[3] = 1
           //6-4=2-2=0
            while (cap - v[offset%N] >= 0) {
                //cap =0
                if(visited[offset%N]) { break;}
                visited[offset%N] = 1;
                cap -= v[offset%N];
                //sum = 17
                sum += v[offset%N];
                //offset = 7
                offset = ++offset%N;
            }
            //1
        }
        /*cin >> N >> K;
		for(int i=0; i < N; ++i) {
			m.emplace(mp(i, 0));
		}
		*/
   		D(i) << sum << endl;
	}
  	 
    return 0;
}


#endif


#ifdef COM 
    int N; int T;
    cin >> T;
    rep(i, 0, T) {
        vii v;
        cin >> N;
       int M;
        cin >> M; set<string> fs;
        for (int i = 0; i < N; ++i) {
            string name;
//            while(getline(cin, name) && name.empty());
           //        reverseStr(s) ;
        }
//        printFs(fs);
        
        rep(i, 0, M) {
            string dir;
            while(getline(cin, dir) && dir.empty());
//            ll num = getCommNum(fs, dir);
            cout << "Case #" << i+1 << ": " << num << endl;
        }
    }
    
    //    cout << "the sum: " << sum << endl;
    // cout << "the sum: " << sum << endl;
#endif
