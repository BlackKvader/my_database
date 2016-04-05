/*

	data class

*/

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

#define max_category 100
#define max_keywords 30

using namespace std;

class Tdata{
public:
	string C[max_category];  // category
	string T; // title
	string K[max_keywords]; // keywords
	string Q; // otazka
	string A; // answer / data
};