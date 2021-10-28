#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i =0; i< n ; i ++)
            cin>>arr[i];
        sort(arr,arr+n);
        int i=0, j=n-1;
        int mid = (i+j)/2;
        cout<<arr[mid] <<endl;
    }
    
    return 0;
}
