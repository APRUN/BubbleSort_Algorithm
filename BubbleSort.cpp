// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr[6]={2,4,2,1,4,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
int min_index,temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j])
            {
                temp=arr[min_index];
                arr[min_index]=arr[j];
                arr[j]=arr[temp];
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i],",";
    }
}