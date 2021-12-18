#include <iostream>
#include <fstream>
#include <string>

struct friends {
	    int id =0;
	    std::string friendName;
	
};
	
struct phones {
	        int id = 0;
	        int idFriend = 0;
	        std::string phone;
	
};

void writeToFile(std::string pathFile, friends, phones){
	std::ofstream F;
	friends f;
	phones p;
	std::cin >> f.id >> f.friendName >> p.id >> p.phone;
	p.idFriend = f.id;
	F.open(pathFile);
	F.write((char*)&f, sizeof(phones));
	F.close();
}

void readFrFile(std::string pathFile, friends, phones) {
	std::ifstream F;
	F.open(pathFile);
	phones ptr;
	F.read((char*)&ptr, sizeof(phones));
	std::cout << (char*)&ptr << "\t";
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
	writeToFile(path, f, tel);
	path = "friends.txt";
	readFrFile(path, f, tel);
	path = "phones.txt";
	readFrFile(path, f, tel);

	

}
