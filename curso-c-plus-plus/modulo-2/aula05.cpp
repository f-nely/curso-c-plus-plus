#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // strcat - concatena cadeias
    char gretting[] = "Good afternoon ";
    char name[] = ",Leonardo!";
    char result[40];

    strcpy(result, gretting); // copia conteúdo
    strcat(result, name);
    cout << result << endl;

    return 0;
}
