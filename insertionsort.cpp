#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nenter n \n";
    cin>>n;
    int arr[n];
    cout<<"\nenter the array\n";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
       int current=arr[i];
       int j=i-1;
       while(arr[j]>current && j>=0) {
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=current;
    }
    cout<<"\nthe sorted array is\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";    }
    return 0;
}
