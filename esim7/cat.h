#ifndef CAT_H
#define CAT_H
#include <string>
#include <vector>
using namespace std;

class cat
{
private:
    string color;
    string name;
public:
    cat();
    cat(string, string);
    string getColor() const;
    void setColor(const string &newColor);
    string getName() const;
    void setName(const string &newName);
    void printData();
};

#endif // CAT_H
