#include <iostream>

using namespace std;


void sayHi(string name,int age);

int main()
{

    sayHi("Phil",20);
    sayHi("Ken",22);
    sayHi("Pan",23);



}

void sayHi(string name, int age){
    cout<<"Hello " <<name << " YOu are " <<age <<endl;

}
