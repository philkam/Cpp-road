#include <iostream>

using namespace std;

int main()
{
    string name = "Phil";
    string *pName = &name;
    int age = 23;
    int *pAge  = &age;
    double gpa = 4.0;
    double *pGpa = &gpa;

    cout<<pAge<<endl;
    cout<<*pAge<<endl; //dereference the pointer

    cout<< *&gpa;

}
