#ifndef ERASER_H
#define ERASER_H
#include "tool.h"

// Represents a tool for erasing pixels. Inherits from the abstract class Tool
class Eraser : public Tool
{
public:
    Eraser();
    void onClick(int,int);
    void onRelease(int,int);
    void onHover(int,int);
    void onDrag(int,int);
};

#endif // ERASER_H
