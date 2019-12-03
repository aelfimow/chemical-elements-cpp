#ifdef ERBIUM_H
#error Already included
#else
#define ERBIUM_H

class erbium: public chemical_element
{
    public:
        erbium() = default;
        ~erbium() = default;

        atomic_number_t atomic_number() const override
        {
            return 68;
        }

        symbol_t symbol() const override
        {
            return "Er";
        }

        name_t name() const override
        {
            return "erbium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 167.259;
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
            return "[Xe]4f^12 6s^2";
        }
};

#endif
