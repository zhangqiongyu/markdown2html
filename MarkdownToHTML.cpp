#include "MarkdownToHTML.h"
using namespace std;

MarkdownToHtml::MarkdownToHtml(ifstream &infile)
{
	if (!infile)
	{
		cerr<<"Error opening file.";
		exit(EXIT_FAILURE);
	}
	string temp;
	while(getline(infile, temp))
		str_md.push_back(temp);
	str_html.resize(str_md.size());
	for (int i = 0; i < str_md.size(); i++)
		cout << str_md[i] << endl;
}

//void MarkdownToHtml::convertTitle1()
//{
//	for (int i = 0; i < str_md.size(); i++)
//	{
//		if (str_md[i][0] == '#')
//			str_html[i] = str_md[i] - str("#");
//	}
//		for (int j = 0; j < str[i].length();j++)
//	{
//		if
//	}
//	
//}