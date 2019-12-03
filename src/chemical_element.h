#ifdef CHEMICAL_ELEMENT_H
#error Already included
#else
#define CHEMICAL_ELEMENT_H

#include <string>

using atomic_number_t = size_t;
using symbol_t = std::string;
using atomic_mass_t = double;
using state_t = std::string;
using stability_t = std::string;
using name_t = std::string;
using group_t = std::string;
using electron_config_t = std::string;

class chemical_element
{
    public:
        chemical_element() = default;
        virtual ~chemical_element() = default;

        virtual atomic_number_t atomic_number() const = 0;
        virtual symbol_t symbol() const = 0;
        virtual name_t name() const = 0;
        virtual atomic_mass_t atomic_weight() const = 0;
        virtual state_t state() const = 0;
        virtual stability_t stability() const = 0;
        virtual group_t group() const = 0;
        virtual electron_config_t electron_config() const = 0;
};

#endif
