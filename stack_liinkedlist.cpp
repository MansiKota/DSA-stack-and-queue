#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int x){
        data=x;
        next=NULL;
    }
};

class stack{
    private:
    node *top;

    public:
    stack(){
        top=NULL;
    }
    int empty(){
        if(top==NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int x){
        node *p=new node(x);
        p->next=top;
        top=p;
    }
    int pop(){
        int x=top->data;
        node *p=top;
        top=top->next;
        delete p;
        return x;
    }
    int peek(){
        return top->data;
    }
    void display(){
        node *q=top;
        while(q!=NULL){
            cout<<q->data<<endl;
            q=q->next;
        }
    }
};

int main(){
    int x;
    stack s;
    s.push(100);
    s.push(45);
    s.push(74);
    s.push(89);
    s.push(63);
    s.push(50);
    s.display();

    if(!s.empty()){
        x=s.pop();
        cout<<"Removed "<<x<<endl;
    }
    s.display();
    x=s.peek();
    cout<<"Top element is "<<x<<endl;
    return 0;
}
/*
PS D:\MansiKota> g++ stackLL.cpp
PS D:\MansiKota> .\a.exe
50
63
89
74
45
100
Removed 50
63
89
74
45
100
Top element is 63
*/