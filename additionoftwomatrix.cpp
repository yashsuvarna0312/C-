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
    int  data1[col][row];
    int data2[col][row];
    int i,j;
    cout<<"enter elements:";
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cin>>data1[i][j];
        }
    }
    for (int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            
            cout<<data1[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"enter elements:";
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cin>>data2[i][j];
        }
    }
    for (int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            
            cout<<data2[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    cout<<"sum of two matrix:"<<endl;
    for (int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            
            sum=data1[i][j]+data2[i][j];
            cout<<" "<<sum;
        }
        cout<<endl;
    }
    
    
    return 0;
}
