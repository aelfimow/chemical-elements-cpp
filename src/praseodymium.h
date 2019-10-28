#ifdef PRASEODYMIUM_H
#error Already included
#else
#define PRASEODYMIUM_H

class praseodymium: public chemical_element
{
    public:
        praseodymium() { }
        ~praseodymium() { }

        atomic_number_t atomic_number() const override
        {
            return 59;
        }

        symbol_t symbol() const override
        {
            return "Pr";
        }

        name_t name() const override
        {
            return "praseodymium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 140.90766;
        }

        state_t state() const override
        {
            return "Lanthanide";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "n/a";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe]4f^3 6s^2";
        }
};

#endif
