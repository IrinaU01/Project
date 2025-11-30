#include <iostream>
using namespace std;
#include "Document.h"

Document::Document(const Document& obj)
{
	count++;
	pages = obj.pages;
	copy(obj.title);
}
void Document::copy(char* t)
{
	unsigned int size = strlen(t);
	title = new char[size + 1];
	strcpy_s(title, size + 1, t);
}
void Document::show()
{
	cout << title << "," << pages << endl;

}

Document::Document(char* t, unsigned int pages) : pages{ pages }
{
	count++;
	copy(t);

}
int Document::getCount()
{
	return count;
}
Document::~Document()
{
	delete[] title;
}
void Document::setTitle(char* t)
{
	delete[] title;
	copy(t);
}
int Document::count = 0;


