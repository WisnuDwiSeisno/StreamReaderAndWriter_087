#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis
	ofstream outfile;
	// menunjukan ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis File, \'q'\ untuk keluar" << endl;
}