#ifdef ROENTGENIUM_H
#error Already included
#else
#define ROENTGENIUM_H


class roentgenium: public chemical_element
{
    public:
        roentgenium() = default;
        ~roentgenium() = default;

        atomic_number_t atomic_number() const override
        {
            return 111;
        }

        symbol_t symbol() const override
        {
            return "Rg";
        }

        name_t name() const override
        {
            return "roentgenium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 282;
        }

        state_t state() const override
        {
            return "unknown";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "11";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^9 7s^2";
        }
};

#endif
