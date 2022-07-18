#include<bits/stdc++.h>

using namespace std;

int first(int arr[],int n,int key)
{

  int s=0;
  int p=n-1;
  int ans=-1;
while(s<=p)
{
int mid=(s+p)/2;
if(arr[mid]==key)
{
    ans=mid;
    p=mid-1;

}
if(arr[mid]>key){
    p=mid-1;
}
if(arr[mid]<key){
    s=mid+1;
}

}
return ans;




}


int last(int arr[],int n,int key)
{

  int s=0;
  int p=n-1;
  int ans=-1;
  while(s<=p){
int mid=(s+p)/2;
if(arr[mid]==key)
{
    ans=mid;
    s=mid+1;

}
if(arr[mid]>key){
    p=mid-1;
}
if(arr[mid]<key){
    s=mid+1;
}

  }
return ans;




  }



int main()
{
int a[10]={1,2,3,3,3,3,7,8,9,10};
cout<<"first occurence of 3 is on index "<<first(a,10,3);
cout<<"last occurence of 3 is on index "<<last(a,10,3);
return 0;
}