

#include <iostream>

int main()
{
    int Aristotel;
    int Pitagor;
    int *pAristotel;
    
    
    printf("Aristotel: ");
    std::cin >> Aristotel;
    printf("Pitagore: ");
    std::cin >> Pitagor;
    pAristotel = &Aristotel;

    if (Pitagor > Aristotel)
    {
        return 0;
    }
    else
    {
        std::cout << &Pitagor;
        printf("\nAristotel = %d on memory address %p\nPitagore is on addr: %p\n", Aristotel, pAristotel,&Pitagor);
    };
};
