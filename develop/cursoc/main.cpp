#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){

	ifstream inFile;
	inFile.open("prog8Data.txt");

	char next = 'a';

	do
	{
		
		while(next != '\n')
		{
			inFile.get(next);
			cout << next;	
		}
		next = '1'; //I put this is so next isn't the newline char and will continue

	}
	while(!inFile.eof());

	inFile.close();
	system("pause");
	return 0;
}
