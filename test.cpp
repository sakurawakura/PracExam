// GridItem.hpp
GridItem(int x = -1, int y = 0, int width = 0, int height = 0); // Give x a different default

// GridItem.cpp
GridItem::GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) { 
    if (x == -1){ //If the default constructor was used
        x = 0; //Set to zero
    }
    activeGridItemCount++; 
}