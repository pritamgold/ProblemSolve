#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000001
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
        if(n==0) break;
        for(i=2; i<=n; i++){
            if(prime[i] == true && prime[n-i] == true) break;
        }
        printf("%d = %d + %d\n",n,i,n-i);

    }


    return 0;
}
