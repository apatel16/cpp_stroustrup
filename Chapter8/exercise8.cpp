#include"std_lib_facilities.h"

unsigned int X_n = 0; // Static, Data Section

void init_seed(){
    X_n = 63779;
}

int randint(){
    X_n = (48271 * X_n) % INT_MAX;
    return X_n;
}

int rand_in_range(int a, int b){
    if (b<=a) error("b must be larger than a");
    int r = randint();

    return a + double(r)/INT_MAX*(b-a);
}

int main(){
try{
    init_seed();
    for(int i=0; i<10; ++i){
        cout<<rand_in_range(950,1000) <<endl;
    }
}
catch (exception& e){
    cerr << "exception: "<<e.what() <<endl;
}
catch(...){
    cerr << "exception\n";
}
}