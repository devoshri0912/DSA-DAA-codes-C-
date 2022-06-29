
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int done[25];
    queue<int> q,q1;
    int n,ad[25][25],visited[25],indeg[25],count=0;
    cout<<"\nenetr the number of vertices";
    cin>>n;

    cout<<"\nenetr the adjacency matrix";
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++)
        cin>>ad[i][j];
    }

    for(int i=0;i<n;i++){
        indeg[i]=0;
        visited[i]=0;
        done[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            indeg[i]=indeg[i]+ad[j][i];
    }

    cout<<"\nthe topological order is";

    for(int i=0;i<n;i++)
    {
        if(indeg[i]==0)
        {
            q.push(i);
            visited[i]=1;
        }

    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
       cout<<u;


        for(int j=0;j<n;j++)
        {
            if(!visited[j] && ad[u][j]==1)
            {
                indeg[j]--;
                if(indeg[j]==0){
                    q.push(j);
                visited[j]=1;

                }
            }
        }
    }

}
