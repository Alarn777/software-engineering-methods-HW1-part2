#include "checkList.h"
#include <typeinfo>

CheckList::CheckList(std::string allStrings[])
{

    int offset = 6;
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        Strings[i] = allStrings[i];
        std::cout << Strings[i] << std::endl;
    }
    // CheckBox()
}

// CheckList::CheckList(int i)
// {
//     int offset = 6;
//     int index = 0;
//     auto handle = GetStdHandle(STD_INPUT_HANDLE);
//     std::cout << typeid(i).name();
//     // for (int i = 0; i < allStrings.length() - 1; i++)
//     // CheckBox()
// }

CheckList::~CheckList()
{
    delete[] Strings;
}
