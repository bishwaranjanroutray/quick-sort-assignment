// Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]

#include<iostream>
using namespace std;

void change(int arr[],int n){
    int i=0;
    int j=n-1;
    int c=0,d=0;
    while(i<j){
        if(arr[i]>arr[i+1]){
            c=i;
        
        }
        if(arr[j]<arr[j-1]){
            d=j;
        }
        
            i++;
            j--;
       
    }
    swap(arr[c],arr[d]);
}

int main(){
    int arr[]={3, 8, 6, 7, 5, 9, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    change(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
