#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    std::fstream fs;
    
    fs.open("/tmp/file");
    if (!fs.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        exit(1);
    }

    fs << "Hello, World!\n";
    fs.close();

    return 0;
}
