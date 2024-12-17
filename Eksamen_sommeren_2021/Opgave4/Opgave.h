#pragma once
#include"Dato.h"
#include<string>
#include <iostream>

using namespace std;


class Opgave
{
private:
    string opgave_;
    int prioritet_;
    Dato deadline_;

public:
    Opgave();
    Opgave(string opgave, int prioritet, int dag, int maaned, int aar);
    void setOpgave(string);
    string GetOpgave();
    void setPrioritet(int prioritet);
    int getPrioritet();
    void setDeadline(int dag, int maaned, int aar);
    void print();
};


