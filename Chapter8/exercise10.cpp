#include"std_lib_facilities.h"


vector<double> calc_index(const vector<double> &price, const vector<double> &weight){
    vector<double> index;
    if(weight.size() > price.size()){
        error("Size of weight vector is more than price vector");
    }
    else{
        for(int i=0; i<weight.size(); ++i){
            index.push_back(price[i]*weight[i]);
        }
    }
    return index;
}



int main(){
try{
    vector<double> price{10.4, 40.6, 10};
    vector<double> weight{12.9, 15.5, 15.7};
    vector<double> index;

    index = calc_index(price, weight);

    for(int i=0; i<index.size(); i++){
        cout<<index[i]<<endl;
    }

}
catch (exception& e){
    cerr << "exception: "<<e.what() <<endl;
}
catch(...){
    cerr << "exception\n";
}
    return(EXIT_SUCCESS);
}
