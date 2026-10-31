#include<iostream>
using namespace std;
const int MAX=5;

class Stack{
    private:
       int a[MAX];
       int top;
    public:
       Stack(){
        top=-1;
       }
       void push(int x){
        top++;
        a[top]=x;
       }
       int pop(void){
        int x=a[top];
        top--;
        return x;
       }
       int peek(void){
        return a[top];
       }
       int full(void){
        if(top==MAX-1){
            return 1;
        }
        else{ 
            return 0;
        }
       }
       int empty(void){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
       }
       void display(){
        for(int i=top;i>=0;i--){
            cout<<a[i]<<endl;
        }
       }
};

int main(){
    int x;
    Stack s;
    if(!s.full()){
        s.push(12);
    }
    if(!s.full()){
        s.push(32);
    }
    if(!s.full()){
        s.push(14);
    }
    if(!s.full()){
        s.push(58);
    }
    if(!s.full()){
        s.push(39);
    }
    if(!s.full()){
        s.push(92);
    }
    if(!s.full()){
        s.push(10);
    }
    cout<<"Stack elements:"<<endl;
    s.display();
    if(!s.empty()){
        x=s.pop();
        cout<<"Removed "<<x<<endl;
    }
    cout<<"Stack after pop:"<<endl;
    s.display();
    if(!s.empty()){
        x=s.peek();
        cout<<"Top element is"<<x<<endl;
    }
    return 0;
}
/*
PS D:\MansiKota> g++ stackarr.cpp
PS D:\MansiKota> .\a.exe
Stack elements:
39
58
14
32
12
Removed 39
Stack after pop:
58
14
32
12
Top element is58
*/