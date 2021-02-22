#include<stdio.h>

void swap_v(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}



int main(void){
    int x = 7;
    int y = 9;

    double dx=7.7;
    double dy=9.9;

    swap_v(dx,dy);
    printf("swap--> (%f, %f)\n", dx, dy);

    return 0;
}