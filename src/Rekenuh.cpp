#include <iostream> 
#include <string>

int optellen(int a, int b)
{
    return a + b;
}

void output(std::string vraaglol)
{
    std::cout << vraaglol;
    std::cout << "\n";
}

int input(std::string vraaglol)
{
    std::cout << vraaglol;
    int getal = 0;
    std::cin >> getal;
    return getal;
}

int main()
{
    std::cout << optellen(3, 5);
    output("Welkom!");
    int hoeveel = input("Hoveel getallen wil je? ");
    int som = 0;
    std::cout << "Geeeef me ";
    std::cout << hoeveel;
    std::cout <<" getallen \n";
    for (int i = 0; i < hoeveel; i = i + 1)
    {
        int getal = 0;
        std::cin >> getal;
        som = (som + getal);
    }
    std::cout << som;
    std::cout << "\n";
    int lol = input("Geef je me je pin code ook maar dan... ");
    output("Dank!");
}