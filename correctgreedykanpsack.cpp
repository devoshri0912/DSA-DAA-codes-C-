#include<iostream>
using namespace std;
int n,c,w[25],v[25],k[25],taken[25],profit=0,i,j;

int main()
{
    cout<<"\nenetr the number of items";
    cin>>n;
    cout<<"\nenetr the capacity";
    cin>>c;

    for(i=0;i<n;i++)
        taken[i]=0;

    cout<<"\nenetr thr weight and value of each item";
    for(i=0;i<n;i++)\
    {
        cin>>w[i];
        cin>>v[i];
    }

    for(i=0;i<n;i++)
    {
        k[i]=v[i]/w[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(k[j]<k[j+1])
            {
                swap(k[j],k[j+1]);
                swap(w[j],w[j+1]);
                swap(v[j],v[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(w[i]<=c)
        {
            taken[i]=1;
            c=c-w[i];
            profit=profit+v[i];
        }
        if((w[i]>c)&&(c>0))
        {
            taken[i]=(float)c/w[i];
            profit=profit+(k[i]*c);
            c=0;
        }
        else
            taken[i]=0;

    }



    cout<<endl<<profit;
}
