#include <iostream>


int main() {
    double temp;
    char unit;

    std::cout << "************************ TEMPRATURE CONVERTER *****************************\n";

    std::cout << "C = Celsius\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "What Unit Would you like to convert to?: ";
    std::cin >> unit;

    if(unit == 'C' || unit == 'c') {
        std::cout << "Enter the temprature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.0;
        std::cout << "Temprature is " << temp << " C\n";
    } else if(unit == 'F' || unit == 'f') {
        std::cout << "Enter the temprature in Celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temprature is " << temp << " F\n";
    } else {
        std::cout << "Please Enter C or F\n";
    }


    std::cout << "******************************************************************";




    std::cin.get();
    std::cin.get();
    std::cin.get();
    std::cin.get();
    std::cin.get();
    std::cin.get();

    
    return 0;
}
