#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define   MAX              200005 
int N=MAX;
int status[MAX/32];

bool check(ll N, ll pos){ return (bool)(N & (1<<pos));}
int Set(ll N, ll pos){ return N=N | (1<<pos);}

void sieve(){
    int sqrtN= (int) sqrt(N);
    for(int i=3; i<=sqrtN; i+=2){
        if(check(status[i>>5],i&31)==0){
            for(int j=i*i; j<=N; j+=i){
                status[j>>5] = Set(status[j>>5],j&31);
            }
        }
    }
}
int main()
{
    sieve();
    puts("2");
    for(int i=3; i<=100; i+=2){
        if(check(status[i>>5],i&31)==0)
            cout<< i << endl;
    }
    return 0;
}