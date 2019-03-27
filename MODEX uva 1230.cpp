//****** Dedicated to respected Mohammad Mahmudur Rahman Sir ******//
#include<bits/stdc++.h>
using namespace std;

long long bmod(long long a, long long b, long long m)
{
    if(!b) return 1;
    long long x = bmod(a,b/2,m);
    x = (x*x)%m;
    if(b&1) x = (x*a)%m;
    return x;
}

int main()
{
    long long x,y,n,T; cin>> T;
    while(T--){
        cin>> x >> y >> n;
        cout<< bmod(x,y,n) << endl;
    }
    cin>> T;
    return 0;
}
