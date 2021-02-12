#include <iostream>
#include <fstream>

int main() {
    char *position[] = {
            "management", "media", "driver", "clean_service"
    };
    std::fstream names;
    std::fstream address;
    std::fstream outfile;
    names.open("names.txt", std::ios::in);
    address.open("address.txt", std::ios::in);
    outfile.open("out.txt", std::ios::out);
    int iterator = 0;
    while (!names.eof()) {
        std::string name;
        std::string last_name;
        std::string address1;
        names >> name;
        names >> last_name;
        std::getline(address, address1);
        if (iterator <= 3) {
            outfile << "(N'" << name << "', N'" << last_name << "', N'" << address1 << "', '" << position[0]
                    << "', 1, NULL),"
                    << std::endl;
        } else if (iterator <= 3 + 5) {
            outfile << "(N'" << name << "', N'" << last_name << "', N'" << address1 << "', '" << position[1]
                    << "', 1, NULL),"
                    << std::endl;
        } else if (iterator <= 3 + 5 + 5) {
            outfile << "(N'" << name << "', N'" << last_name << "', N'" << address1 << "', '" << position[3]
                    << "', 1, NULL),"
                    << std::endl;
        } else {
            outfile << "(N'" << name << "', N'" << last_name << "', N'" << address1 << "', '" << position[2]
                    << "', 1, NULL),"
                    << std::endl;
        }
        iterator++;
    }
    names.close();
    address.close();
    outfile.close();
    return 0;
}
