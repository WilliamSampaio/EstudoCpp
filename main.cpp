#include <iostream>
#include "geometria.h"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];

        if (arg == "retangulo")
        {
            std::cout << areaRetangulo(std::stod(argv[i + 1]), std::stod(argv[i + 2])) << '\n';
        }
        else if (arg == "quadrado")
        {
            std::cout << areaQuadrado(std::stod(argv[i + 1])) << '\n';
        }
        else if (arg == "circulo")
        {
            std::cout << areaCirculo(std::stod(argv[i + 1])) << '\n';
        }
        else
        {
            continue;
        }
    }

    return 0;
}
