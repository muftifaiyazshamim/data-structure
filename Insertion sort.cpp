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
    for(int i=1; i<a; i++)
    {
        int c=arr[i];
        int j=i-1;
        while(arr[j]>c && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=c;
    }
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
