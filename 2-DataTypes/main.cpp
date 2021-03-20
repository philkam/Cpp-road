#include <iostream>

using namespace std;

int main()
{
   char grade = 'A';
   string phrase = "Philip Academy";
   int age = 50;
   double gpa = 2.3;
   bool isMale = true;

   cout<< grade <<endl;

   cout<<"Philip Academy\n";
   cout<<"Go there" <<endl;

   cout<<"Length of string is " <<phrase.length() <<endl;
   cout<<"The first character is " <<phrase[0]<<endl;
   phrase[0] = 'B';
   cout<<phrase<<endl;
   cout<<endl;
   cout <<"Which index position is Academy at from 0 ?  " <<  phrase.find("Academy", 0) <<endl;
   cout<< "Pulls string out of a whole string? "<<phrase.substr(7,3)<<endl;
   string phrasesub = phrase.substr(7,3);
   cout<<phrasesub;




}
