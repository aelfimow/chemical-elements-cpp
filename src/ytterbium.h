#ifdef YTTERBIUM_H
#error Already included
#else
#define YTTERBIUM_H

class ytterbium: public chemical_element
{
    public:
        ytterbium() = default;
        ~ytterbium() = default;

        atomic_number_t atomic_number() const override
        {
            return 70;
        }

        symbol_t symbol() const override
        {
            return "Yb";
        }

        name_t name() const override
        {
            return "ytterbium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 173.045;
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
            return "[Xe]4f^14 6s^2";
        }
};

#endif
