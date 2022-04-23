#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int n,int key)
{

       int start=0;
       int ends=n;

       while(start<ends)
       {
           int mid=(start+ends)/2;

           if(arr[mid]==key){
            return mid;
           }

           if(arr[mid]>key)
           {
               ends=mid-1;
           }
           else
            start=mid+1;

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
    cout<<"the position of element is"<<binary(arr,n,key);
    return 0;
}
