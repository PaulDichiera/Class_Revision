#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int countLines(std::fstream& file);
int countCharacters(std::fstream& file);
int countWords(std::fstream& file);

int main(int argc, char *argv[]){

    std::cout << "Number of arguments: " << argc << std::endl;

    std::string processSelect = argv[1];
    std::string filename = argv[2];
    std::fstream file(filename);

    if(processSelect == "-l"){
        int lines = countLines(file);
        std::cout << std::endl;
        std::cout << "** Line count: " << lines << " ** " << std::endl; 
        std::cout << std::endl;
    }else if(processSelect == "-c"){
        int characters = countCharacters(file);
        std::cout << std::endl;
        std::cout << "** Character count: " << characters << " **" << std::endl;
        std::cout << std::endl;
    }else if(processSelect == "-w"){
        int words = countWords(file);
        std::cout << std::endl;
        std::cout << "** Word count: " << words << " **" << std::endl;
        std::cout << std::endl;
    
    }else{
        std::cout << "** Process input invalid or missing **" << std::endl;
    }

      file.close();

      if(!file.is_open()){
        std::cout << "File Closed" << std::endl;
    }

    return EXIT_SUCCESS;
}

int countLines(std::fstream& file){
    int count = 0;

    std::string line;

    if(file.is_open()){
        std::cout << "File Open" << std::endl;
            while(std::getline(file, line)){
            std::cout << line << std::endl;     
            count++;  
        }
    }

    return count;
}

int countCharacters(std::fstream& file){
    int count = 0;
    std::string line;

    if(file.is_open()){
        while(std::getline(file, line)){
            std::cout << line << std::endl;
            count = count + line.length();
        }
    }

    return count;
}

int countWords(std::fstream& file){
    
    int count = 0;
    std::string line;

    if(file.is_open()){
        while(std::getline(file, line)){
            std::cout << line << std::endl;
            std::istringstream lineStream(line);
            std::string word;

            while(lineStream >> word) {
                count++;
            }

        }
    }
    return count;
}