#include <iostream>
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

    int x=1;
    while(x<a)
    {
        for(int i=0; i<a-x; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        x++;
    }

    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

