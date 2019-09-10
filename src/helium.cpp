#include "chemical_element.h"
#include "helium.h"


atomic_number_t helium::atomic_number() const
{
    return 2;
}

symbol_t helium::symbol() const
{
    return "He";
}

name_t helium::name() const
{
    return "helium";
}

atomic_mass_t helium::atomic_mass() const
{
    return 4.002602;
}

state_t helium::state() const
{
    return "gas";
}

stability_t helium::stability() const
{
    return "stable";
}

group_t helium::group() const
{
    return "18: noble gases";
}

electron_config_t helium::electron_config() const
{
    return "1s^2";
}
