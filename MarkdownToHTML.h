#ifndef MARKDOWNTOHTML
#define MARKDOWNTOHTML

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>

class MarkdownToHtml
{
private:
	std::vector<std::string> str_md;
	std::vector<std::string> str_html;
public:
	MarkdownToHtml(std::ifstream &infile);
	void initialize();
	void convertTitle1();
	


};

#endif // !MARKDOWNTOHTML