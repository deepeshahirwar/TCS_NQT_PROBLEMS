/***************************  deepesh7024 *********************************/ 

#include<bits/stdc++.h>
using namespace std; 

#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()  

#define sort_all(x) sort(x.begin(),x.end())
#define reverse_all(x) reverse(x.begin(),x.end())
#define py cout<<"YES"<<"\n"
#define pn cout<<"NO"<<"\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld; 



#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
/*************************** WElCOME **********************************************/

/* you are given two integers m and n .
 your task is to compute the sum of the m-th
  prime numbers to the (m+n)-th prime number inclusive
   
  input : m = 2 n = 2; 
  output : 15; 

  explanation : 
    2nd prime : 3
    3nd prime : 5
    4th prime : 7 
    sum = 3+5+7 = 15
  */
 bool is_prime(int n){
     
    if(n<=1)return false; 

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0)return false; 
    } 
    return true;
 }
  void deepesh7024(){
  int m,n; 
  cin>>m>>n; 

  // fist we need to find mth prime number
  int mth_prime =0;  
   int num = 2;
   int count = 0; 
  while(true){ 

      if(is_prime(num)){
          count++; 
          if(count == m){
              mth_prime = num; 
              break; 
          }
      }
      num++; 
  } 

  int total_primes =0;  
  long long sum =0;
  while(true){ 
      if(is_prime(mth_prime)){ 
          sum += mth_prime;
          total_primes++; 
          if(total_primes == n+1){
              break; 
          }
      }
      mth_prime++; 
  }

   cout<<sum<<endl;  
 
}  
 
int main() {
#ifndef ONLINE_JUDGE 
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout); 
   freopen("Error.txt", "w", stderr);
#endif 
    fastIO();  
   ll t=1; 
   //cin>>t;  
   for(int i=0;i<t;i++){ deepesh7024();}  
    
    return 0;
}
