#ifndef PART_H
#define PART_H


#include <iostream>
using namespace std;

class Part
{
public:
    virtual void print() = 0;
};

class Engine : public Part
{
public:
    void print() override;
};

class Transmission : public Part
{
public:
    void print() override;
};

class Driveshaft : public Part
{
public:
    void print() override;
};

class ElectronicControlUnit : public Part
{
public:
    void print() override;
};

class Battery : public Part
{
public:
    void print() override;
};

class Light : public Part
{
public:
    void print() override;
};

class Wheel : public Part
{
public:
    void print() override;
};

class Brake : public Part
{
public:
    void print() override;
};

class Steering : public Part
{
public:
    void print() override;
};

class Suspension : public Part
{
public:
    void print() override;
};


#endif //PART_H
