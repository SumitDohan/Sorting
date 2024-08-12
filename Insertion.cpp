//   Insertion Sort

#include <iostream>
using namespace std;

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

//Insertion Sort


for(int i=1;i<n;i++)
{
int j=i;
    
    while(j>0)
{
    if(arr[j]<arr[j-1])
    {
    int temp=arr[j];
    arr[j]=arr[j-1];
    arr[j-1]=temp;
    }
   j--;
 }       
}



    for(int i =0;i<n;i++)
    {
    cout<<"\n";
    cout<<arr[i];
    }
cout<<"\n";
    return 0;
}
