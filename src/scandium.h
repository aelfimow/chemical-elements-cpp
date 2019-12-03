#ifdef SCANDIUM_H
#error Already included
#else
#define SCANDIUM_H


class scandium: public chemical_element
{
    public:
        scandium() = default;
        ~scandium() = default;

        atomic_number_t atomic_number() const override
        {
            return 21;
        }

        symbol_t symbol() const override
        {
            return "Sc";
        }

        name_t name() const override
        {
            return "scandium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 44.955908;
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
            return "3";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar]3d^1 4s^2";
        }
};

#endif
