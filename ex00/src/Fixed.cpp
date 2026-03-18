
#include "../inc/Fixed.hpp"
#include <iostream>

Fixed::Fixed() : value(0) {
    std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Fixed destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &otherFixed) : value(otherFixed.value) {
    std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &otherFixed) {
    std::cout << "Fixed copy assignment operator called" << std::endl;
    if (this != &otherFixed) 
    {
        this->value = otherFixed.value;
        this->setRawBits(otherFixed.getRawBits());
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "Fixed getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "Fixed setRawBits member function called" << std::endl;
    this->value = raw;
}
