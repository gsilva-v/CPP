#include <string>
#include <fstream>
#include <iostream>

int	main(int argc, char **argv){
	std::string buffer;
	std::string s1;
	std::string s2;
	std::string file_name;
	
	if (argc != 4)
		return (0);
	file_name = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	std::ifstream file_in(file_name.c_str());
	file_name.append(".replace");
	std::ofstream file_out(file_name.c_str());

	if(file_in.is_open()){
		while (std::getline(file_in, buffer)){
			buffer.append("\n");
			for (int i = 0; buffer.c_str()[i]; i++){
				if (!buffer.compare(i, s1.size(), s1)){
					std::string tmp = &buffer[i + s1.size()];
					buffer.erase(i, -1);
					buffer.append(s2);
					buffer.append(tmp);
				}
			}
			file_out << buffer;
		}
	}
	return (0);
}