#ifdef FERMIUM_H
#error Already included
#else
#define FERMIUM_H


class fermium: public chemical_element
{
    public:
        fermium() = default;
        ~fermium() = default;

        atomic_number_t atomic_number() const override
        {
            return 100;
        }

        symbol_t symbol() const override
        {
            return "Fm";
        }

        name_t name() const override
        {
            return "fermium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 257;
        }

        state_t state() const override
        {
            return "Actinide";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "n/a";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^12 7s^2";
        }
};

#endif
