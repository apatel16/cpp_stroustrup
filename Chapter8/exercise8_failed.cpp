/* Failed try of random number generator from knuth vol2 */

#include "std_lib_facilities.h"


int main(){
    long long num = 636590384;
    int y;
    cout<< num <<endl;

    y = (int)(num/pow(10, 9));

    /* K1 */
    for (int i=0; i<y; i++){
        int z;
        char buffer[5];
        char c[] = "K";
        char *step_string;

        z = (int)(num/pow(10, 8)) % 10;
        z = z + 3;
        char *new_buffer = itoa(z, buffer, 10); 
        step_string = (char *)strcat(c, buffer); /*  K(3 + Z) */
        if (step_string == "K3"){
            if(num < 5000000000){
                num = num + 5000000000;
            }
            step_string = "K4";
            cout<< num <<endl;
        }
        if(step_string == "K4"){
            num = (long)pow(num, 2)/(long)pow(10, 5) % (long long)pow(10, 10);
            step_string = "K5";
            cout<< num <<endl;
        }
        if(step_string == "K5"){
            num = (num * 1001001001) % (long long)pow(10, 10);
            step_string = "K6";
            cout<< num <<endl;
        }
        if(step_string == "K6"){
            if(num < 100000000){
                num = num + 9814055677;
            }else{
                num = (long long)pow(10, 10) - num;
            }
            step_string = "K7";
            cout<< num <<endl;
        }
        if(step_string == "K7"){
            num = (long)pow(10, 5) * (num % (long)pow(10,5)) + (num / (long)pow(10, 5));
            step_string = "K8";
            cout<< num <<endl;
        }
        if(step_string == "K8"){
            num = (num * 1001001001) % (long long)pow(10, 10);
            step_string = "K9";
            cout<< num <<endl;
        }
        if(step_string == "K9"){
            num = num - (1111111111);
            step_string = "K10";
            cout<< num <<endl;
        }
        if(step_string == "K10"){
            if(num < (long)pow(10, 5)){
                num = (long long)pow(num, 2) + 99999;
            }
            else{
                num = num - 99999;
            }
            step_string = "K11";
            cout<< num <<endl;
        }
        if(step_string == "K11"){
          if(num < (long long)pow(10, 9)){
              num = num * 10;
          }  
          step_string = "K12";
          cout<< num <<endl;
        }
        if(step_string == "K12"){
            num = ((num*(num - 1))/(long long)pow(10,5)) % (long long)pow(10, 10);
            step_string = "K13";
            cout<< num <<endl;
        }
        if(step_string == "K13"){
            if(y > 0){
                y = y - 1;
                step_string = "K2";
                cout<< num <<endl;
            }
            else if(y == 0){
                break;
            }
        }
    }
    cout<<num<<endl;

    return 0;
}