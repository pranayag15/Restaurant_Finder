#include <iostream>
#include <sstream>
using namespace std;

class Student
{ public:
 int age, standard;
string first_name, last_name;
     void set_age()
     {
         cin>>age;
     }
      void set_standard()
      {
          cin>>standard;
      }
       void set_first_name()
       {
           cin>>first_name;
       }
       void set_last_name()
       {
           cin>>last_name;
       }
 
 void get_age()
 {
     cout<<age<<endl;
 }
 
 void get_first_name()
 {
     cout<<last_name<<","<<first_name<<endl;
 }
 
 void get_standard()
 {
     cout<<standard<<endl;
 }
 
 void display()
 {
     cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
 }
 
 
};
/*
Enter code for class Student here.
Read statement for specification.
*/

int main() {
      
    Student st;
    st.set_age();
    st.set_standard();
    st.set_first_name();
    st.set_last_name();

    st.get_age();
    st.get_first_name();
    st.get_standard();
    st.display();
    
    return 0;
}
