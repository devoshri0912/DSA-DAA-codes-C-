#include<iostream>
#include<queue>
using namespace std;
int n,i,j,graph[25][25],colour[25],src;
int main()
{
    cout<<"\nenetr the number of nodes";
    cin>>n;
    cout<<"\nenetr the graph";
    for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cin>>graph[i][j];
        }

    for(i=0;i<n;i++)
        colour[i]=-1;

    queue<int> q;


    cout<<"\nenetr the source";
    cin>>src;
    q.push(src);

    colour[src]=1;

    while(!q.empty()){

        int u=q.front();
        q.pop();

        for(i=0;i<n;i++)
        {
            if(graph[u][i] && colour[i]==-1)
            {
                colour[i]=1-colour[u];
                q.push(i);
            }
            else if(graph[u][i]&&colour[i]==colour[u])
            {
                cout<<"\nnot biparttie";
                return 0;
            }

        }
    }
    cout<<"\nbipartite";
}
