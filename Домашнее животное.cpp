// Домашнее животное.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


class HomePet {
public:
    std::string Name;
    std::string Breed;
    std::string EyeColor;
    int Age;
    
    HomePet(std::string name, std::string breed, std::string EC, int age): Name(name), Breed(breed), EyeColor(EC), Age(age){}

    void PrintPet() const{
        std::cout << "Имя: " << Name << std::endl;
        std::cout << "Порода:" << Breed << std::endl;
        std::cout << "Цвет глаз: " << EyeColor << std::endl;
        std::cout << "Возраст: " << Age << std::endl;
    }
};

class Dog : HomePet {
    bool IsItTamed;
public:
    Dog(std::string name, std::string breed, std::string EC, int age, bool IIT): HomePet(name, breed, EC, age), IsItTamed(IIT){}

    void PrintDog() const{
        std::cout << "Собака" << std::endl;
        HomePet::PrintPet();
        std::cout << "Приручена ли: " << (IsItTamed ? "да" : "нет") << std::endl;
        std::cout << std::endl;
    }
};

class Cat :HomePet {
    double Weight;
    std::string Color;
public:
    Cat(std::string name, std::string breed, std::string EC, int age, double weight, std::string color): HomePet(name,breed,EC,age), Weight(weight), Color(color){}

    void PrintCat() const{
        std::cout << "Кошка" << std::endl;
        HomePet::PrintPet();
        std::cout << "Вес: " << Weight << " килограмм" << std::endl;
        std::cout << "Цвет: " << Color << std::endl;
        std::cout << std::endl;
    }
};

class Parrot :HomePet {
    bool CanSpeak;
public:
    Parrot(std::string name, std::string breed, std::string EC, int age, bool CS): HomePet(name, breed, EC, age), CanSpeak(CS){}

    void PrintParrot() const{
        std::cout << "Попугай" << std::endl;
        HomePet::PrintPet();
        std::cout << "Умеет ли говорить: " << (CanSpeak ? "Да": "Нет");
        std::cout << std::endl;
    }
};


int main()
{
    setlocale(LC_ALL, "Ru");
    Dog dog{ "Шари","хаски", "зелёный", 4, 0 };
    dog.PrintDog();

    Cat cat{ "Alka", "сиамская", "голубой",2, 6, "чёрный" };
    cat.PrintCat();

    Parrot parrot{ "Кэша", "канарейка", "коричневый", 1, 1 };
    parrot.PrintParrot();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
