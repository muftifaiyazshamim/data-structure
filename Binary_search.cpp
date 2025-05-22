
#include <iostream>
#include <algorithm>
#include <cmath>
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
    sort(arr, arr + a);

    /*

     for(int i=0;i<a;i++){
      cout<<arr[i]<<" ";
    }
     */
    int c;
    cout<<"Enter element to get : ";
    cin >> c;
    int mid=0,l=0,h=a-1;
    for(; arr[mid]!=c;)
    {
        mid=floor((l+h)/2);
        if (arr[mid]<c)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<"Index is : ";
    cout<<mid<<endl;
    cout<<"Position is : ";
    cout<<mid+1;

    return 0;
}















