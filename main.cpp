/*
	databaza

	forma:
	subor sa vola hocijako.dat
	C: category
	T: title
	K: keywords
	Q: otazka
	A: answer / data

	

*/

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

#include "classes.hpp"

#define ss_clr() {ss.str(""); ss.clear();}
#define my_open(xx) {if (xx.is_open()) {xx.close();}; s=ss.str(); xx.open(s.c_str());}

using namespace std;

// global variables
stringstream ss;
string line;
string s;
ifstream infile;
ofstream outfile;

int main()
{
	/// make list of all files in data/ to list.dat
	system("cd data/; ls *.dat > list.dat");
	
	ss_clr(); ss << "./list.dat";
	my_open(infile);

	stringstream ss2;
	ss2.clear(); ss2.str("");
	while(getline(infile,line)){
		ss2 << line << "\n"; 
	}
	s = ss2.str();

	cout << s;

	return 0;
}