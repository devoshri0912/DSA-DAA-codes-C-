#include<iostream>
using namespace std;
knapsack(int w[],int v[],int cap,int tot)
{
    int i,j;
    int k[tot+1][cap+1];

    for(i=0;i<=tot;i++)
    {
        for(j=0;j<=cap;j++)
        {
            if(i==0||j==0)
                k[i][j]=0;

            else if(w[i-1]<=j)
                k[i][j]=max(v[i-1]+k[i-1][j-w[i-1]],k[i-1][j]);
            else
                k[i][j]=k[i-1][j];
        }
    }
    cout<<"\nthe matrix table is\n";
    for(i=0;i<=tot;i++)
    {
        for(j=0;j<=cap;j++)
            cout<<k[i][j]<<"\t";

        cout<<endl;
    }
    return k[tot][cap];
}
int main()
{
    int i,n,weight[25],val[25],c;
    cout<<"\nenter the number of items";
    cin>>n;
    cout<<"\nenter the weight and the value of each item";
    for(i=0;i<n;i++)
    {
        cout<<"\nenter the weight "<<i+1;
        cin>>weight[i];
        cout<<"\nenter the value "<<i+1;
        cin>>val[i];
    }

        cout<<"\nenter the capacity if knapsack";
        cin>>c;

        int ans=knapsack(weight,val,c,n);
        cout<<"\nthe max profit is\t\t";
        cout<<ans;


}
