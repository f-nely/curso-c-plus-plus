#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name[] = "840.53";
    float number;

    number = atof(name);
    cout << number << "\n";
    /*
     * atoi - tipo int
    char name[] = "3030";
    int number;

    number = atoi(name);

    cout << number << "\n";*/

    return 0;
}
