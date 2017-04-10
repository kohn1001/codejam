//
//  amazon_movie.cpp
//  codejam
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
using sii = set<ii>;
using StrSet = set<string>;
using vs = vector<string>;

/* IGNOR - implemented only for testing */
/*
 * Before we approach the problem itself 
	High level approach:
	* init seed rand 
	* get random number for i to v.size()
		* swap v[i] with v[v.size()-1] 
		* continue
		*
		* Before we start, lets take into account end cases:
		* 	1. arrray/vector boundries
		* 	2. get real random number - we get a different array in each time we call shuffle
		* 	3. test the code before - deliver - we are not done, until we are testing our code 
		* 	4. can we do better - time/space complexicity... ?
		* 	5.
	 *
	 */
#include <stdlib.h>
#include <time.h>
	void shuffle(vector<int> &v)
	{
		srand(time(nullptr));
		cout << " vector size is: " << v.size() << endl;
		for(auto i = 0; i < v.size(); ++i) {
			int r = rand()%(v.size()-i);
			swap(v[i], v[r]);
		}
		for(auto &i : v) {
			cout << " " << i << " ";
		}
		cout << endl;
	}

int main()
{
	vector<int> vec = {1, 5, 8, 3, 11, 9, 300, 101, 17, 1001};
	for(auto &i : vec) {
		cout << " " << i << " " ;   
	}
	cout << endl;
	shuffle(vec);
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
