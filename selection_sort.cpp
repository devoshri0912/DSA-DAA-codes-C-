#include<bits/stdc++.h>
using namespace std;

int selection_sort(int arr[],int n)
{

       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]<arr[i]) //searches the smallest element strating from i+1 and place it at ith position
               {
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
               }
           }
       }
    return 0;
}
int main()
{
    int n,key;
    cout<<"no of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enetr elememnts\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"\nthe sorted array is\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
