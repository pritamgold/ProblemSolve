#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
void primeFactors(int n)
{
    while(n%2==0){
        n/=2;
        mp[2]++;
    }
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            n=n/i;
            mp[i]++;
        }
    }
    if(n>2) mp[n]++;
}
int DigitCount(int n)
{
    int Count=0;
    while(n>0){
        n/=10;
        Count++;
    }
    return Count;
}
void space(int n){
    while(n--) cout<<" ";
}

int main()
{
    int N;
    while(1){
        cin>> N;
        if(N==0) break;
        for(int i=N; i>1; i--){
            primeFactors(i);
        }
        int dg = DigitCount(N);
        space(3-dg);
        cout<< N << "! =";
        map<int, int> :: iterator it;
        int Count =0;
        for(it=mp.begin(); it!=mp.end(); it++){
            Count++;
            if(Count >15) {Count =0; cout<< endl << "      ";}
            int dg = DigitCount(it->second);
            space(3-dg);
            cout<< it->second;
        }
        cout<< endl;

        mp.clear();
    }

    return 0;
}
