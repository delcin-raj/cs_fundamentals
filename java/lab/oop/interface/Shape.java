public interface Shape {
    public double area();
}

class Square implements Shape {
    double side;
    public Square(double x) {
        side = x;
    }

    public double area() {
        return side * side;
    }
}

class Rectangle implements Shape {
    double length;
    double breadth;
    public Rectangle(double x, double y) {
        length = x;
        breadth = y;
    }

    public double area() {
        return length * breadth;
    }
}

class Example {
    public void dosomething(Shape x) {
        System.out.println(x.area());
    }
}
