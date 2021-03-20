#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     int wnum = 5;
     double dnum = 5.5;

     dnum++;
     wnum +=80;
  //   cout<<wnum<<endl;

     cout<<"Power of 2 exp 5 ="<< pow(2,5)<<endl;
     cout<<"Square root of 36 ="<<sqrt(36)<<endl;
     cout<<"Rounding 4.5 ="<<round(4.5)<<endl;
     cout<<"Ceiling 4.2 ="<<ceil(4.2)<<endl;
     cout<<"Floor 3.1="<<floor(3.1)<<endl;
     cout<<"Which is bigger between 3 and 10?"<<fmax(3,10)<<endl;
     cout<<"Which is smaller between 2 and 10?"<< fmin(2,10)<<endl;
}
