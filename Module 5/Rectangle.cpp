#include "Rectangle.h"
#include <iostream>
// setWidth assigns a value to the width member.   *
void Rectangle::setWidth(double w)
{
   width = w;
}

// setLength assigns a value to the length member. *
void Rectangle::setLength(double len)
{
   length = len;
}

// getWidth returns the value in the width member. *
double Rectangle::getWidth() const
{
   return width;
}

// getLength returns the value in the length member. *
double Rectangle::getLength() const
{
   return length;
}

// getArea returns the product of width times length. *
double Rectangle::getArea() const
{
   return width * length;
}