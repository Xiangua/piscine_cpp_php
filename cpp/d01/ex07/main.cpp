#include <iostream>
#include <fstream>
#include <sstream>

int				main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "3 arguments needed" << ac << std::endl;
		return 1;
	}
	std::fstream 		in(av[1]);
	std::string 		line;
	std::stringstream	out;
	std::string wordToReplace(av[2]);
	std::string wordToReplaceWith(av[3]);
	size_t found, i;
	i = 0;
	if (!in)
	{
		std::cerr << "Could not open " << av[1] << "\n";
		return 1;
	}

	while (!in.eof() & !in.bad() && !in.fail()) {
		out << (char)in.get();
	}
	std::string t = out.str();
	while (true) {
		found = t.find(wordToReplace, i);
		if (found != std::string::npos) {
			t.replace(found, wordToReplace.size(), wordToReplaceWith.c_str());
			i = found + wordToReplaceWith.size();
		}
		else
			break ;
	}
	if (t.size() > 0) {
		t.resize(t.size() - 1);
	}
	std::cout << t << std::endl;
	in.close();
	std::ofstream end(av[1]);
	end << t;
	end.close();
	return 0;
}
