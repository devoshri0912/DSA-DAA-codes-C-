#include<stdio.h>
#include <iostream>
using namespace std;

int main()
{   int n,i,j,graph[25][25],trans[25][25];
    cout<<"\nenetr the number of vertices";
        cin>>n;

        cout<<"\nenetr the graph";
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++)
            {
                cin>>graph[i][j];
            }
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                trans[i][j]=graph[j][i];
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
               {
                   cout<<trans[i][j]<<"\t";
               }
               cout<<endl;

        }
        cout<<endl;
}
