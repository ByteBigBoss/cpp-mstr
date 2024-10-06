#include <iostream>
#include <vector>

using namespace std;

void test_for_loop()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "FOR LOOP: Iteration: " << i << endl;
    }
}

void test_while_loop()
{
    int i = 0;
    while (i < 5)
    {
        cout << "WHILE: Iteration: " << i << endl;
        i++;
    }
}

void test_do_while_loop()
{
    int i = 0;
    do
    {
        cout << "DO-WHILE: Iteration: " << i << endl;
        i++;
    } while (i < 5);
}

void test_range_based_for_loop()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    for (int num: numbers)
    {
        cout << "RANGE: Iteration: " << num << endl;
    }
}

void test_break_continue()
{
    for(int i = 0; i< 10; i++)
    {
        if(i ==5)
        {   
            continue; //SKIP THE REST OF THE LOOP WHEN i IS 5
        }
        if(i==8)
        {
            break; //EXIT THE LOOP WHEN i IS 8
        }
        cout << "Loop: " << i << endl;
    }
}

int main()
{
    test_for_loop();
    test_while_loop();
    test_do_while_loop();
    test_range_based_for_loop();
    test_break_continue();

    return 0;
}