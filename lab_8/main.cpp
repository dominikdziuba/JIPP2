#include <iostream>
#include <string>

using namespace std;

class Note
{
public:
    string getTitle()
    {
        return title;
    }

    void setTitle(string text)
    {
        title = text;
    }

    virtual string getContent() = 0;

    virtual void setContent(string text) = 0;

private:
    string title;
};

class TextNote : public Note
{
private:
    string content;
public:
    string getContent()
    {
        return content;
    }

    void setContent(string text)
    {
        content = text;
    }
};

int main()
{
    TextNote plik1;
    plik1.setContent("ala");
    cout << plik1.getContent();

    string line;
    getline(cin,line);
    plik1.setContent(line);
    cout <<endl<< plik1.getContent();



    return 0;
}
