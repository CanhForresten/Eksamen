#include "Opgave.h"
#include "Dato.h"

Opgave::Opgave()
{
    opgave_ = "to do";
    prioritet_ = 1;
}

Opgave::Opgave(string opgave, int prioritet, int dag, int maaned, int aar)
{
    setOpgave(opgave);
    setPrioritet(prioritet);
    setDeadline(dag, maaned, aar);

}

void Opgave::setOpgave(string opgave)
{
    if (opgave.empty())
    {
        this->opgave_ = "To do";
    } else {
        this->opgave_ = opgave;
    }
}

string Opgave::GetOpgave()
{
    return opgave_;
}

void Opgave::setPrioritet(int prioritet)
{
    if (prioritet == 0)
    {
        this->prioritet_ = 1;
    } else {
        this->prioritet_ = prioritet;
    }
}

int Opgave::getPrioritet()
{
    return this->prioritet_;
}

void Opgave::setDeadline(int dag, int maaned, int aar)
{
    this->deadline_ = Dato(dag, maaned, aar);
}

void Opgave::print()
{
    cout << "Opgave: " << opgave_ << endl;
    cout << "prioritet: " << prioritet_ << endl;
    cout << "Deadline: "; deadline_.print();
}
