#include"std_lib_facilities.h"

struct STATISTICS{
    int max;
    int min;
    float mean;
    float median;
};

int maxv(const vector<int> &numbers){
    int max = numbers[0];

    for(int i=1; i<numbers.size(); i++){
        if (numbers[i]>max){
            max = numbers[i];
        }
    }
    return max;
}


void calc_statistics(const vector<int> &numbers, struct STATISTICS &st){
    int max = numbers[0];
    int min = numbers[0];
    int total = numbers[0];
    float mean = 0;
    float median = 0;

    for(int i=1; i<numbers.size(); i++){
        if(numbers[i]>max){
            max = numbers[i];
        }
        if(numbers[i]<min){
            min = numbers[i];
        }
        median = (min + max)/2;
        total = total + numbers[i];
    }
    mean = total / numbers.size();

    st.max = max;
    st.mean = mean;
    st.min = min;
    st.median = median;
}


int main(void){
    try{
        struct STATISTICS st;
        struct STATISTICS *pst;
        int max_number;
        vector<int> price{10, 20, 30, 40, 50};

        cout<<"Calling function maxv on input vector"<<endl;
        max_number = maxv(price);
        cout<<max_number<<endl;

        cout<<"Calling function calc_statistics on input vector"<<endl;
        calc_statistics(price, st);
        cout<< "Max: " << st.max << " Min: " << st.min << " Median: " << st.median <<
                " Mean: " << st.mean << endl;

    }
    catch (exception& e){
        cerr << "exception: "<<e.what() <<endl;
    }
    catch(...){
        cerr << "exception\n";
    }
        return(EXIT_SUCCESS);
}
