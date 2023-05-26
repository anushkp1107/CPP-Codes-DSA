//* syntax of 2d vector : vector <vector <datatype>> vector_name

// pascals triangle:

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > pascalTriangle(int n){

    vector<vector<int>> pascal(n);

    for(int i=0;i<n;i++){
        int ith_vector = pascal[i];
        ith_vector.resize(i+1);

        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j] = pascal[i-1][j] + pascal [i][j-1];
            }
        }
    }
    return pascal;
}



int main(){                                

    int n; cin>>n;

    vector<vector<int>> ans;
    ans = pascalTriangle(n);
                                          
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){                             //* to print rows and columns
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

return 0;
}