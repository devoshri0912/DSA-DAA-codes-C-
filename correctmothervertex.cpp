#include<iostream>
#include<queue>
using namespace std;
int n,graph[25][25],visited[25],counts=0;

void DFS(int a)
{
    int i;
        visited[a]=1;

        for(i=0;i<n;i++)
        {
            if(!visited[i] && graph[a][i]==1)
            {
                DFS(i);
            }
        }
}
int findmother()
{
    int i,v=0;

    for(i=0;i<n;i++)
        visited[i]=0;

    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            DFS(i);
            v=i;
        }
    }

    for(i=0;i<n;i++)
        visited[i]=0;
    DFS(v);
    for(i=0;i<n;i++)
    {
        if(visited[i]=0)
            return -1;
    }
    return v;
}

int main()
{
    int i,j;
    cout<<"\nenetr the number of vertices";
    cin>>n;
    cout<<"\nenter the graph";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>graph[i][j];
    }
    cout<<"\nthe mother vertex is   "<<findmother();
}
