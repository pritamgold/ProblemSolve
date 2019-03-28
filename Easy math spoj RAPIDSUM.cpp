//****** Dedicated to respected Mohammad Mahmudur Rahman Sir ********//
#include<bits/stdc++.h>
using namespace std;
long long sum(long long n)
{
    return n*(n+1)/2;
}
int main()
{
    long long a,b;
    while(cin>> a >> b){
        if(a>b) swap(a,b);
        long long sum1=sum(a-1);
        long long sum2=sum(b);
        cout<< sum2-sum1 << endl;
    }

    return 0;
}
