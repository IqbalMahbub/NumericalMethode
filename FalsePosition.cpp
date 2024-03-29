#include<bits/stdc++.h>

using namespace std;

const int lb = -10;
const int ub = 10;
const double diff = 0.01;

class falsePositionMethode {
    public:
    double function(double x){
        return  x*x*x-x*x+2;
    }
  void getRoot(double a,double b){

    if(function(a)*function(b)>=0){
        cout<<"Wrong value of 'a' & 'b'."<<endl;
        return;
    }
    double root=a;
    int tern=0;
    while(tern<=100 ){
        double fa=function(a);
        double fb=function(b);
        root=(a*fb-b*fa)/(fb-fa);

        cout<<"Range : "<<a<<" "<<b<<" : "<<"let the root be  "<<root<<endl;


        if(function(root)==0){
           break;
        }
        if(function(root)*function(a)<0){
            b=root;
        }
        else{
            a=root;
        }
        tern++;
    }
     cout<<"The root is : "<<root<<endl;

   }
};
int main(){
    falsePositionMethode  findRoot;
    double a,b;
    //get a randomly
    do{
        a=(rand()%(ub-lb+1))+lb;
    }while(findRoot.function(a)>0);

     //get b randomly
    do{
        b=(rand()%(ub-lb+1))+lb;
    }while(findRoot.function(b)<0);
    findRoot.getRoot(a,b);

}
