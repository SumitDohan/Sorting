//   Merge sort
#include <cmath>
#include <iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right)
{
int ans[right-left+1];
int ind=0; 
int l=left;
int r=mid+1;
while(l<=mid && r<=right)
{
if(arr[l]<=arr[r])
{
ans[ind]=arr[l];
l++;
ind++;
}
else
{
ans[ind]=arr[r];
r++;
ind++;
}
}

while(l<=mid)
{
ans[ind]=arr[l];
l++;
ind++;
}

while (r<=right)
{
ans[ind]=arr[r];
r++;
ind++;
}

ind=0;
while(left<=right)
{
arr[left]=ans[ind];
left++;
ind++;
}

}


void mergeSort(int arr[],int left,int right)
{
if(left==right)
return;

 int mid = left + (right - left) / 2;
 
 mergeSort(arr,left,mid);
 mergeSort(arr,mid+1,right);
 
 merge(arr,left,mid,right);
}



int main()
{
    int n;
    cout<<"Enter the total numbers you want to sort\n";
    cin>>n;
   
    int arr[n];
    for(int i =0;i<n;i++)
    {
    cout<<"Enter the "<<i<<" th number :\n";
    cin>>arr[i];
    }
    
//mergeSort
  mergeSort(arr,0,n-1);

    for(int i =0;i<n;i++)
    {
    cout<<"\n";
    cout<<arr[i];
    }
cout<<"\n";
    return 0;
}


