#include <iostream>
#include <string>

int func(int m, int p) {
	std::string str, str2;
	unsigned int s = m >> p;	
	for (int i = 31; i >= 0; i--)
		str += std::to_string(s >> i & 1);
	for (int i = 0; i<1; i++){
		str2 += std::to_string(s >> i & 1);
		break;	
	}	
	int k = stoi(str2);
	return k;	
}