#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000000
vector<int> twin;
bitset<MAXN> prime;
bitset<MAXN> ans;
int dp[MAXN+10];

void isPrime()
{
    prime.set();
    prime.reset(0);
    prime.reset(1);
    for(int i=2; i*i<=MAXN; i++){
        if(prime[i]){
            for(int j=i*i; j<=MAXN; j+=i){
                prime[j]=0;
            }
        }
    }
}
int digitCount(int n)
{
    int Count = 0;
    while(n!=0){
        Count +=n%10;
        n/=10;
    }
    return Count;
}
void seive()
{
    isPrime();
    ans=prime;
    for(int i=3; i<=MAXN; i+=2){
        if(prime[i]){
            int n=digitCount(i);
            if(prime[n]==0) ans[i]=0;
        }
    }
}

int main()
{
    seive();
    dp[0]=0;
    for(int i=1; i<=MAXN; i++){
        if(ans[i]) dp[i] = dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    int N; cin>> N;
    while(N--){
        int t1,t2; scanf("%d %d",&t1,&t2);
        int res=dp[t2]-dp[t1-1];
        printf("%d\n",res);
    }

    return 0;
}
