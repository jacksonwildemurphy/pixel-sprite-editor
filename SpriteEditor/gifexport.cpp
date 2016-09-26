#include "gifexport.h"
#include "sprite.h"
#include <string>



GIFExport::GIFExport()
{

}

void GIFExport::save(string fileName, Sprite* sprite)
{

//    string toSave = "";

//    QFile file(fileName);

//    QTextStream stream( &file );

//    // TODO Open file save dialog box

//    // Loop through each image in sprite
//    for(size_t i = 0; i < sprite->images.size(); i++)
//    {
//        Image current = sprite->images.at(i);

//        // loop through each layer in current image
//        for(size_t i = 0; i < current.layers.size(); i++)
//        {
//            // Get current layer and add it to string
//            Layer temp = current.layers.at(i);
//            Vector4* RGB = temp.pixels;

//            if ( file.open(QIODevice::ReadWrite) )
//            {
//                toSave = RGB->r + "," + RGB->g + "," + RGB->b + "," + RGB->a;
//                stream << toSave << "\n";
//            }
//            //toSave += RGB->r + "," + RGB->g + "," + RGB->b + "," + RGB->a + "\n";
//        }
//    }

    //TODO save file to desired destination
}
