#ifdef ZINC_H
#error Already included
#else
#define ZINC_H


class zinc: public chemical_element
{
    public:
        zinc() = default;
        ~zinc() = default;

        atomic_number_t atomic_number() const override
        {
            return 30;
        }

        symbol_t symbol() const override
        {
            return "Zn";
        }

        name_t name() const override
        {
            return "zinc";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 65.38;
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
            return "12";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^10 4s^2";
        }
};

#endif
