#include <iostream>



//Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsol
void task1()
{
    //wczytanie liczby
        //deklaracja zmiennych          1
        //pobranie liczby
            //informacja co chcemy      2
            //oczekiwanie na liczb�     3
    //wy�wietlenie na konsoli           4

    //1
    int numberFromUser; //number_from_user
    //2
    std::cout << "Podaj liczb� ca�kowit�:\n";
    //3
    std::cin >> numberFromUser;
    //4
    std::cout << "Poda�e� " << numberFromUser << "\n";
}

//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
void task2()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsz� liczb�:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj drug� liczb�:\n";
    std::cin >> secondNumber;

    int avg;

    avg = (firstNumber + secondNumber) / 2;

    std::cout << "Wynik �redniej: " << avg << "\n";
}

//Program obliczaj�cy pole prostok�ta.
void task3()
{
    int sideA, sideB;

    std::cout << "Aby policzy� pole prostok�ta podaj pierwszy bok:\n";
    std::cin >> sideA;

    std::cout << "Podaj drugi bok:\n";
    std::cin >> sideB;

    int avg;

    avg = sideA * sideB;

    std::cout << "Pole prostok�ta: " << avg << "\n";
}

//Program obliczaj�cy obj�to�� sto�ka
void task4()
{
    int coneHeight, coneBaseRadius;

    std::cout << "Aby policzy� obj�to�� sto�ka podaj wysoko��:\n";
    std::cin >> coneHeight;

    std::cout << "Podaj promie� �rednicy:\n";
    std::cin >> coneBaseRadius;

    int coneVolume;

    coneVolume = (3.14 / 3) * (coneBaseRadius * coneBaseRadius) * coneHeight;

    std::cout << "Obj�to�� sto�ka wynosi: " << coneVolume << "\n";
}

//Program obliczaj�cy pole ko�a.

void task5()
{
    int circleRadius;

    std::cout << "Aby policzy� pole ko�a podaj promie�:\n";
    std::cin >> circleRadius;

    int areaOfCircle;

    areaOfCircle = 3.14 * (circleRadius * circleRadius);

    std::cout << "Pole ko�a wynosi: " << areaOfCircle << "\n";
}

//Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2

void task6()
{
    int numberA, numberB;

    std::cout << "Podaj liczb� a:\n";
    std::cin >> numberA;

    std::cout << "Podaj liczb� b:\n";
    std::cin >> numberB;
    
    int result;

    result = (numberA * numberA) + (numberB * numberB);

    std::cout << "Wynik wynosi: " << result << "\n";
}

//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h

void task7()
{
    int baseB, h;

    std::cout << "podaj podstaw� B :\n";
    std::cin >> baseB;

    std::cout << "Podaj wysoko��:\n";
    std::cin >> h;

    float area;

    area = 0.5 * baseB * h;

    std::cout << "Wynik wynosi: " << area << "\n";
}

//Program obliczaj�cy obj�to�� kuli o promieniu r

void task8()
{
    int radius;

    std::cout << "podaj promie�:\n";
    std::cin >> radius;

    float volume;

    volume = 1.3 * 3.14 * radius;

    std::cout << "Wynik wynosi: " << volume << "\n";
}

//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h

void task9()
{
    int a, b, h;

    std::cout << "Podaj podstaw� a:\n";
    std::cin >> a;

    std::cout << "Podaj podstaw� b:\n";
    std::cin >> b;

    std::cout << "Podaj wysoko��:\n";
    std::cin >> h;

    float areaOfTrapzoid;

    areaOfTrapzoid = (a + b) * h / 2.0;

    std::cout << "Wynik wynosi:" << areaOfTrapzoid << "\n";
}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task10()
{
    double x1, x2, x3;

    std::cout << "Podaj pierwsz� liczb�:\n";
    std::cin >> x1;

    std::cout << "Podaj drug� liczb�:\n";
    std::cin >> x2;

    std::cout << "Podaj trzeci�:\n";
    std::cin >> x3;

    double w1, w2, w3;

    std::cout << "Podaj wag� pierwszej liczby:\n";
    std::cin >> w1;

    std::cout << "Podaj wag� drugiej liczby:\n";
    std::cin >> w2;

    std::cout << "Podaj wag� trzeciej liczby:\n";
    std::cin >> w3;
    
    double average;

    average = (x1 * w1 + x2 * w2 + x3 * w3) / (w1 + w2 + w3);

    std::cout << "Twoja �rednia to: " << average << "\n";
}

//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.

void task11()
{
    int lenght;

    std::cout << "Podaj ilo�� w metrach:\n";
    std::cin >> lenght;

    int transformFromMeters;

    transformFromMeters = lenght * 100;

    std::cout << "Wynik w centymetrach " << transformFromMeters << "\n";
    
    std::cout << "Podaj ilo�� w metrach:\n";
    std::cin >> lenght;

    transformFromMeters = lenght * 10000;

    std::cout << "Wynik w milimetrach " << transformFromMeters << "\n";
}

//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

void task12()
{
    float PLN;

    std::cout << "Podaj warto�� w z� na euro:\n";
    std::cin >> PLN;

    float exchange;

    exchange = PLN * 4.26;

    std::cout << "Twoja kwota w euro: " << exchange << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task10();
}


/*

Zmienna - pewien obszar w pami�ci operacyjnej, w kt�rej mo�na
w danej chwili przechowa� tylko jedn� dan�.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielko�� obszaru pami�ci, interpretacja ci�gu bit�w

int - 2 bajtowa lub 4 bajtowa liczba ca�kowita ze znakiem
short - 2 bajtowa liczba ca�kowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba ca�kowita ze znakiem <-2 147 483 648, 2 147 483 647>
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok�adno�� 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok�adno�� 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok�adno�� 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pami�ci, identyfikator
Warunki niezb�dne:
* dozwolone znaki:
    - alfabet angielski aA-zZ
    - cyfry arabskie 0-9
    - podkre�lenie (pod�oga) _
* pierwszym znakiem nie mo�e by� cyfra
* unikalny w swoim zakresie widoczno�ci
* nie mo�e to by� s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w:
* nazwa zmiennej powinna oddawa� charakter przechowywanych danych
* je�li wiele s��w to w miejscu spacji podkre�lenie lub zaczynaj�c od drugiego
  s�owa piszemy je z du�ej litery
* piszemy po angielsku
*/;