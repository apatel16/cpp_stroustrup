#include<stdio.h>

namespace X{
    int var;

    void print(){
        printf("X: %d\n", var);
    }
}

namespace Y{
    int var;

    void print(){
        printf("Y: %d\n", var);
    }
}

namespace Z{
    int var;

    void print(){
        printf("Z: %d\n", var);
    }
}

int main(void){
    
    X::var=7;
    X::print();
    using namespace Y;
    var = 9;
    print();
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();
    }
    print();
    X::print();

    return 0;
}