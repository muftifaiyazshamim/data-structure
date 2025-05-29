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

}
void isempty(){
    if (top==-1){
    cout <<"Empty"<<endl;
   }

}

int main(){


    push();
    push();
     push();
      push();
       push();
    display();
isfull();
    pop();
    pop();
    display();
}
