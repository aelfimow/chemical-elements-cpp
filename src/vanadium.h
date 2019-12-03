#ifdef VANADIUM_H
#error Already included
#else
#define VANADIUM_H


class vanadium: public chemical_element
{
    public:
        vanadium() = default;
        ~vanadium() = default;

        atomic_number_t atomic_number() const override
        {
            return 23;
        }

        symbol_t symbol() const override
        {
            return "V";
        }

        name_t name() const override
        {
            return "vanadium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 50.9415;
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
            return "5";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^3 4s^2";
        }
};

#endif
