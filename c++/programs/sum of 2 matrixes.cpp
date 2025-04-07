#include <iostream>
using namespace std;
int main(){
int rows,columns;
cout<<"Enter number of rows and columns: ";
cin>>rows>>columns;
int mat1[rows][columns], mat2[rows][columns], result[rows][columns];
cout<<"Enter elements of 1st matrix: \n";
for(int i=0;i<rows;i++){
for(int j=0;j<columns;j++){
cin>>mat1[i][j];
}
}
cout<<"Enter elements of 2nd matrix: ";
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cin>>mat2[i][j];
    }
}
cout<<"Sum of the matrices is: \n";
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        result[i][j]=mat1[i][j] + mat2[i][j];
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
}
