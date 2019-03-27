//****** Dedicated to Respected Mohammad Mahmudur Rahman Sir ********//
#include<bits/stdc++.h>
using namespace std;

long long bmod(long long a, long long b, long long m)
{
    if(!b) return 1;
    long long x = bmod(a,b/2,m);
    x= (x*x)%100;
    if(b & 1) x = (x*a)%100;
    return x;
}
int main()
{
    long long a,b;
    while(cin>> a >> b){
        long long ans=bmod(a,b,100);
        if(ans<10) cout<< "0";
        cout<< ans << endl;
    }
    return 0;
}
