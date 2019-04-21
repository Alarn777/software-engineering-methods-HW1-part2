#include "checkList.h"
#include <typeinfo>

CheckList::CheckList(std::string allStrings[])
{
    offset = 3;
    index = 0;

    // for (int i = 0; i < 5; i++)
    // {
    //     Strings[i] = allStrings[i];
    //     std::cout << Strings[i] << std::endl;
    // }

    // CheckBox(5, offset * ++index, 1, allStrings[0], index);

    for (int i = 0; i < 5; i++)
    {
        allCheckBoxes[i] = CheckBox(0, offset * ++index, 1, allStrings[i], index);
    }
}

CheckList::~CheckList()
{
    delete[] Strings;
}

void CheckList::handleKeyboardEvent(KEY_EVENT_RECORD &event)
{

    CONSOLE_SCREEN_BUFFER_INFO info;
    auto handle = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(handle, &info);
    auto offset = info.dwCursorPosition.X - this->left - 1;
    if (!event.bKeyDown)
        return;

    if (event.wVirtualKeyCode == 0x20)
    {
        checked = !checked;
        draw(inputText, checked, index);
    }
}

void CheckList::handleMouseEvent(MOUSE_EVENT_RECORD &event)
{

    CONSOLE_SCREEN_BUFFER_INFO info;
    auto handle = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(handle, &info);
    auto offset = info.dwCursorPosition.X - this->left - 1;
}