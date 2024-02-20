#include <iostream>
#include "glass.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Glass glass(25.6);
    cout<<glass.getVolume();
    return 0;
}
