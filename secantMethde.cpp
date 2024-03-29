#include<bits/stdc++.h>

using namespace std;
const double dif =0.001;
class secantMethode{
    public:
    double function(double x){
        return x*x*x+x*x-2;
    }
    
    double getRoot(double x1,double x2){
        double root;
        while(abs(x1-x2)>dif){
            root=(x1*function(x2)-x2*function(x1))/function(x2)-function(x1);
            cout<<root<<endl;
            x1=x2;
            x2=root;
        }
        return root;
    }

};
int main(){
    secantMethode findRoot;
    double x1= rand();
    double x2=rand();
    double ans=findRoot.getRoot(x1,x2);
      cout<<ans<<endl;
    return 0;

}