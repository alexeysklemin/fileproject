#include <iostream>
#include <fstream>
#include <string>

struct friends {
	    int id = 0;
	    std::string friendName;
		void printFriend() {
			std::cout << id << "\t" << friendName << "\t" << std::endl;
		}
		void delString() {
			std::ifstream fin;
			fin.open("friends.txt");
			
			
			while (!EOF) {
				if (id == 2) {
					std::cout << id << "\t" << friendName << "\t" << std::endl;
				}
			}
			fin.close();
		}/

	
};
	
struct phones {
	        int id = 0;
	        int idFriend = 0;
	        std::string phone;
			void printPhones() {
			std::cout << id << "\t" << phone << "\t" << std::endl;
			}
	
};

void inputDatas() {
	friends f;
	phones p;
	
	std::cin >> f.id >> f.friendName >> p.id >> p.phone;
	
	p.idFriend = f.id;

}

void writeToFriends(std::string pathFile, friends) {
	std::ofstream Fout;
	friends f;
	Fout.open(pathFile);
	Fout.write((char*)&f, sizeof(friends));
	Fout.close();
	
}

void writeToPhones(std::string pathFile, phones) {
	std::ofstream Fout;
	phones p;
	Fout.open(pathFile);
	Fout.write((char*)&p, sizeof(phones));
}

void readFrFriends(std::string pathFile, friends) {
	std::ifstream Fin;
	friends f;
	Fin.open(pathFile);
	friends ptr;
	Fin.read((char*)&ptr, sizeof(friends));
	ptr.printFriend();
	Fin.close();
	

}

void readFrPhones(std::string pathFile, phones) {
	std::ifstream Fin;
	phones p;
	Fin.open(pathFile);
	phones phonePtr;
	Fin.read((char*)&phonePtr, sizeof(phones));
	phonePtr.printPhones();
	Fin.close();

}

void MunipWithDatas() {
	friends f;
	phones tel;
	inputDatas();
	std::string path = "friends.txt";
	writeToFriends(path, f); //Here We should use structures like datas of dataBase 
	path  = "phones.txt";
	writeToPhones(path, tel);
	path = "friends.txt";
	readFrFriends(path, f);
	path = "phones.txt";
	readFrPhones(path, tel);
}

void delStringofFile(std::string deleteId, std::string path, phones) {
	std::string line;

	std::ifstream fin;
	fin.open(path);
	
	std::cout << "Input index to remove [0 based index]: "; //input line to remove
	

	while (std::getline(fin, line))
	{
		line.replace(line.find(deleteId), deleteId.length(), "");
		
	}

	
	fin.close();
	remove("cottage.txt");
	rename("temp.txt", "cottage.txt");
}

int main() {
	

	

}
