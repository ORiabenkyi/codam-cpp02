
#include "../inc/Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed() : value(0) {
    std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Fixed destructor called" << std::endl;
}

Fixed::Fixed(int const raw) : value(raw << storedBits) {
    std::cout << "Fixed int constructor called" << std::endl;
}

Fixed::Fixed(float const raw) : value(static_cast<int>(roundf(raw * (1 << storedBits)))) {
    std::cout << "Fixed float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &otherFixed) : value(otherFixed.value) {
    std::cout << "Fixed copy constructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "Fixed getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "Fixed setRawBits member function called" << std::endl;
    this->value = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(this->value) / (1 << storedBits);
}

int Fixed::toInt() const {
    return this->value >> storedBits;
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

bool Fixed::operator>(const Fixed& other) const {
    return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->value < other.value;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->value != other.value;
}

Fixed& Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->value++;
    return temp;
}

Fixed& Fixed::operator--() {
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->value--;
    return temp;
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other.value == 0) {
        throw std::runtime_error("Division by zero");
    }
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fp) {
    out << fp.toFloat();
    return out;
}
