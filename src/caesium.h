#ifdef CAESIUM_H
#error Already included
#else
#define CAESIUM_H


class caesium: public chemical_element
{
    public:
        caesium() = default;
        ~caesium() = default;

        atomic_number_t atomic_number() const override
        {
            return 55;
        }

        symbol_t symbol() const override
        {
            return "Cs";
        }

        name_t name() const override
        {
            return "caesium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 132.90545196;
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
            return "[Xe]6s^1";
        }
};

#endif
