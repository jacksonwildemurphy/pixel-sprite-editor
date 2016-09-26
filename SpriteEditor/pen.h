#ifndef PEN_H
#define PEN_H
#include "tool.h"

// Represents a tool for painting pixels to an image. Inherits from the abstract class Tool
class Pen : public Tool
{
public:
    Pen();
    void onClick(int,int);
    void onRelease(int,int);
    void onHover(int,int);
    void onDrag(int,int);
};

#endif // PEN_H
