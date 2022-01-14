#include <string>
#include <iostream>
#include <fstream>

int	check_av(int ac, char **av)
{
	(void)av;
	if (ac < 4 || av[2][0] == 0 || av[3][0] == 0){
		std::cout << "Please enter a filename and 2 strings not empty"
			<< std::endl;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	first = 1;
	std::string line;
	std::string newline;
	std::size_t found = 0;

	if (check_av(ac, av) == 1)
		return (1);
	std::ifstream oldfile(av[1]);
	if (!(oldfile.is_open()))
	{
		std::cout << "Unable to open " << av[1] << std::endl;
		return (1);
	}
	std::string filename (av[1]);
	filename.append(".replace");
	std::ofstream newfile;
	newfile.open (filename);
	std::string toBeReplace(av[2]);
	std::size_t len = toBeReplace.length();
	while (getline(oldfile, line)){
		if (first == 0)
			newfile << std::endl;
		else
			first = 0;
		found = line.find(av[2]);
		while ( found != std::string::npos ){
			newfile << line.substr(0, found);
			line = line.substr(found + len);
			newfile << av[3];
			found = line.find(av[2]);
		}
		newfile << line;
	}
	return (0);
}
