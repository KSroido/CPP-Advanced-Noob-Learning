#include<iostream>

static int int_foo = 5;

int fn_foo(){
    static int int_bar;
    std::cout<<"uninitialized int_bar:"<<int_bar<<std::endl;
    int_bar = 6;
    std::cout<<"int_foo:"<<int_foo<<std::endl;
    int_foo = 6;
    std::cout<<"change int_foo:"<<int_foo<<std::endl;
    return 1;
}

int main(){

    fn_foo();
    std::cout<<"int_foo in main:"<<int_foo<<std::endl;
    


 }