#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
         *a=*b;
         *b=temp;
}

void Sort_array_in_wave_form(int arr[], int n)
{
   sort(arr,arr+n);
   for(int i=0;i<n-1;i=i+2)
  {
    swap(&arr[i], &arr[i+1]);
  }

  cout<<"array in wave form\n";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";

}

int main()
{
     int n;
    cout<<"enter size of array\n";
    cin>>n;

    int arr[n];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    Sort_array_in_wave_form(arr,n);

  
return 0;
}