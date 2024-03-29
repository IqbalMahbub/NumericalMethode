#include<bits/stdc++.h>

using namespace std;

class gaussElimination{
    public:
    vector<double>gauss(vector<vector<double>>&mat){
        int n=mat.size();
        for(int i=0;i<n;i++){
            if(mat[i][i]==0){
                cout<<"Unsolveable"<<endl;
                return {};
            }
           for(int j=i+1;j<n;j++){
               double ratio=mat[j][i]/mat[i][i];
               for(int k=i+1;k<n;k++){
                   mat[j][k] =mat[j][k]-ratio*mat[i][k];
                }
            }
        }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j];
        }
    }

    }

};




int main(){
    gaussElimination formula;
    int N;
    cin>>N;
    vector<vector<double>>mat(N,vector<double>(N+1));
    for(int i=0;i<N;i++){
        for(int j=0;j<N+1;j++){
            cin>>mat[i][j];
        }
    }
    vector<double>ams=formula.gauss(mat);
}