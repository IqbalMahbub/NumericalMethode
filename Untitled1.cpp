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
        vector<double>ans(n+1);
        ans[n]=mat[n-1][n]/mat[n-1][n-1];
        for(int i=n-1;i>=0;i--){
            ans[i]=mat[i][n];
            for(int j=i+1;j<n;j++){
                ans[i]=ans[i]-mat[i][j]*ans[j];
            }
            ans[i]=ans[i]/mat[i][i];
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<endl;
       /* for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;*/
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
