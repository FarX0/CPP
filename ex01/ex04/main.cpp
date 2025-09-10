/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:13:09 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/05 11:36:09 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2) {
	if (s1.empty())
		return content;
	std::string result = content;
	size_t pos = 0;
	while ((pos = result.find(s1, pos)) != std::string::npos) 
	{
		result = result.substr(0, pos) + s2 + result.substr(pos + s1.length());
		pos += s2.length();
	}
	return result;
}

int main(int argc, char* argv[]) 
{
	if (argc != 4) 
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
		return 1;
	}
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) 
	{
		std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
		return 1;
	}
	std::string content;
	std::string line;
	while (std::getline(inputFile, line))
	{
		content += line;
		if (!inputFile.eof())
			content += "\n";
	}
	inputFile.close();
	std::string replacedContent = replaceAll(content, s1, s2);
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Could not create file '" << outputFilename << "'" << std::endl;
		return 1;
	}
	outputFile << replacedContent;
	outputFile.close();
	std::cout << "Successfully created '" << outputFilename << "' with replacements" << std::endl;
	return 0;
}
