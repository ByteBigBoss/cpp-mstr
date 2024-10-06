#include <iostream>
using namespace std;

// ENCAPSULATION-START //
class Car
{
private:
    string brand;
    int year;

public:
    Car(string b, int y) : brand(b), year(y) {}

    void showCar()
    {
        cout << "Your Car Is: "
             << "{ Brand: " << brand << " & " << "Year: " << year << " }";
    }
};
// ENCAPSULATION-END //


int main()
{
    string brand;
    int year;

    cout << "Enter car brand: ";
    cin >> brand;

    cout << "Enter car manufacture year: ";
    cin >> year;

    Car myCar(brand, year);
    myCar.showCar();
    return 0;
}