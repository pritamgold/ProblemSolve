#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000001
int spf[MAXN];
int ar[MAXN];
void seive()
{
    spf[1]=1;
    for(int i=2; i<MAXN; i++)  spf[i]=i;
    for(int i=4; i<MAXN; i+=2) spf[i]=2;
    for(int i=3; i*i<MAXN; i++){
        if(spf[i]==i){
            for(int j=i*i; j<MAXN; j+=i){
                if(spf[j]=j) spf[j]=i;
            }
        }
    }
}
int factor(int n){
    int Count=0;
    while(n != 1){
        Count++;
        n /= spf[n];
    }
    return Count;
}
void cal()
{
    seive();
    ar[1]=0;
    for(int i=2; i<MAXN; i++){
        ar[i] = ar[i-1];
        ar[i] += factor(i);
    }

}
int main()
{
    cal();
    int n;
    while(cin>> n){
        cout<< ar[n] << endl;
    }
}
