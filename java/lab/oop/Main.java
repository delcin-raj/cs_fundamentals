package oop;

class Main {
    static void f(Animal a) {
        System.out.println(a.sound());
    }
    public static void main(String[] args) {
        Animal some = new Animal();
        some.weight = 10.2;
        some.height = 120;
        some.name = "tom";
        
        // Using constructor
        Animal other = new Animal(100, 50.0, "jerry");

        System.out.println(other);
        System.out.println(some);

        Dog boxer = new Dog(50, 40.0, "bob");
        System.out.println(boxer);
        // All fields and methods from the Animal class are available to the Dog class
        System.out.println("height of boxer is = " + boxer.height);

        f(boxer);
        f(some);
        Unknown u = new Unknown();
        f(u);
    }
}
