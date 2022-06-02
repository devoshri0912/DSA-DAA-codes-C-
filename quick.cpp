#include <stdio.h>
#include<iostream>
using namespace std;

#include<stdio.h>
int pivot,i,j,temp;
int parti(int num[],int fir,int las)
{
    pivot=fir;

    i=fir;

    j=las;

    while(i<j){

        while(num[i]<=num[pivot]&&i<las) // increase i till it points at an element greater than pivot

        i++;

        while(num[j]>num[pivot]) // decrement j till it points at an element less than pivot

        j--;

        if(i<j){                    //checking if i crossed j

            temp=num[i];

            num[i]=num[j];

            num[j]=temp;

        }

    }

    temp=num[pivot];    // changing the position of pivot and element pointed by j

    num[pivot]=num[j];

    num[j]=temp;

    return j;
}
void quicksort(int number[25],int first,int last){


    if(first<last){

                    int pos=parti(number,first,last);

                    quicksort(number,first,pos-1);

                    quicksort(number,pos+1,last);   // pos+1 because elememt at position pos is already at its correct position

                }

}

int main(){

    int  count, number[25];

    printf("Enter no. of elements (Max. - 25): ");

    scanf("%d",&count);

    printf("Enter %d elements: ", count);

    for(i=0;i<count;i++)

        scanf("%d",&number[i]);

    quicksort(number,0,count-1);

    printf("The Sorted Order is: ");

    for(i=0;i<count;i++)

        printf(" %d",number[i]);

return 0;

}

