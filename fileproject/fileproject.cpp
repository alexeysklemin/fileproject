#include <iostream>
#include <fstream>
#include <string>

struct friends {
	    std::string id;
	    std::string friendName;
		void printFriend() {
			std::cout << id << "\t" << friendName << "\t" << std::endl;
		}

	
};
	
struct phones {
	        int id = 0;
	        int idFriend = 0;
	        std::string phone;
	
};

void writeToFile(std::string pathFile, friends, phones){
	std::ofstream Fout;
	friends f;
	phones p;
	std::cin >> f.id >> f.friendName;
	//>> p.id >> p.phone;
	f.id = p.idFriend;
	Fout.open(pathFile);
	Fout.write((char*)&f, sizeof(phones));
	Fout.close();
}

void readFrFile(std::string pathFile, friends, phones) {
	std::ifstream Fin;
	friends f;
	Fin.open(pathFile);
	friends ptr;
	Fin.read((char*)&ptr, sizeof(friends));
	ptr.printFriend();
	Fin.close();

}

void delStringofFile() {

}

int main() {
	friends f;
	phones tel;
	
	std::string path = "friends.txt";
	writeToFile(path, f, tel); //Here We should use structures like datas of dataBase 
	/*path  = "phones.txt";
	writeToFile(path, f, tel);*/
	//path = "friends.txt";
	readFrFile(path, f, tel);
	/*path = "phones.txt";
	readFrFile(path, f, tel);*/

	

}
