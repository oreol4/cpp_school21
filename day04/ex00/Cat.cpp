#include "Animal.hpp"
#include "Cat.hpp"

#include <iostream>


Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
};

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
};

Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
};

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assigment operator called" << std::endl;
    this->type = other.type;
    return (*this);
};

void    Cat::makeSound() const
{
    std::cout << "MEOW MEOW MEOW BITCH" << std::endl;
};

std::string Cat::getType(void) const
{
    return (this->type);
};