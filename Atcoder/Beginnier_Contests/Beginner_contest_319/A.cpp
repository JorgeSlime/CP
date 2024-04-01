/*
 Author: Jorge_Slime
 Created: 17.09.2023
 Time: 00.33.57
...
*/

/*
- "No bajes tus sueños a la altura de tus capacidades aparentes, sino haz que
   estas se eleven hasta llegar a la altura de tus sueños."

- "Do not Ler your dreams to the height of your apparent capabilities, but make
   them rise to the height of your dreams." 

- "Не опускайте свои мечты до высоты своих видимых возможностей, но заставляйте
   их подниматься до высоты ваших мечтаний."

- "自分の見かけの能力の高さに夢を下げないで、夢の高さに上げてください。"
*/

#include <bits/stdc++.h>
//#include <algoritmos.h>
using namespace std;  

#define turbo_PA() (ios_base::sync_with_stdio(false),cin.tie(NULL));

#define ExecuteTime   cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n"

#define LN                                                           '\n'
#define yes                                                 cout<<"YES\n"
#define no                                                   cout<<"NO\n"
#define sz(x)                                        (long long) x.size()
#define all(x)                                     (x).begin(), (x).end()
#define rall(x)                                  (x).rbegin(), (x).rend()

#define forn(i, n)                            for (auto i = 0; i <n; i++)
#define for1(i, n)                           for (auto i = 1; i <=n; i++)
#define fore(i, v)                                         for(auto &i:v)
#define loop(a,b,c)                            for(auto a = b; a <c; a++)
#define loop1(a,b,c)                           for(auto a = b; a<=c; a++)
#define rloop(a,b,c)                           for(auto a = b; a >c; a--)
#define per(i, a, b)                           for(auto i{b}; i-- > (a);)
#define in(v)                                      for(auto &i:v) cin>>i;
#define ou(v)                                for(auto &i:v) cout<<i<<" ";
#define mem(a, h)                               memset(a, (h), sizeof(a))

#define PB(i)                                                push_back(i)
#define EB(i)                                             emplace_back(i)
#define F                                                           first
#define S                                                          second
#define MP                                                      make_pair

/*==========================================================================================*/

typedef                                                     long long ll;
typedef                                           unsigned long long ull;
typedef                                                        double dd;
typedef                                              pair<int, int>  pii;
typedef                                                 vector<pii > vii;
typedef                                                   vector<int> vi;
typedef                                            vector<long long> vil;
typedef                                               vector<string> vis;
typedef                                                 vector<char> vic;


/*==========================================================================================*/
//Templates
template <typename T> T max_(T a, T b) { return (a > b) ? a : b;}
template <typename T> T min_(T a, T b) { return (a < b) ? a : b;}
template <typename T> T abs_(T x) { return (x < 0) ? -x : x;}
template <typename T> T mcd_(T a,T b){while(b){a%=b;swap(a,b);return a;}}
template <typename T> T mcm_(T a,T b){return a*b/mcd(a,b);}
template <typename T1, typename T2>
auto segundo = [](const std::pair<T1, T2>& a, const std::pair<T1, T2>& b) {
    return a.second < b.second;
};
/*==========================================================================================*/

//Generate ramdomic numbers
/*==========================================================================================*/

//mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

/*==========================================================================================*/
//Constants

const int MOD=1000000007;
const int MX=INT_MAX;
const dd PI = acos(-1);
const int INF=1000001;
/*==========================================================================================*/
//solucion
void solve(){
    unordered_map<string ,int > mp={
        {"tourist",3858},
        {"ksun48",3679},
        {"Benq",3658},
        {"Um_nik",3648},
        {"apiad",3638},
        {"Stonefeang",3630},
        {"ecnerwala",3613},
        {"mnbvmar",3555},
        {"newbiedmy",3516},
        {"semiexp",3481},
    };
    string s; cin>>s; 
    for(const auto &i:mp){
        if(s==i.F){
            cout<<i.S<<LN;
            break;
        }
    }
}

signed main() {
   turbo_PA();
   ll TT=1;
   //cin>>TT;
   for(;TT--;) solve();
   return 0;
} 



