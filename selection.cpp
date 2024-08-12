//   Selection Sort

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

//Selection Sort

    for(int i=0;i<n;i++)
{
    int min=65524;
    int m=i;
        for(int j=i;j<n;j++)
    {
        if(arr[j]<min)
        {
            m=j;
            min=arr[j];
        }      
    }
      int temp =arr[i];
            arr[i]=arr[m];
            arr[m]=temp;
}

    for(int i =0;i<n;i++)
    {
    cout<<"\n";
    cout<<arr[i];
    }

    return 0;
}