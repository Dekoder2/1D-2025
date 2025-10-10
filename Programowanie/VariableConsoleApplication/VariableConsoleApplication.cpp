#include <iostream>



//Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsol
void task1()
{
    //wczytanie liczby
        //deklaracja zmiennych          1
        //pobranie liczby
            //informacja co chcemy      2
            //oczekiwanie na liczbê     3
    //wyœwietlenie na konsoli           4

    //1
    int numberFromUser; //number_from_user
    //2
    std::cout << "Podaj liczbê ca³kowit¹:\n";
    //3
    std::cin >> numberFromUser;
    //4
    std::cout << "Poda³eœ " << numberFromUser << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task2()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsz¹ liczbê:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj drug¹ liczbê:\n";
    std::cin >> secondNumber;

    int avg;

    avg = (firstNumber + secondNumber) / 2;

    std::cout << "Wynik œredniej: " << avg << "\n";
}

//Program obliczaj¹cy pole prostok¹ta.
void task3()
{
    int sideA, sideB;

    std::cout << "Aby policzyæ pole prostok¹ta podaj pierwszy bok:\n";
    std::cin >> sideA;

    std::cout << "Podaj drugi bok:\n";
    std::cin >> sideB;

    int avg;

    avg = sideA * sideB;

    std::cout << "Pole prostok¹ta: " << avg << "\n";
}

//Program obliczaj¹cy objêtoœæ sto¿ka
void task4()
{
    int coneHeight, coneBaseRadius;

    std::cout << "Aby policzyæ objêtoœæ sto¿ka podaj wysokoœæ:\n";
    std::cin >> coneHeight;

    std::cout << "Podaj promieñ œrednicy:\n";
    std::cin >> coneBaseRadius;

    int coneVolume;

    coneVolume = (3.14 / 3) * (coneBaseRadius * coneBaseRadius) * coneHeight;

    std::cout << "Objêtoœæ sto¿ka wynosi: " << coneVolume << "\n";
}

//Program obliczaj¹cy pole ko³a.

void task5()
{
    int circleRadius;

    std::cout << "Aby policzyæ pole ko³a podaj promieñ:\n";
    std::cin >> circleRadius;

    int areaOfCircle;

    areaOfCircle = 3.14 * (circleRadius * circleRadius);

    std::cout << "Pole ko³a wynosi: " << areaOfCircle << "\n";
}

//Program obliczaj¹cy wartoœæ wyra¿enia a ^ 2 + b ^ 2

void task6()
{
    int numberA, numberB;

    std::cout << "Podaj liczbê a:\n";
    std::cin >> numberA;

    std::cout << "Podaj liczbê b:\n";
    std::cin >> numberB;
    
    int result;

    result = (numberA * numberA) + (numberB * numberB);

    std::cout << "Wynik wynosi: " << result << "\n";
}

//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h

void task7()
{
    int baseB, h;

    std::cout << "podaj podstawê B :\n";
    std::cin >> baseB;

    std::cout << "Podaj wysokoœæ:\n";
    std::cin >> h;

    float area;

    area = 0.5 * baseB * h;

    std::cout << "Wynik wynosi: " << area << "\n";
}

//Program obliczaj¹cy objêtoœæ kuli o promieniu r

void task8()
{
    int radius;

    std::cout << "podaj promieñ:\n";
    std::cin >> radius;

    float volume;

    volume = 1.3 * 3.14 * radius;

    std::cout << "Wynik wynosi: " << volume << "\n";
}

//Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h

void task9()
{
    int a, b, h;

    std::cout << "Podaj podstawê a:\n";
    std::cin >> a;

    std::cout << "Podaj podstawê b:\n";
    std::cin >> b;

    std::cout << "Podaj wysokoœæ:\n";
    std::cin >> h;

    float areaOfTrapzoid;

    areaOfTrapzoid = (a + b) * h / 2.0;

    std::cout << "Wynik wynosi:" << areaOfTrapzoid << "\n";
}

//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task10()
{
    double x1, x2, x3;

    std::cout << "Podaj pierwsz¹ liczbê:\n";
    std::cin >> x1;

    std::cout << "Podaj drug¹ liczbê:\n";
    std::cin >> x2;

    std::cout << "Podaj trzeci¹:\n";
    std::cin >> x3;

    double w1, w2, w3;

    std::cout << "Podaj wagê pierwszej liczby:\n";
    std::cin >> w1;

    std::cout << "Podaj wagê drugiej liczby:\n";
    std::cin >> w2;

    std::cout << "Podaj wagê trzeciej liczby:\n";
    std::cin >> w3;
    
    double average;

    average = (x1 * w1 + x2 * w2 + x3 * w3) / (w1 + w2 + w3);

    std::cout << "Twoja œrednia to: " << average << "\n";
}

//Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.

void task11()
{
    int lenght;

    std::cout << "Podaj iloœæ w metrach:\n";
    std::cin >> lenght;

    int transformFromMeters;

    transformFromMeters = lenght * 100;

    std::cout << "Wynik w centymetrach " << transformFromMeters << "\n";
    
    std::cout << "Podaj iloœæ w metrach:\n";
    std::cin >> lenght;

    transformFromMeters = lenght * 10000;

    std::cout << "Wynik w milimetrach " << transformFromMeters << "\n";
}

//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

void task12()
{
    float PLN;

    std::cout << "Podaj wartoœæ w z³ na euro:\n";
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

Zmienna - pewien obszar w pamiêci operacyjnej, w której mo¿na
w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów

int - 2 bajtowa lub 4 bajtowa liczba ca³kowita ze znakiem
short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamiêci, identyfikator
Warunki niezbêdne:
* dozwolone znaki:
    - alfabet angielski aA-zZ
    - cyfry arabskie 0-9
    - podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* jeœli wiele s³ów to w miejscu spacji podkreœlenie lub zaczynaj¹c od drugiego
  s³owa piszemy je z du¿ej litery
* piszemy po angielsku
*/;