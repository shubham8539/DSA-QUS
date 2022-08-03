#include<iostream>
using namespace std;



void merge(int arr[],int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int arr1[len1];
    int arr2[len2];
    int k=s;
    for(int i=0;i<len1;i++){

        arr1[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {

        arr2[i]=arr[k++];
    }
    int i1=0;
    int i2=0;
    k=s;
    while(i1<len1 && i2<len2){
        if(arr1[i1]<arr2[i2]){
            arr[k++]=arr1[i1++];
        }
        else{
            arr[k++]=arr2[i2++];
        }
    }


     while(i1<len1){
        arr[k++]=arr1[i1++];
     }
     while(i2<len2){
        arr[k++]=arr2[i2++];
     }


}

void mergesort(int arr[],int s,int e)
{
     if(s>=e){
        return;
     }
     int mid=(s+e)/2;
     mergesort(arr,s,mid);
     mergesort(arr,mid+1,e);
     merge(arr,s,e);
     
}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergesort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}