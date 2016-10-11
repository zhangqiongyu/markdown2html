#include "MarkdownToHTML.h"
using namespace std;

int main()
{
	ifstream infile("markdown.md");
	MarkdownToHTML mark(infile);
	//mark.convertTitle1();

	return 0;
}
