#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    
    int *results=new int[N];
    for(int i=0; i<N;i++)
    {
        int days, nParties, ddays=0;
        cin>>days>>nParties;
        int * hartals=new int[nParties];
        for(int j=0;j<nParties;j++)
            cin>>hartals[j];
        for(int j=0, passeddays=1; passeddays<=days; j++, j%= 7, passeddays++)
            if((j!=5)&&(j!=6))
                for(int k=0; k<nParties;k++)
                    if(!(passeddays%hartals[k]))
                    {
                        ddays++;
                        break;
                    }
        results[i]=ddays;
    }
    for(int i=0;i<N;i++)
        cout<<results[i]<<endl;
    return 0;
    
}
