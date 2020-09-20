#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;

    for(i=0 ; i<=100 ; i++){
        srand(i);
        cout<<"\n"<<rand();
    }

    return 0;
}
