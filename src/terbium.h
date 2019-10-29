#ifdef TERBIUM_H
#error Already included
#else
#define TERBIUM_H

class terbium: public chemical_element
{
    public:
        terbium() { }
        ~terbium() { }

        atomic_number_t atomic_number() const override
        {
            return 65;
        }

        symbol_t symbol() const override
        {
            return "Tb";
        }

        name_t name() const override
        {
            return "terbium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 158.925354;
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
            return "[Xe]4f^9 6s^2";
        }
};

#endif
