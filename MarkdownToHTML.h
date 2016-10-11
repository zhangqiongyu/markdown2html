#ifndef MARKDOWNTOHTML
#define MARKDOWNTOHTML

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>

class MarkdownToHTML
{
private:
	std::vector<std::string> str_md;
	std::vector<std::string> str_html;
public:
	MarkdownToHTML(std::ifstream &infile);
	void initialize();
	void convertTitle1();
	


};

#endif // !MARKDOWNTOHTML
