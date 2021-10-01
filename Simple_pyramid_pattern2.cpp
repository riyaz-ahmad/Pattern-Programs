/*
Pattern 2
-----------------------------------
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
    for(int i=n;i>0;i--){//for rows
        for(int j=0;j<=n;j++){//for columns
            if(j>=i)
                cout<<"*";
            else
                cout<<" ";
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