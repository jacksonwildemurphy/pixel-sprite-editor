#ifndef TOOL_H
#define TOOL_H

// An abstract class representing tools for modifying pixels
class Tool
{
public:
    virtual void onClick(int,int) = 0;
    virtual void onRelease(int,int) = 0;
    virtual void onHover(int,int) = 0;
    virtual void onDrag(int,int) = 0;
};

#endif // TOOL_H
