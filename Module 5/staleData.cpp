/*
-----------------------------------
Rectangle
-----------------------------------
- width: double
- length: double
-----------------------------------
+ setWidth(w: double): void
+ setLength(l: double): void
+ getWidth(): double
+ getLength(): double
+ getArea(): double
-----------------------------------
*/
#include <iostream>
using namespace std;

class Rectangle
{
   private:
      double width;
      double length;
   public:
      void setWidth(double);
      void setLength(double);
      double getWidth() const;
      double getLength() const;
      double getArea() const;
};

// setWidth assigns a value to the width member.   *
void Rectangle::setWidth(double w) { width = w; }

// setLength assigns a value to the length member. *
void Rectangle::setLength(double len) { length = len; }

// getWidth returns the value in the width member. *
double Rectangle::getWidth() const { return width; }

// getLength returns the value in the length member. *
double Rectangle::getLength() const { return length; }

// getArea returns the product of width times length. *
double Rectangle::getArea() const { return length * width; }

int main()
{
   Rectangle box;     // Define an instance of the Rectangle class
   double rectWidth = 60.5;  // Local variable for width
   double rectLength = 12.3; // Local variable for length

   // Store the width and length in the object
   box.setWidth(rectWidth);
   box.setLength(rectLength);

   // Display the rectangle's data
   cout << "Here is the rectangle's data:\n";
   cout << "Width: " << box.getWidth() << endl;
   cout << "Length: " << box.getLength() << endl;
   cout << "Area: " << box.getArea() << endl;

   box.setLength(100);
   box.setWidth(15);
   cout << "New area: " << box.getArea() << endl;
   return 0;
}