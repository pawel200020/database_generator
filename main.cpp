#include <iostream>
#include <fstream>

int main() {
    std::fstream names;
    std::fstream address;
    std::fstream outfile;
    names.open("names.txt", std::ios::in);
    address.open("address.txt", std::ios::in);
    outfile.open("out.txt",std::ios::out);
    while (!names.eof()) {
        std::string name;
        std::string last_name;
        std::string address;

    }
    names.close();
    address.close();
    outfile.close();
    return 0;
}
