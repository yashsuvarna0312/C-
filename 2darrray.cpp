#include <iostream>
using namespace std;

int main()
{
    char data[3][3];
    data[0][0]='a';
     data[1][0]='b';
    data[2][0]='c';
 
     data[0][1]='d';
     data[1][1]='e';
    data[2][1]='f';
     data[0][2]='g';
     data[1][2]='h';
     data[2][2]='i';
    
    for (int i=0;i<3;i++)
    {for ( int j=0;j<3;j++){
        cout<<data[i][j]<< " ";
    }
       cout<<endl; 
    }

    return 0;
}
