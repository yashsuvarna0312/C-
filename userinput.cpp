#include <iostream>
using namespace std;

int main()
{
     int row ;
    cout<<"Enter the number of rows:";
    cin>>row;
    int col;
    cout<<"Enter the number of columns:";
    cin>>col;
    char data[col][row];
    int i,j;
    cout<<"enter elements:";
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cin>>data[i][j];
        }
    }
    for (int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            
            cout<<data[j][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
