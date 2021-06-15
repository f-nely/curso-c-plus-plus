#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name[] = "Steve";
    char nameCopy[20];

    strcpy(nameCopy, name);
    cout << nameCopy << "\t" << name << "\n";

    return 0;
}
