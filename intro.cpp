#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int std_id;
        int age;
        string fathers_name;
        string mothers_name;

        void print_information(){
            cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<endl;
        }



};
int main(){
    student s;
    s.name = "Apurba";
    s.std_id = 123456;
    s.age = 24;
    s.fathers_name = "Dulal saha";
    s.mothers_name = "radha saha";

    s.print_information();
    return 0;
}