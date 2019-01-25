#include<bits/stdc++.h>
using namespace std;
vector<int>ar;
void seive(int n)
{
        bool prime[n+1];
        memset(prime,true,sizeof(prime));
        for(int p=2; p*p<=n; p++){
            if(prime[p]){
                for(int i=p*p; i<=n; i+=p){
                    prime[i] = false;
                }
            }
        }
        for(int i=1; i<=n; i++){
            if(prime[i]) ar.push_back(i);
        }
}

int main()
{
    seive(1010);
    int N,C;
    while(cin>> N >> C){
        int Count=0;
        for(int i=0; ar[i]<=N; i++){
            Count++;
        }
        int x,y;
        if(Count%2==0){
            x=2*C;
            y=(Count-x)/2;
        }
        else{
            x=2*C-1;
            y=(Count-x)/2;
        }
        printf("%d %d: ",N,C);
        for(int i=0; x>0 && i<Count ;i++){
            if(i>=y){
                cout<< ar[i] << " ";
                x--;
            }
        }
        cout<< endl;
    }
    return 0;
}
