#include <string> 
#include <fstream> 
#include <iostream> 
  
int 				main(int ac, char** av) { 
	std::string 	line;
	if(ac < 1 || ! av[1]) {
		while (42){
        	std::cin.clear();
			std::cin.sync();
			std::getline(std::cin,line);
            std::cout << line << std::endl; 
		}
		return (0);
	} else {
		std::ifstream file(av[1]); 
    	if ( file ) { 
        	while ( std::getline(file,line))  
	            std::cout << line << std::endl;
        } 
    } 
}
