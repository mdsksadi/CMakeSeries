#include<iostream>

int add(int x, int y);

int main(){
    std::cout<<"Hello from C++ with CMake on Linux"<<std::endl;
    std::cout<<"The sum is: "<<add(5,7)<<std::endl;
    
    return 0;
}

int add(int x, int y){

    return x+y;
}