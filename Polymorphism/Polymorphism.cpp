#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void speak() const = 0; // Afegit 'const'
    virtual void eat() const = 0;   // Afegit 'const'

    virtual ~Animal() {
        cout << "Animal Destructor Called." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override {  // 'const' aquí coincideix amb la classe base
        cout << "Woof, woof!" << endl;
    }

    void eat() const override {    // 'const' aquí coincideix amb la classe base
        cout << "I'm eating my meat, woof!" << endl;
    }

    ~Dog() {
        cout << "Dog Destructor Called." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override {  // 'const' aquí coincideix amb la classe base
        cout << "Meow, meow!" << endl;
    }

    void eat() const override {    // 'const' aquí coincideix amb la classe base
        cout << "I'm eating my fish, meow!" << endl;
    }

    ~Cat() {
        cout << "Cat Destructor Called." << endl;
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->speak();
    dog->eat();
    cat->speak();
    cat->eat();

    delete dog;
    delete cat;

    return 0;
}
