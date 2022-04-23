#include<bits/stdc++.h>
using namespace std;

int linear(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"no of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enetr elememnts";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\neneter the element to be searched";
    cin>>key;
    cout<<"the position of element is"<<linear(arr,n,key);
    return 0;
}
