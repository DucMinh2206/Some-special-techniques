#include "bits/stdc++.h"
//#include "/Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h"
using namespace std;
#define ll long long
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef stack<int> stk;
typedef vector<ll> vl;
typedef map<int, int> mii;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end() 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define foru(j, a, b) for(int j = a; j <= b; ++j)
#define ford(j ,a, b) for(int j= a; j >= b; --j)
#define ld long double
const int maxN = 100005;
const int mod = 1e9 + 7;
const int inf = -1e9;

int du, small, big, dis, sum;
string s, ss;
string sum_large(string &a, string &b){
    string ans = "";

    if(a.size() > b.size()) swap(a, b);

    small = a.size();
    big = b.size();
    dis = big - small;
    du = 0;

    ford(j, small - 1, 0){
        sum = (a[j] - 48) +  (b[j + dis] - 48) + du;
        ans.pb(sum % 10 + '0');
        du = sum / 10;

        //cout << a[j] - 48 << " " << b[j + dis] - 48 << endl;
    }
    ford(j, big - small - 1, 0){
        sum = (b[j] - 48) + du;
        ans.pb(sum % 10 + '0');
        du = sum /10;
    }

    if(du){
        ans.pb(du + '0');
    }
    reverse(ans.begin(), ans.end());

    return ans;

}

signed main(){
	IOS
    //freopen("PARK.inp", "r", stdin);
	//freopen("PARK.out", "w", stdout);
    cin >> s >> ss;
    cout << sum_large(s, ss);
    
}
   
