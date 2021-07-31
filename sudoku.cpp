#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <chrono> 
#include<time.h>
#include <sys/time.h>
#include <unistd.h>
#include <algorithm> 
#include <fstream> 
#define pi 3.14159265
#define ss second
#define ff first
#define pb push_back
#define endl '\n'
// #include <typeinfo>
// #include<String>
bool time_seed = 0;
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 
using namespace std;
using namespace std::chrono;
 
// ifstream cin;
// cin.open("input.txt");
 
typedef long long int ll;
typedef vector<int> vi; 
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<double> vd; 
typedef vector<vd> vvd;
typedef vector<vvd> vvvd;
typedef vector<bool> vb; 
typedef vector<vb> vvb;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<vvs> vvvs;
typedef vector<ll> vll; 
typedef vector<vll> vvll;
typedef pair<int,int> pii;
// typedef unordered_map ump;
// typedef unordered_map ump;
// #define unordered_map ump
// auto start = high_resolution_clock::now();
//     for(int i = 0;i<k;i++) s.lower_bound(i);
//     auto stop = high_resolution_clock::now(); 
//     auto duration = duration_cast<microseconds>(stop - start);
//     cout << "Time taken by function: "
//          << duration.count() << " microseconds" << endl; 
#define mod 1000000007
// #define mod 99820353
// #define unordered_map ump
 
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};  
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
 
void show_vi(vector<int> t){
    // //cout<<"show_vi"<<endl;
    for(int i = 0;i<t.size();i++){
        cout<<t[i]<<",";
    }
    cout<<endl;
}
 
void show_vp(vector<pair<int,int>> t){
    // //cout<<"show_vi"<<endl;
    for(int i = 0;i<t.size();i++){
        cout<<t[i].first<<" "<<t[i].ss<<"::";
    }
    cout<<endl;
}
 
void show_vd(vector<double> t){
    // //cout<<"show_vi"<<endl;
    for(int i = 0;i<t.size();i++){
        cout<<t[i]<<",";
    }
    cout<<endl;
}
void show_vll(vector<ll> t){
    // //cout<<"show_vi"<<endl;
    for(int i = 0;i<t.size();i++){
        cout<<t[i]<<",";
    }
    cout<<endl;
}
 
 
void show_vt(vector<tuple<long long,long long>> t){
    // //cout<<"show_vi"<<endl;
    for(int i = 0;i<t.size();i++){
        cout<<get<0>(t[i])<<" "<<get<1>(t[i])<<"::";
    }
    cout<<endl;
}
 
void show_vb(vector<bool> t){
    // //cout<<"show_vi"<<endl;
    for(int i = 0;i<t.size();i++){
        cout<<t[i]<<" ";
    }
    cout<<endl;
}
 
void show_vvi(vector<vector<int>> ans){
    cout<<"---------------------------"<<endl;
    for(int i = 0;i<ans.size();i++){
        show_vi(ans[i]);
    }
    cout<<endl;
}
 
int randd(){
    // struct timeval end_time;
    timeval start_time;
    // cout<<"ok"<<endl;
    long milli_time, seconds, useconds;
    gettimeofday(&start_time, NULL);
    seconds = start_time.tv_sec;
    useconds = start_time.tv_usec;
    milli_time = ((seconds) * 1000 + useconds/1000.0);
    if(time_seed==0){
        time_seed = 1;
        srand(milli_time);
    }
    int k = rand();
    return k;
}
 
void show_vvvi(vvvi ans){
    for(int i = 0;i<ans.size();i++){
    cout<<"******************"<<endl;
        show_vvi(ans[i]);
    }
    cout<<endl;
}
 
 
void show_vvb(vector<vector<bool>> ans){
    cout<<"---------------------------"<<endl;
    for(int i = 0;i<ans.size();i++){
        show_vb(ans[i]);
    }
    cout<<endl;
}
 
