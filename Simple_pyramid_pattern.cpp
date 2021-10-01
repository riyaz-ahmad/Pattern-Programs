/*
Pattern 1
-------------------------------------
* 
* * 
* * * 
* * * * 
* * * * * 
-----------------------------------
*/
#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    //n determines the number of rows
    for(int i=0;i<n;i++){//for rows
        for(int j=0;j<=i;j++){//for columns
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main()
{
    int n = 5;
    printPattern(n);
    return 0;

}