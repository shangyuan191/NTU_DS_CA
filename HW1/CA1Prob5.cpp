class rectangle 
{ 
    private: 
        double width; 
        double length; 
        double perimeter; 
        double area; 
        // Function to automatically compute the perimeter and area
        void updatePerimeterAndArea() 
        {
            perimeter = 2 * (width + length);
            area = width * length;
        }
    public: 
        // Constructor, automatically compute the perimeter and area once it is OK. 
        rectangle(double wd, double lg) 
        {
            width = wd;
            length = lg;
            updatePerimeterAndArea();  // Compute perimeter and area
        }
        
        // Set the dimension and automatically update the perimeter and area. 
        void setDimension(double wd, double lg) 
        {
            width = wd;
            length = lg;
            updatePerimeterAndArea();  // Update perimeter and area
        }
        
        // Set the width and automatically update the perimeter and area. 
        void setWidth(double wd) 
        {
            width = wd;
            updatePerimeterAndArea();  // Update perimeter and area
        }
        
        // Set the length and automatically update the perimeter and area. 
        void setLength(double lg) 
        {
            length = lg;
            updatePerimeterAndArea();  // Update perimeter and area
        }
        
        // Return the width of the rectangle. 
        double getWidth() 
        {
            return width;
        }
        
        // Return the length of the rectangle. 
        double getLength() 
        {
            return length;
        }
        
        // Return the perimeter of the rectangle. 
        double getPerimeter() 
        {
            return perimeter;
        }
        
        // Return the area of the rectangle. 
        double getArea() 
        {
            return area;
        }
        
        // True, if width = length (i.e., it is a square). 
        bool isSquare() 
        {
            return width == length;
        }
}; 