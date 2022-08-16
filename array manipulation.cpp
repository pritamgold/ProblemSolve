#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    int n, q; cin>> n>> q;
    vector<ll> v(n);
    while(q--){
        int a,b,k; cin>> a >> b >> k;
        for(int i=a-1; i<b; i++){
            v[i] += k;
        }
    }
    ll Max=-1;
    for(ll x: v)
        if(x>Max) Max=x;
    cout<< Max << endl;
    return 0;
}
