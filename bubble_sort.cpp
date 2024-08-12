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

//BUBBLE SORT
    for(int i =n-1;i>=0;i--)
{
        for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

    for(int i =0;i<n;i++)
    {
    cout<<"\n";
    cout<<arr[i];
    }

    return 0;
}