void show_vs(vector<string> A){
    for(int i =0;i<A.size();i++){
        cout<<A[i]<<"::";
    }
    cout<<endl;
}
 
 
 
void show_vc(vector<char> A){
    for(int i =0;i<A.size();i++){
        cout<<A[i];
    }
    cout<<endl;
}
 
void show_vvc(vector<vector<char>> A){
    cout<<"---------------------------"<<endl;
    for(int i =0;i<A.size();i++){
        show_vc(A[i]);
    }
}
 
void show_vvs(vector<vector<string>> A){
    for(int i = 0;i<A.size();i++){
        show_vs(A[i]);
    }
}
 
void show_vvvs(vvvs ans){
    for(int i = 0;i<ans.size();i++){
    cout<<"******************"<<endl;
        show_vvs(ans[i]);
    }
    cout<<endl;
}
 
void show_um(unordered_map<int,int> &map){
    unordered_map<int,int>::iterator it;
    it = map.begin();
    // int count = -6;
    while(it!=map.end()){
        cout<<it->ff<<" "<<it->second<<"::";
        // count ++;
        it++;
    }
    cout<<endl;
}
 
ll ncr(ll n, ll r) 
{ 
    // if(dp[n]!=-1) return dp[n];
    if (r > n - r) 
        r = n - r; 
    ll C[r + 1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; 
    for (ll i = 1; i <= n; i++) { 
        for (int j = min(i, r); j > 0; j--) {
                C[j] = (C[j] + C[j - 1]) ; 
                C[j]%=mod;
            }
    } 
    return C[r]; 
} 
 
int fact(int n){
    return (n==0)?1:(ll)(n*fact(n-1))%mod;
}
 
 
vll prime_factors(ll n){
    vll ans;
    while (n % 2 == 0)  
    {  
        ans.push_back(2);
        n = n/2;  
    }  
   
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {   
        while (n % i == 0)  
        {  
            ans.push_back(i);  
            n = n/i;  
        }  
    }  
    if (n > 2)  
        ans.push_back(n);
    return ans;
}
 
ll pow_m(ll a,ll b){
    // cout<<a<<" "<<b<<endl;
    if(b==1) return a%mod;
    if(b==0) return 1%mod;
    ll k = (ll)pow_m(a,b/2);
    if(b%2){
        return (((k*k)%mod)*a)%mod;
    }
    else return (((k*k)%mod));
 
}

ll poww(ll a,ll b){
    // cout<<a<<" "<<b<<endl;
    if(b==1) return a;
    if(b==0) return 1;
    ll k = poww(a,b/2);
    if(b%2){
        return k*k*a;
    }
    else return k*k;
 
}
 
int modInverse(int a, int m) 
{ 
    return pow_m(a,m-2); 
} 
 
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
 
 
string int_to_hex(int a){
    if(a==0) return "0";
    string ans;
    while(a){
        int k = a%16;
        if(k<=9){
            ans+=('0'+k);
        }
        else{
            ans+=('A'+(k-10));
        }
        a/=16;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
 
 
ll ncrr(ll a,ll b){
    // cout<<a<<" "<<b<<endl;
    ll ans = 1;
    if(b>a/2){
        b = a-b;
    }
    for(int i = 0;i<b;i++){
        ans*=a;
        a--;
        ans%=mod;
    }
 
    for(int i = 1;i<=b;i++){
        ans*=(modInverse(i,mod));
        ans%=mod;
    }
    return ans;
}
 
void init_code(){
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
 
 
class KMP{
public:
 
    vector<int> LPS(string s){
        int n = s.size();
        vector<int> lps(n,0);
        int len = 0;
        int i = 1;
        while(i<n){
            if(s[i]==s[len]){
                lps[i++] = ++len;
            }
            else{
                if(len!=0){
                    len = lps[len-1];
                }
                else{
                    lps[i++] = 0;
                }
            }
        }
 
        return lps;
    }
 
    vector<int> match(string A,string B){
        auto lps = LPS(B);
        vector<int> ans;
        int n = A.size();
        int m = B.size();
        int i = 0;
        int j = 0;
        while(i<n){
            if(A[i]==B[j]){
                i++;
                j++;
            }
            if(j==m){
                ans.push_back(i-j);
                j = lps[j-1];
            }
            else if(i<n&&A[i]!=B[j]){
                if(j==0) i++;
                else j = lps[j-1];
            }
        }
        return ans;
    }
};
 

class segtree
{
public:
    vi A;
    segtree(int n){
        A.resize(4*n+5);
    };

    void sett(int id,int s,int e,int idx,int val){
        if(idx<s||idx>e) return;
        A[id]+=val;
        if(s==e) return;
        int mid = (s+e)/2;
        sett(2*id,s,mid,idx,val);
        sett(2*id+1,mid+1,e,idx,val);
    }

    int gett(int id,int s,int e,int l,int r){
        // if(s>e) return 0;
        if(s>=l&&e<=r) return A[id];
        if(min(e,r)<max(s,l)) return 0;
        int mid = (s+e)/2;
        int ans = 0;
        ans+=gett(2*id,s,mid,l,r);
        ans+=gett(2*id+1,mid+1,e,l,r);
        return ans;
    }
    
};


class fast_segtree
{
public:
    static const int N = 2e5+5;  // limit for array size
    int n;  // array size
    int t[2 * N];
    fast_segtree(vi &A){
        n = A.size();
        for(int i = 0;i<A.size();i++) t[i+n] = A[i];
    };

    void build() {  // build the tree
      for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
    }

    void modify(int p, int value) {  // set value at position p
      for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
    }

    int query(int l, int r) {  // sum on interval [l, r)
      int res = 0;
      for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res += t[l++];
        if (r&1) res += t[--r];
      }
      return res;
    }
    
};





vector<ll> djikstra(int sr, vector<vector<pii>> &gr){
    int n = gr.size();
    vll ans(n,INT_MAX);
    priority_queue<pii> pq;
    pq.push({0,sr});
    while(pq.size()){
        auto top = pq.top();
        pq.pop();
        int id = top.ss;
        int val = -top.ss;
        if(ans[id]>val){
            ans[id] = val;
            for(int j = 0;j<gr[id].size();j++){
                ll new_dis = -val-gr[id][j].ss;
                int des = gr[id][j].ff;
                if(ans[des]>-new_dis){
                    pq.push({new_dis,des});
                }
            }
        }
    }
    return ans;
}

void help(){
    ll n,k;
    cin>>n>>k;
    vll A(n);
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    ll ans = INT_MIN;
    int i = max(0LL,n-5000);
    // cout<<i<<endl;
    while(i<n){
        for(int j = i+1;j<n;j++){
            ans = max(ans,1LL*(i+1)*(j+1)-k*(A[i]|A[j]));
        }
        i++;
    }
    cout<<ans<<endl;

}

// write maths or wahtever logic is there
// think of dfs/bfs/dp/deque/set/sort/union-find/binary_search/brute-force/greedy/
// always use bfs in shortest path, check whether dfs can provide wrong answer in case of min. distance/ minimisation
int main(){
    // auto start = high_resolution_clock::now();
    // Solution s;
    // KMP k;
    FAST
    // init_code();
    // []
    // cout<<s.()<<endl;

    int t = 1;
    cin>>t;
    while(t--){
        help();
    }


    // cout<<check(0,1,1,1)<<endl;

    // cout<<help1(123)<<endl;
    // cout<<"ok"<<endl;
    // for(int i = 1;i<9;i++){
    //     for(int j = 1;j<9;j++){
    //         n = i;m = j;
    //         // cout<<"yes"<<endl;
    //         help();
    //     }
    //     cout<<endl;
    // }

    // auto stop = high_resolution_clock::now(); 
    // auto duration = duration_cast<microseconds>(stop - start);
    // cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl; 
    return 0;
}