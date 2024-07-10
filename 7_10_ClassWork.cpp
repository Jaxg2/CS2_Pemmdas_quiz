//Jaxon

#include <iostream>
using namespace std;

void procedureCrayons();
int draw(string, int, int);

class Rectangle
{
private:
	double width;
	double length;

public:
	void setWidth(double w);
	void setLength(double l);
	
	double getWidth() const;
	double getLength() const;
	double getArea() const;


};

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setLength(double l)
{
	length = l;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getArea() const
{
	return length * width;
}

class Crayon
{
private:
	string color;
	int length;

public:
	void setColor(string color);
	void setLength(int length);
	string getColor() const;
	int getLength() const;
	
	void draw(int lineLength);
	Crayon blend(Crayon otherCrayon);

};

void Crayon::setColor(string color)
{
	color = c;
}

void Crayon::setLength(int length)
{
	length = l;
}
string Crayon::getColor() const
{
	return color;
}
int Crayon::getLength() const
{

}


void Crayon::draw(int lineLength)
{

	cout << "A line of " << color << " crayon extending " << lineLength << " feet on the wall." << endl;
	length = length - lineLength;

}


Crayon Crayon::blend(Crayon otherCrayon)
{
	Crayon c;
	c.setColor(color + otherCrayon.getColor());
	c.setLength(length + otherCrayon.getLength());
	return c;
}

int main()
{
	Rectangle box;
	box.setWidth(4);
	box.setLength(6);

	cout << box.getWidth() << endl << box.getWidth() << endl << box.getArea() << endl;


}

void procedureCrayons()
{
	string crayon1 = "red";
	string crayon2 = "orange";
	string crayon3 = "yellow";
	string crayon4 = "green";
	string crayon5 = "blue";
	string crayon6 = "indigo";
	string crayon7 = "violet";
	string crayon8 = "black";

	int crayon1Length = 100;
	int crayon2Length = 100;
	int crayon3Length = 100;
	int crayon4Length = 100;
	int crayon5Length = 100;
	int crayon6Length = 100;
	int crayon7Length = 100;
	int crayon8Length = 100;



}

int draw(string color, int amtLeft, int amtToDraw)
{
	cout << "A line of " << color;
}