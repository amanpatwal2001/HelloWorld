#include <iostream>
using namespace std;


void print_num()
{
    int i = 1;
    count:
    cout<<i<<" ";
    i++;
    if (i<=50)
    goto count;
    
}
int main(){
    print_num();
    return 0;
}