// Given an nxm matrix 'a', return all elements of the matrix
// in spiral order

// matrix-> 123
//         456
//         789       to return----> 123698745
//see logic in copy 

#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int> > & matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix[0].size()-1;

    int direction=0;

    while(left<=right && top<=bottom) { // when top and bootm or left and rright point to the same row / column that means we have completed the matrix and we need to stop
    //left--->right
    if (direction==0){
        for(int col=left;col<=right;col++){
            cout<<matrix[top][col]<<" ";             // as row is the same st horizantal line but the coln no.s are changing
        }
        top++;
    }

    // top-->bottom
    else if(direction==1){
        for(int row=top;row<=bottom;row++){
            cout<<matrix[row][right]<<" ";   // row numbers are changing i.e 1st row then 2nd row but the column st vertical line is same
        }                                    // right as we initialised the row as right in the function declaration
        right--;
    }

    //right--->left
    else if(direction==2){
        for(int col=right;col>=left;col--){
            cout<<matrix[bottom][col]<<" ";
        }
        bottom--;
    }
    //bottom--->top
    else{
        for(int row=bottom;row>=top;row--){
            cout<<matrix[row][left]<<" ";
        }
        left++;
    }
    direction= (direction+1)%4;
    //to make sure direction functions are 0 1 2 3 respectively and not any random  number
}

}


int main(){

int n,m; 
cin>>n,m;
vector<vector<int> > matrix(n, vector <int> (m));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }

    spiralOrder(matrix);
}
return 0;
}

