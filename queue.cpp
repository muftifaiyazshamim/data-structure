#include <bits/stdc++.h>
using namespace std;
#define N 5

int queu[N];
int front = -1;
int rear = -1;

void enqueu()
{
    if (rear == N - 1)
    {
        cout << "Overflow" << endl;
        return;
    }
    int x;
    cout << "Enter data you want to insert: ";
    cin >> x;
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queu[rear] = x;
}

void dequeu()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow" << endl;
    }
    else if (front == rear)
    {
        cout << "Deleted Value: " << queu[front] << endl;
        front = rear = -1;
    }
    else
    {
        cout << "Deleted Value : " << queu[front] << endl;
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Front value: " << queu[front] << endl;
    }
}

void display()
{
   
    for (int i = front; i <= rear; i++)
    {
        cout << queu[i] << " ";
    }
    cout << endl;
}

int main()
{
    int f;
    for (;;)
    {
        cout << "Enter the number for operation:\n";
        cout << "1.Enqueue \n2.Dequeue \n3.Peek \n4.Display \n5.Exit" << endl;
        cin >> f;

        if (f == 1)
        {
            enqueu();
        }
        else if (f == 2)
        {
            dequeu();
        }
        else if (f == 3)
        {
            peek();
        }
        else if (f == 4)
        {
            display();
        }
        else if (f == 5)
        {
            cout << "Exiting..." << endl;
            break;
        }
        else
        {
            cout << "Please enter a valid number (1 to 5)" << endl;
        }
    }
    return 0;
}
