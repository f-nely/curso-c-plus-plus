#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name[] = "How are you? ";
    char namePerson[20];
    char nameConcatenar[30];

    cout << "Informe o nome: ", cin >> namePerson;

    strcpy(nameConcatenar, name); // nameConcatenar = name
    strcat(nameConcatenar, namePerson);

    cout << nameConcatenar << endl;

    return 0;
}
