#ifdef HYDROGEN_H
#error Already included
#else
#define HYDROGEN_H


class hydrogen: public chemical_element
{
    public:
        hydrogen() { }
        ~hydrogen() { }

        atomic_number_t atomic_number() const;
        symbol_t symbol() const;
        name_t name() const;
        atomic_mass_t atomic_mass() const;
        state_t state() const;
        stability_t stability() const;
        group_t group() const;
        electron_config_t electron_config() const;
};

#endif
