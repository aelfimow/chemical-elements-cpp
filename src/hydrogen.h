#ifdef HYDROGEN_H
#error Already included
#else
#define HYDROGEN_H


class hydrogen: public chemical_element
{
    public:
        hydrogen() { }
        ~hydrogen() { }

        atomic_number_t atomic_number() const override;
        symbol_t symbol() const override;
        name_t name() const override;
        atomic_mass_t atomic_weight() const override;
        state_t state() const override;
        stability_t stability() const override;
        group_t group() const override;
        electron_config_t electron_config() const override;
};

#endif
