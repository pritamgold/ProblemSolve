#include<bits/stdc++.h>
using namespace std;

int binarySearch(int ar[],int n, int key){
    int low=0, high=n;
    while(low<=high){
        int mid= (low+high)/2;
        if(ar[mid]==key) return mid;
        else if(ar[mid]<key) low=mid+1;
        else if(ar[mid]>key) high=mid-1;
    }
    return -1;
}

int main()
{
    int ar[]={1,2,3,4,5,6,8,11};
    cout<< binarySearch(ar,8, 111) << endl;

    return 0;
}
