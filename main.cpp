
#include "checkList.h"
int main(int argc, char const *argv[])
{
    int offset = 6;
    int index = 0;
    auto handle = GetStdHandle(STD_INPUT_HANDLE);

    // CheckBox chb(offset * 1, 1, 1, "Hello", 1);

    std::string colour1[5] = {"Blue", "Red", "Orange", "Yellow", "Violet"};

    CheckList ba(colour1);
    // CheckList ba1(colour1);

    // CheckBox chb(15, offset * ++index, 1, "Hello1", index);

    // CheckBox chb1(15, offset * ++index, 1, "Hello1", index);

    while (1)
        continue;
    // while (1)
    // {
    //     INPUT_RECORD ir;
    //     DWORD count;

    //     ReadConsoleInput(handle, &ir, 1, &count);

    //     if (count)
    //     {
    //         if (ir.EventType == KEY_EVENT)
    //         {
    //             chb.handleKeyboardEvent(ir.Event.KeyEvent);
    //         }
    //         if (ir.EventType == MOUSE_EVENT)
    //         {
    //             //  chb.handleKeyboardEvent(ir.Event.MouseEvent);
    //         }
    //     }
    // }
}