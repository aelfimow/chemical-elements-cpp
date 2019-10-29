#ifdef GADOLINIUM_H
#error Already included
#else
#define GADOLINIUM_H

class gadolinium: public chemical_element
{
    public:
        gadolinium() { }
        ~gadolinium() { }

        atomic_number_t atomic_number() const override
        {
            return 64;
        }

        symbol_t symbol() const override
        {
            return "Gd";
        }

        name_t name() const override
        {
            return "gadolinium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 157.25;
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
            return "[Xe]4f^7 5d^1 6s^2";
        }
};

#endif
