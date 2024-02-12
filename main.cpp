#include <iostream>
using namespace std;

void name();

int main()
{
    cout << "Hello World!" << endl;
    void name();
    int i = 0;
    while (i < 5)
    {
        cout << "Meow\n";
        i++;
    }
    return 0;
}
void name()
{
    cout << "My name is Nicholas" << endl;
}