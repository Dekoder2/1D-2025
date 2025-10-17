#include <iostream>

void task1()
{
    int number;

    std::cout << "Podaj liczbe:\n";
    std::cin >> number;

    if (number > 0)
        std::cout << "Podana liczba jest dodatnia\n";

    if (number < 0)
        std::cout << "Podana liczba jest ujemna\n";
    
    if (number == 0)
        std::cout << "Podana liczba to 0\n";
}

void task2()
{
    int number;
    std::cout << "Podaj liczbę całkowitą:\n";
    std::cin >> number;

    int reminderOfDivision;
    reminderOfDivision = number % 2;

    if (reminderOfDivision == 0)
        std::cout << "Podana liczba jest parzysta\n";

    if (reminderOfDivision != 0)
        std::cout << "Podana liczba jest nieparzysta\n";

    //-------------------------------------------------------------------------------------
    if (reminderOfDivision != 0)
        std::cout << "Podana liczba jest parzysta\n";
    else
        std::cout << "Podana liczba jest nieparzysta\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    task2();
}