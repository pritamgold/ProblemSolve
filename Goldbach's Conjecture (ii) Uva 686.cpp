// PRITAM GOLDER

#include<bits/stdc++.h>
using namespace std;
#define MAXN 32768
bool prime[MAXN];
void seive()
{
    memset(prime,true,sizeof(prime));
    for(int i=2; i*i<MAXN; i++){
        if(prime[i]){
            for(int j=i*i; j<=MAXN; j+=i){
                prime[j]=false;
            }
        }
    }
}
int main()
{
    seive();
    while(1){
        int n,i; cin>> n;
        int Count =0;
        if(n==0) break;
        for(i=2; i*2<=n; i++){
            if(prime[i] == true && prime[n-i] == true) Count++;
        }
        printf("%d\n",Count);
    }
    return 0;
}
