#include <iostream>

#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2)
    {
        std::cerr << "usage: cpu <string>" << std::endl;
        exit(1);
    }

    std::string usr_str = argv[1];
    while (1)
    {
        Spin(1);
        std::cout << usr_str << std::endl;
    }

    return 0;
}
