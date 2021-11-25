#include <iostream>
#include <fstream>
#include <string>

struct friends {
    int id;
    std::string friendName;
    
    };
    struct phones {
        int id;
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

    void writToFile() {
        fs.write((char*)&friends, sizeof(friends));
    }
   

int main(){
  std::string path = "friendName.txt";
  fileWork(path);
  path = "phones.txt";
  fileWork(path);
  std::string Name;
  friends f;
  f.id = 1;
  f.friendName = "Vanya";

    

    
}