#ifdef SEABORGIUM_H
#error Already included
#else
#define SEABORGIUM_H


class seaborgium: public chemical_element
{
    public:
        seaborgium() = default;
        ~seaborgium() = default;

        atomic_number_t atomic_number() const override
        {
            return 106;
        }

        symbol_t symbol() const override
        {
            return "Sg";
        }

        name_t name() const override
        {
            return "seaborgium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 269;
        }

        state_t state() const override
        {
            return "Transition metal";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "6";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f14 6d^4 7s^2";
        }
};

#endif
