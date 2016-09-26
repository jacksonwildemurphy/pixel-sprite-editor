#ifndef BUCKET_H
#define BUCKET_H
#include "tool.h"

// Represents a tool for painting adjacent, identically-colored pixels a new color.
// Inherits from the abstract class Tool
class Bucket : public Tool
{
public:
    Bucket();
    void onClick(int,int);
    void onRelease(int,int);
    void onHover(int,int);
    void onDrag(int,int);
};
#endif // BUCKET_H
