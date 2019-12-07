#ifdef GALLIUM_H
#error Already included
#else
#define GALLIUM_H


class gallium: public chemical_element
{
    public:
        gallium() = default;
        ~gallium() = default;

        atomic_number_t atomic_number() const override
        {
            return 31;
        }

        symbol_t symbol() const override
        {
            return "Ga";
        }

        name_t name() const override
        {
            return "gallium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 69.723;
        }

        state_t state() const override
        {
            return "Post-transition metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "13";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^10 4s^2 4p^1";
        }
};

#endif
