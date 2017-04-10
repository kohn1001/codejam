#include <iostream>


#include <map>
#include <stack>
#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>
#include <algorithm>
#include <set>
#include <queue>


using namespace std;
using ii = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using vii = vector<ii>;
using ll = long long;
using ull =  unsigned long long ;
using sii = set<ii>;

#define fu(i, start, end, step) for(i = start; i < end; i += step)
#define getLineNoEmptyString(stream, string) while(getline(strem, string) && string.empty() {continue;}



/*=================
 1st iter:
 ----------
 i = 1; stat[z] = 0; n =5
index:      0 | 1 | 2 | 3 | 4
 arrr = {   1,  2,  3,  4,  10}
 arr = { 1 , 2 , 3 , 4 , 10 }
-----------------------------
 2nd iter:
 ----------
 i = 2; stat[i] = 3;    
 index;
 
 
 sub sum:
 
 5, 1, 3, -8, 10, -1
 
 
 iteration  sum_so_far  max_sum a[i]
 
    0           5           5       5
    1           6           6       1
    2           9           9       3
    3           1           9       -8
    4           11          11      10
    5           10          11      
 
 
    i       v[i]    sum_so_far  max_sum 
 
 
 
*/
class MagicSubset {
public:
    int findBest(vector <int> values)
    {
        int i;
        int pos_sum = 0;
        int neg_sum = 0;
        for(i=1;i<(values.size());++i) {
            if(values[i] > 0) {
                pos_sum += values[i];
            }
            else {
                neg_sum += values[i];
            }
        
        }
        neg_sum += values[0];
        return max(-neg_sum, pos_sum);
    }
    
};

class ForwardMancala {
public:
    ForwardMancala():max(-1),
                     no_max(false)
    {
        
    }
    bool is_end(vi &v) {
        int cnt = 0;
        for(auto &i: v) {
            if (i != 0) {
                ++cnt;
            }
            if(cnt > 1) {
                return false;
            }
        }
        return true;
    }
    int spread_turn(int turn, int idx, vi &state) {
        int index = idx;
        while(turn) {
            //index = (index + 1)%(int)state.size();
            ++index;
            index %= (int)state.size();
            state[index] += 1;
            if(state[index] > max) {max = state[index];}
            --turn;
        }
        ++idx;
        idx %= (int)state.size();
        return idx;
    }
    int findIndex(vi st) {
        int idx = (int)st.size()-1;
        for(;idx; --idx) {
            if(st[idx]) {
                return idx;
            }
        }
//        int i;
//        fu(i, 0, st.size(), 1) {
//            if(st[i] == max || st[i] == 0) {
//                continue;
//            }
//            else {
//                break;
//            }
//        }
        return -1;
    }
    
    vector <int> findMoves(vector <int> start) {
        int idx;
        for(auto &i : start) {
            if(i == max) {
                no_max = true;
                break;
            }
            if(max < i) { max = i;}
        }
        if(is_end(start)) {
            return seq;
        }
        while (!is_end(start)) {
            idx = findIndex(start);
            seq.emplace_back(idx);
            int to_spread = start[idx];
            start[idx] = 0;
            idx = spread_turn(to_spread, idx, start);
        }
        return seq;
    }
private:
    std::priority_queue<ii, vii, std::greater<int> > pq;
    int max;
    vi seq;
    bool no_max;
};
//
//int main()
//
//{
//#ifdef TOPCODE
////    int N; int T;
//    cin >> T;
//    int i = 0;
//    fu(i, 0, T, 1) {
//        vii v;
//        sii ropesSet;
//        cin >> N;
//        for (int i = 0; i < N; ++i) {
//    //        reverseStr(s) ;
//            int L, R;
//            cin >> L >> R;
//            v.emplace_back(make_pair(L,R));
//            ropesSet.emplace(make_pair(L, R));
//        }
//        //ull inter_num = getInterNum(v, ropesSet);
////        cout << "Case #" << i+1 << ": " << inter_num << endl;
//    }
//#endif
//    ForwardMancala f;
//    vector<int> v;
//    int N;
//    int val;
//    cin >> N;
//    
//    for (int i =0; i < N; ++i) {
//        cin >> val;
//        v.emplace_back(val);
//    }
//    vi seq = f.findMoves(v);
////    cout << "the sum: " << sum << endl;
//   // cout << "the sum: " << sum << endl;
//    
//    return 0;
//}
