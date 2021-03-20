#include <iostream>

using namespace std;

int main()
{ //int numberGrid[rows][columns]
   int  numberGrid[3][2] = {
      /*index 0*/            {1, 2},
      /*index 1*/            {3, 4},
      /*index 2*/            {5, 6}
                        };

    cout<<numberGrid[0][1]<<endl; //get 2
    cout<<numberGrid[2][0]<<endl; //get 5
    //in accessing an element in the [row index][index inside array]

    cout<<endl<<endl<<endl;
    for(int i = 0; i < 3;i++){  //rows
        for(int j = 0; j < 2; j++){ //columns
            cout<<numberGrid[i][j];
        }
        cout<<endl;
    }

}
//ytfreecodecamp. 2:54
