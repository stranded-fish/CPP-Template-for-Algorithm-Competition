#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <cctype>
#include <ctime>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <utility>
#include <bitset>
#include <functional>
#include <random>

using namespace std;

#define FastIO ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

using ll = long long;
using ull = unsigned long long;
using db = double;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pull = pair<ull, ull>;

const double EPS = 1e-6;
const int INF = 1 << 29;
const int MOD = 1e9 + 7;
const int MAX_N = 100;

vector<string> split(const string &str, const char &delim) {
    vector<string> res;
    stringstream ss(str);
    string tmp;
    while (getline(ss, tmp, delim)) { if (!tmp.empty()) res.push_back(std::move(tmp)); }
    return res;
}

string to_string(const string &s) { return '"' + s + '"'; }

string to_string(const char *s) { return to_string((string) s); }

string to_string(char c) { return '\'' + string(1, c) + '\''; }

string to_string(bool b) { return (b ? "true" : "false"); }

template<typename A, typename B>
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }

template<typename T>
string to_string(T t) {
    bool first = true;
    string res = "{";
    for (const auto &x: t) {
        if (!first) res += ", ";
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

void debug() { cerr << endl; }

template<typename Head, typename... Tail>
void debug(Head H, Tail... T) {
    cerr << to_string(H) << " ";
    debug(T...);
}

int main() {
    FastIO


    return 0;
}