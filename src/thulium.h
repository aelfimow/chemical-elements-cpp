#ifdef THULIUM_H
#error Already included
#else
#define THULIUM_H

class thulium: public chemical_element
{
    public:
        thulium() = default;
        ~thulium() = default;

        atomic_number_t atomic_number() const override
        {
            return 69;
        }

        symbol_t symbol() const override
        {
            return "Tm";
        }

        name_t name() const override
        {
            return "thulium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 168.934218;
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
            return "[Xe]4f^13 6s^2";
        }
};

#endif
