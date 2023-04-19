#include <iostream>
#include "namesp.h"

int main()
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
}