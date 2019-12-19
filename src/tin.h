#ifdef TIN_H
#error Already included
#else
#define TIN_H


class tin: public chemical_element
{
    public:
        tin() = default;
        ~tin() = default;

        atomic_number_t atomic_number() const override
        {
            return 50;
        }

        symbol_t symbol() const override
        {
            return "Sn";
        }

        name_t name() const override
        {
            return "tin";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 118.71;
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
            return "14";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 4d^10 5s^2 5p^2";
        }
};

#endif
