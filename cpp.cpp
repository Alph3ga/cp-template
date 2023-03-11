#include <bits/stdc++.h>
using namespace std;

// Types
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

#define MOD 1000000007

// Functions

#define repeatN(n) for(long long do_not_use=0; do_not_use< n; do_not_use++)
#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

#define gcd(a ,b) __gcd(a, b); 
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

ll modMul(ll a, ll b) {
    ll res=0;
    a %= MOD;
 
    while (b) {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % MOD;
 
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % MOD;
 
        b >>= 1; // b = b / 2
    }
 
    return res;
}

ll mul(ll A, ll B){
    a%= MOD;
    b%= MOD;
    return (a*b)% MOD;
}

ll add(ll A, ll B){
    a%= MOD;
    b%= MOD;
    return (a+b)% MOD;
}

bool isPrime(ll a) { 
    if (a==1) return 0; 
    for(int i=2; i*i<= a; i++) { 
        if (a%i==0) return 0;  
    }
    return 1;
}

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

template <class T>
void print_v(vector<T> &v) { for (auto x : v) cout << x << " "; cout << "\b}"; }

// this one is thread safe, use if error
void fastscan2(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
  
    number = 0;
  
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
  
        // extract the next character from the buffer
        c = getchar();
    }
  
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
  
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

void fastscan(ll &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register ll c;
  
    number = 0;
    c = getchar_unlocked();
    if (c=='-')
    {
        // number is negative
        negative = true;
  
        c = getchar_unlocked();
    }
  
    for (; (c>47 && c<58); c= getchar_unlocked())
        number = number *10 + c - 48;

    if (negative)
        number *= -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;

    cin>> T;
    repeatN(T){
        codeHere();
    }
}

codeHere(){

}


