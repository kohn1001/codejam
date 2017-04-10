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
#include <limits>

const static int int_max  =std::numeric_limits<int>::max();

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

string findMinSubStr(const string &arr, const string &str)
{
	string res;
	int head=0, tail=0, unique_char=0;
	map<char, int> dict;
	int min = int_max;

	for(auto &i : arr) {
		dict.emplace(mp(i,0));
	}
	for(int i = 0; i < (int)str.size(); ++i) {
		if(dict.find(str[i]) == dict.end()) {
			continue;
		}
		if(dict[str[i]] == 0) {
			++unique_char;
		}
		++dict[str[i]];	
		//pushing the tail forward
		while (unique_char == arr.size()) {
			int min_length = i-tail -1;
			if(min_length == arr.size()) {
				return str.substr(tail, i);
			}
			if(!res.empty() && min_length < res.size()) {
				res = str.substr(tail, i);
			}
		}
	}

	return res;
}
int main()

{
	string arr = "xyz";
	string str = "xyyyzyzyx";

	string res = findMinSubStr(arr, str);
   
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
