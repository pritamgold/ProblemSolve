#include<bits/stdc++.h>
using namespace std;
#define N 2147483647
long long prime[N/64];
bool ifNotPrime(long long x)
{
    //long long SEG = prime[x/64];
    //long long pos = (x>>1) & 31;
    //long long mask = 1 << pos;
    //return SEG & mask;
     return prime[x/64] & (1 << ((x>>1) & 31));
}
void makeComposite(long long x)
{
    //long long SEG = prime[x/64];
    //long long pos = (x>>1) & 31;
    //long long mask = 1<< pos;
    prime[x/64] =  prime[x/64] | (1<<((x>>1)&31));
}
void bitWiseSieve()
{
    memset(prime,0,sizeof(prime));   ///prime = 0
    for(long long i=3; i*i<N; i+=3){
        if(!ifNotPrime(i)){
            for(long long j=i*i; j<=N; j+=i){
                makeComposite(j);
            }
        }
    }

}

int main()
{
    bitWiseSieve();
    long long L, U;
    while(cin>> L >> U){
        long long closest=INT_MAX, distant = -1;
        long long prev,c1=0,c2=0,d1,d2,Count=0;
        for(int i=L; i<=U; i++){
                if(i==1) continue;
            if(!ifNotPrime(i) || i==2){
                    Count++;
                long long d= i-prev;
                if(d<closest) { closest = d; c1=prev; c2=i;}
                if(d>distant) { distant = d; d1=prev; d2=i;}
                prev = i;
            }
        }
        if(Count>=2)
        printf("%d,%d are closest, %d,%d are most distant.\n",c1,c2,d1,d2);
        else printf("There are no adjacent primes.\n");
    }

    return 0;
}
