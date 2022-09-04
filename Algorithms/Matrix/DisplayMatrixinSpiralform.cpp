#include<iostream>
using namespace std;

int main()
{
 int row,col;
 cout<<"Enter the no of rows :";
 cin>>row;
 cout<<"Enter the no of columns :";
 cin>>col;

 int matrix[row][col];
 int max=row*col;
 cout<<"Enter elements :"<<"\n";
 for (int  i = 0; i < row; i++)
 {
    for (int j = 0; j<col; j++)
    {
       cin>>matrix[row][col];
    }
    
 }
 for (int  i = 0; i < row; i++)
 {
    for (int j = 0; j <col; j++)
    {
       cout<<matrix[row][col]<<" ";
    }
    cout<<"\n";
 }

 int top = 0, bottom = row - 1, left = 0, right = col - 1;
  
  
  int dir = 1;
 
  while (top <= bottom && left <= right) {

    if (dir == 1) {    
      for (int i = left; i <= right; ++i) {
        cout<<matrix[top][i]  << " ";
      }
     
      ++top;
      dir = 2;
    } 
    else if (dir == 2) {     
      for (int i = top; i <= bottom; ++i) {
          cout<<matrix[i][right]  << " ";
      }
      
      --right;
      dir = 3;
    } 
    else if (dir == 3) {    
      for (int i = right; i >= left; --i) {
          cout<<matrix[bottom][i] << " ";
      }
      
      --bottom;
      dir = 4;
    } 
    else if (dir == 4) {     
      for (int i = bottom; i >= top; --i) {
          cout<< matrix[i][left] << " ";
      }
      
      ++left;
      dir = 1;
    }
  }
}

 
