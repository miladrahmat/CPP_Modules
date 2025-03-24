/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:47:29 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/24 17:17:01 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	read_replace(char **av, std::ifstream *infile, std::ofstream *outfile)
{
	std::string	toFind;
	std::string	toReplace;
	std::string	fileBuf;
	std::string	replacedLine;
	size_t		found;
	size_t		startIndex;

	toFind = av[2];
	toReplace = av[3];
	while (std::getline(*infile, fileBuf))
	{
		replacedLine.clear();
		startIndex = 0;
		found = fileBuf.find(toFind);
		if (found != std::string::npos)
		{
			while (found != std::string::npos)
			{
				replacedLine.append(fileBuf, startIndex, found - startIndex);
				replacedLine += toReplace;
				startIndex = found + toFind.length();
				found = fileBuf.find(toFind, startIndex);
				if (found == std::string::npos)
					replacedLine.append(fileBuf, startIndex, fileBuf.length());
			}
		}
		else
			replacedLine = fileBuf;
		*outfile << replacedLine << std::endl;
	}
}

int main(int ac, char **av)
{
	std::string		inFilename;
	std::string		outFilename;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (ac != 4)
		return (std::cerr << "Invalid number of arguments (3 needed)" << std::endl, 1);
	else if ((std::string)av[2] == "") 
		return (std::cerr << "Invalid argument (nothing to replace)" << std::endl, 1);
	inFilename = av[1];
	outFilename = inFilename + ".replace";
	infile.open(inFilename, std::fstream::in);
	if (!infile)
		return (std::cerr << "Failed to open files" << std::endl, 1);
	outfile.open(outFilename, std::fstream::out);
	read_replace(av, &infile, &outfile);
	infile.close();
	outfile.close();
	return (0);
}
