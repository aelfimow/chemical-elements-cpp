#include "chemical_element.h"
#include "hydrogen.h"


atomic_number_t hydrogen::atomic_number() const
{
    return 1;
}

symbol_t hydrogen::symbol() const
{
    return "H";
}

name_t hydrogen::name() const
{
    return "hydrogen";
}

atomic_mass_t hydrogen::atomic_mass() const
{
    return 1.008;
}

state_t hydrogen::state() const
{
    return "gas";
}

stability_t hydrogen::stability() const
{
    return "stable";
}

group_t hydrogen::group() const
{
    return "1: H and alkali metals";
}

electron_config_t hydrogen::electron_config() const
{
    return "1s^1";
}
