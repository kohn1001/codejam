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
using seii = set<ii>;
using stii = stack<ii>;
using StrSet = set<string>;
using vs = vector<string>;
using power = int;
using state = int;
//using index = int;
using swS = pair<power, state>;
using swP = pair<int, swS>;

int main()

{
	map<int, swS> m;
	int N, T, K;
    cin >> T;
    //rep(t, 0, T) {
	for(int t = 0; t < T; ++t) {
        cin >> N >> K;
		vector<int> v(N,0);	
		int mask = (1<<N) -1;
		if((mask & K) == mask) {
            cout << "Case #" << t+1 << ": " << "ON" << endl;
		}
		else {
            cout << "Case #" << t+1 << ": " << "OFF" << endl;
		}
		/*
		for(int k = 0; k < K; ++k) {
			bool toggle = true;
			for(int i=0; i < N; ++i) {
				if(toggle == false) {
					break;
				}
				v[i] = !v[i];
				if(v[i]) {
					toggle = false;
				}
			}
		}
		
		bool off = false;
		for(int i=0; i<N; ++i) {
			if(!v[i]) {
			//	cout << "OFF" << endl;
            	cout << "Case #" << t+1 << ": " << "OFF" << endl;
				off = true;
				break;
			}
			//cout << "index: " << i.first << " " << "power: " << i.second.first << " " << i.second.second << " " << endl;	
		}
		if(!off) {
            cout << "Case #" << t+1 << ": " << "ON" << endl;
			//cout << "ON" << endl;
		}
		*/
/*
	
		if(m[N].second m[N].firs) {
            cout << "Case #" << t+1 << ": " << "ON" << endl;
		}
		else {
            cout << "Case #" << t+1 << ": " << "OFF" << endl;
		}
     
	}
	*/
	
} 
    return 0;
}








#ifdef DEGBUG
    /*
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
//            cout << "Case #" << i+1 << ": " << num << endl;
        }
    }
    
    //    cout << "the sum: " << sum << endl;
    // cout << "the sum: " << sum << endl;
   */

#endif
