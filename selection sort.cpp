#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter arrey size : ";
    cin >> a;
    int arr[a];
    cout<<"Enter elements of arrey : ";
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<a; i++)
    {
        int mn=i;
        for (int j=i+1; j<a; j++)
        {
            if(arr[j]<arr[mn])
            {
                mn=j;
            }
        }
        if(mn!=i)
        {
            int temp=arr[i];
            arr[i]=arr[mn];
            arr[mn]=temp;
        }
    }
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
