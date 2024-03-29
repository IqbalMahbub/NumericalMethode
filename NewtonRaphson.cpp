#include<bits/stdc++.h>

using namespace std;
const double dif =0.001;
class newtonRaphson{
    public:
    double function(double x){
        return x*x*x+x*x-2;
    }
    double derivative(double x){
        return 3*x*x+2*x-2;
    }
    double getRoot(double x){
        double h= function(x)/derivative(x);
        while(abs(h)>dif){
            x=x-h;
            h= function(x)/derivative(x);
        }
        return x;
    }

};
int main(){
    newtonRaphson findRoot;
    for(int i=0;i<10;i++){
    double root=rand();
    cout<<"assump :"<<root<<" ";
    root =findRoot.getRoot(root);
    cout<<"final root : "<<root<<endl;
    }
    return 0;

}