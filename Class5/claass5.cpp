#include<iostream>
using namespace std;

// recursion concept

void print(){
    int count = 0;
    if(count ==3){
        return;
    }
    cout<<count<<endl;
    count++;
    print();
}

int main(){
    cout<<"Hello World"<<endl;
    print();
    return 0;
}