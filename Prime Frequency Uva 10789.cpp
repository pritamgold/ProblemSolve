#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1) return 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int N,Case=0; cin>> N;
    while(N--){
        string s; cin>> s;
        sort(s.begin(),s.end());
        int n= s.size();
        int Count =1,flag=0;
        printf("Case %d: ",++Case);
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]) Count++;
            else {
                if(isPrime(Count)) { cout<< s[i-1]; flag=1;}
                Count=1;
            }
        }
        if(isPrime(Count)) { cout<< s[n-1]; flag=1;}
        if(!flag) cout<< "empty";
        cout<< endl;
    }
    return 0;
}
