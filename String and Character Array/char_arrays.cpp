#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = {'a', 'b', 'c', '\0'};     // null character makes the string valid

    char str1[] = {"Hello"};     // string literals (fixed)

    cout << strlen(str1) << endl;
    cout << str1[2] << endl;

    // char name[100];
    // cout << "Enter some name: ";
    // cin.getline(name, 100, '$');
    // cout << name;

    for(char ch : str)
    {
        cout << ch << "  ";
    }
    cout << endl;

    char uni[] = {"University Of Engineering And Technology Lahore"};
    int length = 0;
    for(int i = 0; uni[i] != '\0'; i++)
    {
        length++;
    }
    cout << length;

    return 0;
}

/*

char str[] = {'a', 'b', 'c', '\0'};

a = 1 byte  
b = 1 byte
c = 1 byte
/0 = 1 byte (null character in memory)

int num[] = {1, 2, 3};
cout << num;        // print address

cout  << str;       // print array // constant pointer

*/