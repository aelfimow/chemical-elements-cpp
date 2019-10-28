#ifdef HELIUM_H
#error Already included
#else
#define HELIUM_H


class helium: public chemical_element
{
    public:
        helium() { }
        ~helium() { }

        atomic_number_t atomic_number() const override
        {
            return 2;
        }

        symbol_t symbol() const override
        {
            return "He";
        }

        name_t name() const override
        {
            return "helium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 4.002602;
        }

        state_t state() const override
        {
            return "gas";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "18: noble gases";
        }

        electron_config_t electron_config() const override
        {
            return "1s^2";
        }
};

#endif
