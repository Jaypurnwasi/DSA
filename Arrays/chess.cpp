/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char a[9][9];
    int i,j;
    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){
            if((i%2==1&&j%2==0)||i%2==0&&j%2==1)
            a[i][j]='b';
            else
            a[i][j] ='w';
            }
    }
    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){
            cout<<a[i][j]<<" ";}
            cout<<endl;
    }
    
    
    return 0;
}