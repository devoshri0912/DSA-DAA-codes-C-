#include<iostream>
using namespace std;
int n,a[25][25],visited[25],dest,src;
int DFS(int i)
{
    visited[i]=1;
    for(int j=1;j<=n;j++)
    {
        if((visited[j]==0)&&(a[i][j]==1))
        {
            if(j==dest)
                return (1);
            else
                DFS(j);
        }
    }
    return (0);
}
int main()
{

    cout<<"\nenter the number of vertices";
    cin>>n;
    cout<<"\nenetr the adjacency vertix (0 or 1)";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
             cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
        visited[i]=0;
        cout<<"\nenter the first node";
        cin>>src;
        cout<<"\nNenter the destination node";
        cin>>dest;

        int result=DFS(src);
        if(result)
            cout<<"\npath found";
        else
            cout<<"\nnot found";


}
