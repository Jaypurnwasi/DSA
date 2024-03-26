#include <iostream>
using namespace std;
int main(){

    // check parity of number
    int num = 16;
    if(num&1)
    cout<<"odd"<<endl;

    // check i th bit

    int i=3;
    int mask =1;
    mask = (mask<<i);       // create mask by shifting left i times (0 indexed )
    cout<<(num & mask)<<endl;   // if result is non zero then ith bit is 1 else 0

    // set ith bit to 1

    num = 16;
    i = 3;
    mask =1;
    mask = (mask<<i);
    num =  (num|mask);
    cout<<num<<endl;

    int count =0;
    // count number of on bits
    num = 15;
    while(num>0){
        //num = (num&(num-1));
        if(num&1)
        count++;
        num = (num>>1);
    }
    cout<<count;

    // set ith bit to 0         1111 1011 

    i=2;
    num =15;
    mask = 1;
    mask = (mask<<1);       // 
    mask = ~(mask);
    cout<<endl<<(num&mask);


    return 0;

}