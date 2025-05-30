#include<bits/stdc++.h>
using namespace std;
#define N 5
int st[N];
int top=-1;
void push(){
int x;
cout << "Enter data you want to insert : ";
cin >>x;
if(top==N-1)
    {
        cout<<"Overflow"<<endl;
    }
else
    {
    top++;
    st[top]=x;
    }
}
void pop(){
 int v;
 if(top==-1){
    cout<<"Underflow"<<endl;
    }
 else{
    v=st[top];
    top--;
    cout<<"Deleted Value : "<<v<<endl;

    }
}
void display(){
for(int i=top;i>=0;i--){
    cout<<st[i]<<" ";
    }
    cout<<endl;
}
void isfull(){
   if (top==N-1){
    cout <<"Full"<<endl;
   }
   else{
   cout << "not full" << endl;
   }

}
void isempty(){
    if (top==-1){
    cout <<"Empty"<<endl;
   }
   else{
   cout << "Not Empty" << endl;
   }

}

int main(){

int f;
for(;;){
cout << "Enter the number what you want to do : \n1.Push \n2.Pop \n3.Display \n4.isFull \n5.isEmpty \n6.Exit" << endl;
cin >> f;
if(f==1)
    {
    push();
    }

else if(f==2)
    {
    pop();
    }
else if(f==3)
    {
    display();
    }
else if(f==4)
    {
    isfull();
    }   
else if(f==5)
    {
    isempty();
    }
else if(f==6)
    {
    cout << "Exiting..." << endl;
    break;
    }
else
    {
    cout << "Please enter a valid number(between 1 to 6)" << endl;
    }
 }    
return 0;
}