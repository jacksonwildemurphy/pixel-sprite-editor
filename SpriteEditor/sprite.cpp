#include "sprite.h"

Sprite::Sprite()
{
    currentImageIndex = 0;
}

/*
* Adds an image to the current sprite
*/
Image* Sprite::addImage()
{
    Image* newimage = new Image();
    images.push_back(newimage);
    return newimage;
}

/*
* Deletes an image from the current sprite
*/
void Sprite::deleteImage(int index)
{
    images.erase(images.begin() + index);
    if(currentImageIndex > 0)
    {
        currentImageIndex--;
    }
}

/*
* Returns the image at the given index
*/
Image* Sprite::getImage(int index)
{
    return images.at(index);
}

/*
* Returns the current selected image's index
*/
int Sprite::getCurrentImageIndex()
{
    return currentImageIndex;
}

/*
* Sets the index for which image is currently selected
*/
Image* Sprite::setCurrentImageIndex(int index)
{
    currentImageIndex = index;
    return images[index];
}
