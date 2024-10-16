#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    vector<string> msg {
        "\033[31mHello",  // Red
        "\033[32mC++",    // Green
        "\033[34mWorld",  // Blue
        "\033[33mfrom",   // Yellow
        "\033[35mByteBigBoss!"  // Magenta
    };

    for (const string & word: msg)
    {
        cout << word << " ";
    }

    cout << "\033[0m" << endl;  // Reset color to default
}
