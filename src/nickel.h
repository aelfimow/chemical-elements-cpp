#ifdef NICKEL_H
#error Already included
#else
#define NICKEL_H


class nickel: public chemical_element
{
    public:
        nickel() = default;
        ~nickel() = default;

        atomic_number_t atomic_number() const override
        {
            return 28;
        }

        symbol_t symbol() const override
        {
            return "Ni";
        }

        name_t name() const override
        {
            return "nickel";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 58.6934;
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
            return "10";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^8 4s^2 or [Ar] 3d^9 4s^1";
        }
};

#endif
