#ifdef HYDROGEN_H
#error Already included
#else
#define HYDROGEN_H


class hydrogen: public chemical_element
{
    public:
        hydrogen() = default;
        ~hydrogen() = default;

        atomic_number_t atomic_number() const override
        {
            return 1;
        }

        symbol_t symbol() const override
        {
            return "H";
        }

        name_t name() const override
        {
            return "hydrogen";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 1.008;
        }

        state_t state() const override
        {
            return "gas";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "1: H and alkali metals";
        }

        electron_config_t electron_config() const override
        {
            return "1s^1";
        }
};

#endif
