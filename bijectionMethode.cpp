#include<bits/stdc++.h>

using namespace std;

const int lb = -1000;
const int ub = 1000;
const double diff = 0.0000001;
class bisectonMethode {
    public:
    double function(double x){
        return  x*x*x-x*x+2;
    }
  void getRoot(double a,double b){

    if(function(a)*function(b)>=0){
        cout<<"Wrong value of 'a' & 'b'."<<endl;
        return;
    }
    double root =a;
    while((b-a)>=diff){
        root=(a+b)/2;

        cout<<"Range : "<<a<<" "<<b<<" : "<<"let the root be  "<<root<<endl;


        if(function(root)==0.0){
           break;
        }
        if(function(root)*function(a)<0){
            b=root;
        }
        else{
            a=root;
        }
    }
     cout<<"The root is : "<<root<<endl;

   }
};
int main(){
    bisectonMethode  findRoot;
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
