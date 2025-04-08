#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating " << endl;
    }
};

// -------- Single Inheritance --------
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking " << endl;
    }
};

// -------- Multilevel Inheritance --------
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping " << endl;
    }
};

// -------- Multiple Inheritance --------
class Flyer {
public:
    void fly() {
        cout << "Flying in the sky " << endl;
    }
};

class Bat : public Animal, public Flyer {
public:
    void hangUpsideDown() {
        cout << "Bat is hanging upside down " << endl;
    }
};

// -------- Hierarchical Inheritance --------
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing " << endl;
    }
};

class Cow : public Animal {
public:
    void moo() {
        cout << "Cow is mooing " << endl;
    }
};

// -------- Hybrid Inheritance --------
// (Multiple + Multilevel) -> Demo only
class LivingThing {
public:
    void live() {
        cout << "Living thing is alive " << endl;
    }
};

class Human : public LivingThing {
public:
    void speak() {
        cout << "Human is speaking " << endl;
    }
};

class Engineer : public Human, public Flyer {
public:
    void code() {
        cout << "Engineer is coding " << endl;
    }
};

// -------- Main Function --------
int main() {
    cout << "--- Single Inheritance ---" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    Puppy p;
    p.eat();
    p.bark();
    p.weep();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Bat b;
    b.eat();  // from Animal
    b.fly();  // from Flyer
    b.hangUpsideDown();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Cat c;
    c.eat();
    c.meow();

    Cow cow;
    cow.eat();
    cow.moo();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    Engineer e;
    e.live();
    e.speak();
    e.fly();
    e.code();

    return 0;
}
