using System;

abstract class Shape
{
    public abstract double GetArea();
    public abstract double GetPerimeter();
}

class Triangle : Shape
{
    double a, b, c;

    public Triangle(double a, double b, double c)
    {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public override double GetArea()
    {
        double p = (a + b + c) / 2;
        return Math.Sqrt(p * (p - a) * (p - b) * (p - c));
    }

    public override double GetPerimeter()
    {
        return a + b + c;
    }
}

class Square : Shape
{
    double side;

    public Square(double side)
    {
        this.side = side;
    }

    public override double GetArea()
    {
        return side * side;
    }

    public override double GetPerimeter()
    {
        return 4 * side;
    }
}

class Circle : Shape
{
    double radius;

    public Circle(double radius)
    {
        this.radius = radius;
    }

    public override double GetArea()
    {
        return Math.PI * radius * radius;
    }

    public override double GetPerimeter()
    {
        return 2 * Math.PI * radius;
    }
}

class Program
{
    static void Main(string[] args)
    {
        Shape triangle = new Triangle(3, 4, 5);
        Console.WriteLine("");
        Console.WriteLine("Area of the triangle: " + triangle.GetArea());
        Console.WriteLine("Perimeter of the triangle: " + triangle.GetPerimeter());
        Console.WriteLine("");
        Shape square = new Square(4);
        Console.WriteLine("Area of the square: " + square.GetArea());
        Console.WriteLine("Perimeter of the square: " + square.GetPerimeter());
        Console.WriteLine("");
        Shape circle = new Circle(5);
        Console.WriteLine("Area of the circle: " + circle.GetArea());
        Console.WriteLine("Perimeter of the circle: " + circle.GetPerimeter());

        Console.ReadLine();
    }
}
