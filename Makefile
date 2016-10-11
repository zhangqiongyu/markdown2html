objects=main.o MarkdownToHTML.o
md2html:$(objects)
	g++ -o md2html $(objects)
main.o:main.cpp
	g++ -c main.cpp
MarkdownToHTML.o:MarkdownToHTML.cpp
	g++ -c MarkdownToHTML.cpp
.PHONY:clean
clean:
	rm $(objects) md2html
