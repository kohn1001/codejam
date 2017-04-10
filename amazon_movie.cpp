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

#ifdef DEBUG
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

class Movie {
public:
    Movie(int id =0, int rate =0) :
        id(id),
    rate(rate)
    {
        
    }
    ~Movie()
    {
        
    }
    const int getMoveId() const {
        return id;
    }
    const int getRate() const {
        return rate;
    }
    const vector<Movie*> getConnectedMovies() const {
        return connectedMovies;
    }
    void addConnectedMovie(Movie &m) {
        connectedMovies.eb(&m);
    }
    void printConnectedMovies() const {
        for(auto &i : connectedMovies) {
            cout << "Movie Id: " << i->getMoveId() << " " << "Rate: " << i->getRate() << " " << endl;
        }
        cout << endl;
    }
private:
    int id;
    int rate;
    vector<Movie*> connectedMovies;
};

using MoveRatePair = pair<Movie*, int>;
vector<Movie*> getRates(Movie &movie, int N)
{
    vector<Movie*> rates;
    auto cmp = [](Movie *a, Movie *b) { return a->getRate() < b->getRate();};
    priority_queue<Movie*, vector<Movie*>, decltype(cmp)> q(cmp);
    stack<MoveRatePair> stack_;
    
    stack_.push(mp(&movie, movie.getRate()));
    set<int> visited; visited.emplace(movie.getMoveId());
    
    while(!stack_.empty()) {
        auto curr = stack_.top(); stack_.pop();
        for(auto &i : curr.first->getConnectedMovies()) {
            auto next = find(visited.begin(), visited.end(), i->getMoveId());
            if(next == visited.end()) {
                stack_.push(mp(i, i->getRate()));
                visited.emplace(i->getMoveId());
                q.push(i);
            }
        }
    }
    int k =0;
    while(!q.empty() && k < N) {
        auto i = q.top(); q.pop();
        rates.eb(i);
        ++k;
    }
    if( k < N) {
        cout << "There are no: " << N << " Movies related to movie id: " << movie.getMoveId() << ". Only: " << k << endl;
    }
    return rates;
}
/* IGNOR - implemented only for testing */
int main()

{
    stringstream ss;
    enum class Face {Ace, Two, Three, Four, Five, Six};
    Movie m1(131, 3);
    Movie m2(99, 4);
    Movie m3(30005, 5);
    Movie m4(20004, 10);
    Movie m5(200, 7);
    m1.addConnectedMovie(m2);
    m1.addConnectedMovie(m3);
    m1.addConnectedMovie(m4);
    m1.addConnectedMovie(m5);
    //m2.addConnectedMovie(m1);
    m2.addConnectedMovie(m3);
    m2.addConnectedMovie(m5);
    m2.printConnectedMovies();
    int n1 = 14;
    int n2 = 3;
    cout << "Rated movies to Movie id: " << m1.getMoveId() << endl;
    vector<Movie*> v = getRates(m1,n1);
    for(auto &i : v) {
        cout << "Rate is: " << i->getRate() << " " << endl;
    }
    cout << "Rated movies to Movie id: " << m1.getMoveId() << endl;
    v.clear();
    v = getRates(m1,n2);
    for(auto &i : v) {
        cout << "Rate is: " << i->getRate() << " " << endl;
    }
    cout << "Rated movies to Movie id: " << m2.getMoveId() << endl;
    vector<Movie*> v3 = getRates(m2, n1);
    for(auto &i : v3) {
        cout << "Rate is: " << i->getRate() << " " << endl;
    }
    
    return 0;
}
#endif










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
