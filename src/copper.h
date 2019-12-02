#ifdef COPPER_H
#error Already included
#else
#define COPPER_H


class copper: public chemical_element
{
    public:
        copper() = default;
        ~copper() = default;

        atomic_number_t atomic_number() const override
        {
            return 29;
        }

        symbol_t symbol() const override
        {
            return "Cu";
        }

        name_t name() const override
        {
            return "copper";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 63.546;
        }

        state_t state() const override
        {
            return "Transition metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "11";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^10 4s^1";
        }
};

#endif
