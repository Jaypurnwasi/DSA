#include <iostream>
using namespace std;

int fact(int n){

    if(n==0)
    return 1;

    //int ans = fact(n-1);

    return n*fact(n-1);

}


int main(){

int ans = fact(5);
cout<<endl<<ans<<endl;



    return 0;
}