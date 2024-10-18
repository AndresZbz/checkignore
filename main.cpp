#include <iostream>
#include <fstream>
#include <string>

void file_reader(std::string path, std::string filename) {
    std::ifstream myfile;
    std::string content;
    myfile.open(path);
    bool file_found = false;

    if(myfile.is_open()) {
        while(std::getline(myfile, content)) {
            if(content == filename) {
                std::cout << "file found on gitignore!\n";
                file_found = true;
                break;
            } 
        }

        if(!file_found) {
            std::cout << "The file was not found.\n";
        }
    } else {
        std::cout << "Unable to open the file\n";
    }
}

int main(int argc, char** argv) {
    std::string path = argv[1];
    std::string content = argv[2];

    file_reader(path, content);

    return 0;
}