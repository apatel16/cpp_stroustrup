#include "std_lib_facilities.h"


int main(void){
    vector<string> name, name_copy;
    vector<int> age, new_age;
    string str;
    int age_num;

    for(int i=0; i<5; i++){
        cin>>str;
        name.push_back(str);
        name_copy.push_back(str);
    }

    for(int i=0; i<5; i++){
        cout<<"Enter age of "<<name[i]<<" : ";
        cin>>age_num;
        age.push_back(age_num);
    }
    
    cout<<"Before sorting ====> "<<endl;
    for(int i=0; i<5; i++){
        cout<< name[i] << " : " << age[i]<<endl;
    }
    
    sort(name.begin(), name.end());
    
    /* Resort age according to sorted names */
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if (name[i] == name_copy[j]){
                new_age.push_back(age[j]);
            }
        }
    }

    cout<<"After sorting =====> "<<endl;
    for(int i=0; i<5; i++){
        cout<< name[i] << " : " << new_age[i]<<endl;
    }
    
    return (0);
}