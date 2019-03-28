//****** Dedicated to respected Mohammad Mahmudur Rahman Sir *******//
#include<bits/stdc++.h>
using namespace std;
void print(int i)
{
    if(i==0) cout<< "abcdef";
    if(i==1) cout<< "bc";
    if(i==2) cout<< "abdeg";
    if(i==3) cout<< "abcdg";
    if(i==4) cout<< "bcfg";
    if(i==5) cout<< "acdfg";
    if(i==6) cout<< "acdefg";
    if(i==7) cout<< "abc";
    if(i==8) cout<< "abcdefg";
    if(i==9) cout<< "abcdfg";
}
int main()
{
    int T; cin>> T;
    for(int i=1; i<=T; i++){
        int N; cin>> N;
        printf("Case %d: ",i);
        print(N);
        cout<< endl;
    }

    return 0;
}
