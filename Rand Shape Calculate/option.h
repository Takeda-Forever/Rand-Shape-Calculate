#pragma 
#ifndef jump
	#define jump std::cout << std::endl
#endif // jump
#define d double
#define line "-------------------------------------------------\n"

class Shape
{
public:
	Shape(int x, int y):x(x),y(y){}
	virtual d getSquare()  = 0; 
	virtual d getPerimeter()  = 0; 
	virtual int igetSquare()  = 0;
	virtual int igetPerimeter()  = 0;
	virtual int setCord(int x, int y) 
	{ 
		return this->x = x; 
		return this->y = y; 
	}
	virtual void printCoords() 
	{
		std::cout << "Position X:" << x << "\tPosition Y:" << y << std::endl;
	}
	virtual void GetAllParam()  
	{
		getAllParam(); std::cout << std::endl;
	}
private:
	virtual void getAllParam() 
	{
		printCoords();
		std::cout << "Rectangle square: " << getSquare() << std::endl
			<< "Rectangle perimeter: " << getPerimeter() << std::endl;
	}

	int x;
	int y;
};
class Rectangle : public Shape 
{
public:
	Rectangle(int x, int y, d width, d height):Shape(x, y), width(width),height(height){}
	d getSquare()  override
	{
		return width * height;
	}
	d getPerimeter()  override
	{
		return width * 2 + height * 2;
	}
	void SetAllParam(int x, int y, d w, d h) 
	{
		setCord(x, y);
		this->width = w;
		this->height = h;
	}
	int igetSquare()  override
	{
		return getSquare();
	}
	int igetPerimeter()  override
	{
		return getPerimeter();
	}
	
private:
	d width; 
	d height; 
};
class Circle : public Shape 
{
public:
	Circle(int x, int y, d radius) :Shape(x, y),radius(radius) {}
	d getSquare()  override
	{
		return radius * radius * 3.14;
	}
	d getPerimeter()  override
	{
		return 2 * 3.14 * radius;
	}
	void SetAllParam(int x, int y, d r)
	{
		setCord(x, y);
		this->radius = r;
	}
	int igetSquare()  override
	{
		return getSquare();
	}
	int igetPerimeter()  override
	{
		return getPerimeter();
	}
private:
	d radius; 
};
