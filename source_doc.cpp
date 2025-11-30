int main()
{
 
    const unsigned int N = 40;
    char title[N];
    unsigned int pages;
    cout << "Enter a document title" << endl;
    cin >> title;
    Document d{ title,140 };
    Document d2 = d;
    Document d3 = d2;
    char newtitle[N];
    cout << "Enter a new title of the document: ";
    cin >> newtitle;
    d2.setTitle(newtitle);
    d.show(); d2.show();
    return 0;
 
}
 
