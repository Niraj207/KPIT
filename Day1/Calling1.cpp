#include<iostream>

//calling by value

void magic(int data){
    int data=100;
    cout<<data;
};

int main(){
    magic();
    //int data=100;
}