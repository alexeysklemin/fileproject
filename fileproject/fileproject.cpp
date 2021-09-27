#include <iostream>
#include <fstream>
#include <string>

struct friends {
    short id;
    std::string friendName;
    
    };
    struct phones {
        short id;
        int idFriend;
        std::string phone;


    };

int main(){
    std::ifstream file;
    if (!file.is_open()) {
        file.open("friends.txt", std::ios::out);
        file.open("phones.txt", std::ios::out);
    }
    

    
}