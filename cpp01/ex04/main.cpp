/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:00:57 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 16:57:03 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void copy_line(std::ifstream *infile, std::ofstream *outfile, std::string s1, std::string s2) 
{
	std::string line;
	size_t pos;
	
	while(getline(*infile, line))
	{
		pos = line.find(s1, 0);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
			pos = line.find(s1, pos);
		}
		*outfile << line << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream infile;
		std::ofstream outfile;
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		
		if (s1.empty() || s2.empty())
		{
			std::cout << "ERROR: EMPTY ARG" << std::endl;
			return (1);
		}
		infile.open(filename);
		if (!infile.is_open())
		{
			std::cout << "ERROR: WRONG FILE" << std::endl;
			return (1);
		}
		filename.clear();
		for (int i = 0; argv[1][i]; i++)
			filename.push_back((char)toupper(argv[1][i]));
		outfile.open(filename + ".replace");
		copy_line(&infile, &outfile, s1, s2);
	}
	else
		std::cout << "ERROR: ARG NEEDED : filename, string 1, string 2" << std::endl;
	return (0);
}
