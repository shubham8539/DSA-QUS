#include<bits/stdc++.h>

using namespace std;
int main()
{


  int arr[]={12,45,67,88,100};
  cout<<"ENTER KEY TO SEARCH  ";
  int key;
  cin>>key;
  int s=0;
  int p=4;
  while(s<=p){
int mid=(s+p)/2;
if(arr[mid]==key){
    cout<<"element found at"<<mid<<endl;
    break;

}
if(arr[mid]>key){
    p=mid-1;
}
if(arr[mid]<key){
    s=mid+1;
}







  }


return -1;


}
