#ifdef POTASSIUM_H
#error Already included
#else
#define POTASSIUM_H


class potassium: public chemical_element
{
    public:
        potassium() = default;
        ~potassium() = default;

        atomic_number_t atomic_number() const override
        {
            return 19;
        }

        symbol_t symbol() const override
        {
            return "K";
        }

        name_t name() const override
        {
            return "potassium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 39.0983;
        }

        state_t state() const override
        {
            return "Alkali metal";
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
            return "[Ar]4s^1";
        }
};

#endif
