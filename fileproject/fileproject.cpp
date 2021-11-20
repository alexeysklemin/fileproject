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
    void fileWork(std::string path) {
        if (true) {
            std::fstream fs;
            fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
            if (!fs.is_open()) {
                std::ifstream(path);

            }
    }
}
    std::string inputDatas(struct friends, struct phones) {
        std::cin >> friends.id;
        std::cin >> friends.friendName;
        std::cin >> phones.id;
        std::cin >> phones.phone;
        phones.id = friends.id;



    }

int main(){
  std::string path = "friendName.txt";
  fileWork(path);
  path = "phones.txt";
  fileWork(path);
  inputDatas(friends, phones);
    

    
}