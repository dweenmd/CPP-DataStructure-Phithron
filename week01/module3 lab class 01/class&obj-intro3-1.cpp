#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    void print_info()
    {
        cout<<name << " "<<std_id<< " "<<age<<" " <<fathers_name<<" "<<mothers_name<"\n";
    }

};
int main()
{
    student s;

    s.name="Dween";
    s.std_id= 10785393;
    s.age=21;
    s.fathers_name="Abdul Awal";
    s.mothers_name="rehana akter";
    s.print_info();

    return 0;
}
