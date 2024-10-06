#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    vector<string> msg {
        "Hello",
        "C++",
        "World",
        "from",
        "ByteBigBoss!"
    };

    for (const string & word: msg)
    {
        cout << word << " ";
    }
    cout << endl;
}