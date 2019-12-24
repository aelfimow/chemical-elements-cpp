#ifdef ALUMINIUM_H
#error Already included
#else
#define ALUMINIUM_H


class aluminium: public chemical_element
{
    public:
        aluminium() = default;
        ~aluminium() = default;

        atomic_number_t atomic_number() const override
        {
            return 13;
        }

        symbol_t symbol() const override
        {
            return "Al";
        }

        name_t name() const override
        {
            return "aluminium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 26.9815384;
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
            return "[Ne] 3s^2 3p^1";
        }
};

#endif
