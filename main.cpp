#include <iostream>


int main (int argc, char** argv) {
	
    
    if (argc > 1){
	std::cout << "Holi" << argv[1] << "!" << std::endl;

    }
    else{
	std::cout << "introduce un nombre como parametro" << std::endl;
    }

    return 0;
}
