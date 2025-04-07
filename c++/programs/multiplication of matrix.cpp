#include <iostream>
using namespace std;
int main(){
int rows,col;
cout<<"Enter number of rows and columns: \n";
cin>>rows>>col;
int mat1[rows][col],mat2[rows][col],result[rows][col];
cout<<"Enter elements of 1st matrix: \n";
for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
            cin>>mat1[i][j];
    }
}
cout<<"Enter elements of 2nd matrix: \n";
for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        cin>>mat2[i][j];
    }
}
cout<<"The resultant matrix is: \n";
for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        result[i][j]=mat1[i][j] * mat2[i][j];
        cout<<result[i][j]<<" ";
    }
      cout<<endl;
}return 0;
}
