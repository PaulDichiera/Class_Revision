#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char *argv[]){

    std::cout << "Number of arguments: " << argc << std::endl;

    std::string processType = argv[1];
    std::string fileName = argv[2];
    std::string line;

    std::cout << "File name: " << fileName << std::endl;

    std::ifstream file(fileName);

    if(file.is_open()){
        std::cout << "File Open" << std::endl;
            while(std::getline(file, line)){
            std::cout << line << std::endl;
            
        }
    }

    while(std::getline(file, line)){
        std::cout << "here" << std::endl;
        std::cout << line << std::endl;
        
    }

    file.close();

    if(!file.is_open()){
        std::cout << "File Closed" << std::endl;
    }

    return EXIT_SUCCESS;
}