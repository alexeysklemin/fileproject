﻿//#include <iostream>
//#include <fstream>
//#include <string>
//
//struct friends {
//    int id;
//    std::string friendName;
//    
//    };
//    struct phones {
//        int id;
//        int idFriend;
//        std::string phone;
//
//
//    };
//    void fileWork(std::string path) {
//        if (true) {
//            std::fstream fs;
//            fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
//            if (!fs.is_open()) {
//                std::ifstream(path);
//
//            }
//    }
//}
//
//    void writToFile() {
//        fs.write((char*)&friends, sizeof(friends));
//    }
//   
//
//int main(){
//  std::string path = "friendName.txt";
//  fileWork(path);
//  path = "phones.txt";
//  fileWork(path);
//  std::string Name;
//  friends f;
//  f.id = 1;
//  f.friendName = "Vanya";
//
//    
//
//    
//}
#include <iostream>
#include <fstream>
#include <string>

struct friends {
	    int id;
	    std::string friendName;
		void inp() {
			std::cin >> id >> friendName;
			
		}
};
	
struct phones {
	        int id = 0;
	        int idFriend = 0;
	        std::string phone = " ";
			void inp() {
				std::cin >> id >> phone;
				std::cin >> phone;
			}
	
};

void writeToFile(std::string pathFile, friends, phones){
	std::ofstream F;
	friends f;
	phones p;

	std::cin >> f.id >> f.friendName >> p.id >> p.phone;
	p.idFriend = f.id;
	write((char*)&phones, size(phones));
	F.open(pathFile);
	F.close();
}

void readFrFile(std::string pathFile, friends, phones) {
	std::ifstream F;
	F.open(pathFile);
	read((char*)&phones, size(phones));
	F.close();

}

void delStringofFile() {

}

int main() {
	friends f;
	phones tel;
	
	std::string path = "friends.txt";
	writeToFile(path, f, tel); //Here We should use structures like datas of dataBase 
	path  = "phones.txt";
	readFrFile(path, f, tel);
	

}
