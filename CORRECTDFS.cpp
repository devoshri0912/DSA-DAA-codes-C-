#include<iostream>
using namespace std;
int n,i,j,graph[25][25],visited[25],src,dest;

void DFS(int i){
    int j;
    cout<<i;
    visited[i]=1;
    for(int j=0;j<n;j++)
    {
        if((graph[i][j]==1)&&(!visited[j]))
        {

                DFS(j);
        }
    }
}
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>graph[i][j];
    }

    int visited[n]={0};



       DFS(0);






}
