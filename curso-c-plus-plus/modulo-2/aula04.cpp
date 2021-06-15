#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // função strcmp
    char course[] = "PHP";
    char course2[] = "php";

    if (strcmp(course, course2) == 0) {
        cout << "Palavras iguais: " << "\n";
    } else {
        cout << course << " é diferente de " << course2 << "\n";
    }

    return 0;
}
