/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

template <typename T>
T Add(T a, T b){
    
    return a+b;
}

int main()
{
    cout<<Add(3,4)<<endl;
    cout<<Add(3.3,4.4)<<endl;

    return 0;
}
