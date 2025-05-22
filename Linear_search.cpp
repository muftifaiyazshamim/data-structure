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


    int c;
    cout<<"Enter element to get : ";
    cin >> c;
    for(int i=0; i<a; i++)
    {
        if (c==arr[i])
        {
            cout<<"Index is : ";
            cout<<i<<endl;
            cout<<"Position is : ";
            cout<<i+1;
            break;
        }


    }
    return 0;
}

