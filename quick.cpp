//   Quick sort

#include <cmath>
#include <iostream>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;       

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++; 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
   
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
    }

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int par= partition(arr,low,high);
        quickSort(arr,low,par-1);
        quickSort(arr,par+1,high);
    }
}


int main()
{

    int n;
    cout<<"Enter the total numbers you want to sort \n";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
    cout<<"Enter the "<<i<<" th number :\n";
    cin>>arr[i];
    }  

//quickSort


  quickSort(arr,0,n-1);

    for(int i =0;i<n;i++)
    {
    cout<<"\n";
    cout<<arr[i];
    }
cout<<"\n";
    return 0;
}

