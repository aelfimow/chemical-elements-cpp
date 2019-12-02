#ifdef COBALT_H
#error Already included
#else
#define COBALT_H


class cobalt: public chemical_element
{
    public:
        cobalt() = default;
        ~cobalt() = default;

        atomic_number_t atomic_number() const override
        {
            return 27;
        }

        symbol_t symbol() const override
        {
            return "Co";
        }

        name_t name() const override
        {
            return "cobalt";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 58.933194;
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
            return "9";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^7 4s^2";
        }
};

#endif
