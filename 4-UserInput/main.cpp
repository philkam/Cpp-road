#include <iostream>
#include <string>

using namespace std;

int main()
{

    int age;
    cout<< "Enter your age: ";
    cin>>age;
    cout<< "You are " <<age<< " years old" <<endl;

    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<< "Your name is " <<name<<endl;

    string newName;
    cout<<"Enter your name: "<<endl;
    cin.ignore();
    getline(cin,newName);
    cout<<" Your name is "<<newName<<endl;


    return 0;
}
