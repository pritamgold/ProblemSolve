#include<bits/stdc++.h>
using namespace std;
int flag;
void primefactor(long long n)
{
    while(n%2==0){
        n/=2;
        if(flag==0) {cout<< " 2"; flag=1;}
        else cout<< " x 2";
    }
    for(long long i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            n/=i;
            if(flag==0) {cout<< " "<< i; flag=1;}
            else cout<< " x " << i;
        }
    }
    if(flag==0 && n>1) {cout<< " " << n; flag=1;}
    else if(n>1) cout<< " x " << n;
    cout<< endl;
}

int main()
{
    while(1){
        long long n; cin>> n;
        flag=0;
        if(n==0) break;
        if(n== -1) {cout<< "-1 = -1\n"; continue;}
        if(n==1) {cout<< "1 = 1\n"; continue;}
        if(n<0){
            cout<< n << " = -1 x";
            n*=(-1);
        }
        else cout<< n << " =";
        primefactor(n);
    }

    return 0;
}
