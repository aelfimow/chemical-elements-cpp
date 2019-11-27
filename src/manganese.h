#ifdef MANGANESE_H
#error Already included
#else
#define MANGANESE_H


class manganese: public chemical_element
{
    public:
        manganese() = default;
        ~manganese() = default;

        atomic_number_t atomic_number() const override
        {
            return 25;
        }

        symbol_t symbol() const override
        {
            return "Mn";
        }

        name_t name() const override
        {
            return "manganese";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 54.938043;
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
            return "7";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^5 4s^2";
        }
};

#endif
