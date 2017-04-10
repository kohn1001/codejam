//
//  file_fix.cpp
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

#ifdef NATT

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
#endif

/*
 
High level:
 
 creating a map<string, string> mapping;
 each key would be the parent dir to the child
 for example:
 home -> 

 */
//map<string, Dir> fs;

void addToFs(set<string> &fs, string &dir)
{
    string tmp;
    stringstream ss(dir);
//    while(getline(ss, tmp, '/')) {
//        if(tmp.empty()) {continue;}
//        fs.emplace(tmp);
//    }
    fs.emplace(dir);
}
void printFs(set<string> &fs)
{
    for(auto &i : fs) {
        cout << i << " ";
    }
    cout << endl;
}

ll getCommNum(set<string> &fs, string &str) {
    ll cmdNum = 0;
    vs words;
    stringstream ss(str);
    string tmp;
    while(getline(ss, tmp, '/')) {
        if( tmp.empty()) { continue;}
        words.eb(tmp);
    }
    string s("");
    for(auto &i : words) {
        s = "/" +i;
        cout << "s is: " << s << " ";
        auto toFind = fs.find(s);
        if(toFind == fs.end()) {
            fs.emplace(s);
            ++cmdNum;
        }
        
    }
    return cmdNum;
}
//
//ll getCommNum(const set<Dir> fs, const string &dir)
//{
//    ll num = 0;
//    return num;
//    
//}
#ifdef natty
int main()

{
    int N; int T;
    cin >> T;
    rep(i, 0, T) {
        vii v;
        cin >> N;
       int M;
        cin >> M; set<string> fs;
        for (int i = 0; i < N; ++i) {
            string name;
            while(getline(cin, name) && name.empty());
            addToFs(fs, name);
           //        reverseStr(s) ;
            //ropesSet.emplace(make_pair(L, R));
        }
        printFs(fs);
        
        rep(i, 0, M) {
            string dir;
            while(getline(cin, dir) && dir.empty());
            ll num = getCommNum(fs, dir);
            cout << "Case #" << i+1 << ": " << num << endl;
        }
    }
    
    //    cout << "the sum: " << sum << endl;
    // cout << "the sum: " << sum << endl;
    
    return 0;
}
#endif
