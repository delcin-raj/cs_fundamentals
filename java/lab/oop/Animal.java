package oop;



public class Animal {
    double height;
    double weight;
    String name;

    public Animal(double height, double weight, String name) {
        this.height = height;
        this.weight = weight;
        this.name = name;
    }

    public Animal() {}

    String sound() {
        return "Some sound";
    }

    public String toString() {
        return "Name: " + name + ", Weight: " + weight + ", Height: " + height;
    }
}

class Dog extends Animal {

    public Dog(double height, double weight, String name) {
        super(height, weight, name);
    }

    @Override
    String sound() {
        return "Barks";
    }
}

class Unknown extends Animal {

}

