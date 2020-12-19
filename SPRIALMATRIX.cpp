#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[3][3] = {{1,2,3},{5,6,7},{9,10,11},{13,14,15}};


int first_row = 0;
int last_row = 3;
int first_col = 0;
int last_col = 3;


while(first_row < last_row && first_col < last_col){

for(int i=first_col; i<last_col; i++){				
cout<<arr[first_row][i]<<"\n";			//FIRST COLUMN TO LAST COLUMN 
}

for(int i=first_row+1; i<last_col; i++)
cout<<arr[i][last_col-1]<<"\n";			//2 ROW TO LAST COLUMN

for(int i=last_col-2; i>=first_col; i--)
cout<<arr[last_row-1][i]<<"\n";
						//THIS RUN BACK 
for(int i=last_row-2; i>=first_row+1; i--)
cout<<arr[i][first_col]<<"\n";

first_row++;
last_row--;
first_col++;
last_col--;


}

}