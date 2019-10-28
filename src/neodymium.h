#ifdef NEODYMIUM_H
#error Already included
#else
#define NEODYMIUM_H

class neodymium: public chemical_element
{
    public:
        neodymium() { }
        ~neodymium() { }

        atomic_number_t atomic_number() const override
        {
            return 60;
        }

        symbol_t symbol() const override
        {
            return "Nd";
        }

        name_t name() const override
        {
            return "neodymium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 144.242;
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
            return "[Xe]4f^4 6s^2";
        }
};

#endif
