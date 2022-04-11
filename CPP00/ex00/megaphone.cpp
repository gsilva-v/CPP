#include <iostream>
#include <cstring>

using namespace std;
 
int main(int argc, char **argv)
{
	string buffer;
	
	if (argc < 2){
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	for (int x = 1; argv[x]; x++){
		for (int y = 0; argv[x][y]; y++){
			buffer += toupper(argv[x][y]);//concatena com oq ja tem na string
		}
	}
	cout << buffer << endl;
    return 0;
}
