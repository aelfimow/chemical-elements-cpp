#ifdef EUROPIUM_H
#error Already included
#else
#define EUROPIUM_H

class europium: public chemical_element
{
    public:
        europium() = default;
        ~europium() = default;

        atomic_number_t atomic_number() const override
        {
            return 63;
        }

        symbol_t symbol() const override
        {
            return "Eu";
        }

        name_t name() const override
        {
            return "europium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 151.964;
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
            return "[Xe]4f^7 6s^2";
        }
};

#endif
