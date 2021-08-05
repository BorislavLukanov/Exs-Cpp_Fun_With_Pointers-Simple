

#include <iostream>

int main()
{
    int Aristotel;
    int Pitagor;
    int *pAristotel;
    
    std::cout << "Give values to Aristotel and Pitagor\n";
    printf("Aristotel: ");
    std::cin >> Aristotel;
    printf("Pitagore: ");
    std::cin >> Pitagor;
    pAristotel = &Aristotel;

    if (Pitagor > Aristotel)
    {
        std::cout << "\nThere is nothing Potegorean in the political decision,\nif you don't respect the siplle rule,\ndon't extend your stolen hand!\n";
        return 0;
    }
    else
    {
        std::cout << &Pitagor;
        printf("\nAristotel = %d on memory address %p\nPitagore is on addr: %p\n", Aristotel, pAristotel,&Pitagor);
    };
};
