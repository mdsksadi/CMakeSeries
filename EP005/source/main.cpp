#include<iostream>
#include"include/include2/add.h"
#include"include/include2/minus.h"
#include"include/mult.h"
#include"include/dev.h"

int main(){
    std::cout<<"This is our result."<<std::endl;
    std::cout<<"The sum is: "<<jogkori(5,3)<<std::endl;
    std::cout<<"The substitution is: "<<biyogkori(5,3)<<std::endl;
    std::cout<<"The Multiplication is: "<<gunkori(5,3)<<std::endl;
    std::cout<<"The division is: "<<vagkori(6,3)<<std::endl;

    return 0;
}