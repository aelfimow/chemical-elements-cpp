#ifdef COPERNICIUM_H
#error Already included
#else
#define COPERNICIUM_H


class copernicium: public chemical_element
{
    public:
        copernicium() = default;
        ~copernicium() = default;

        atomic_number_t atomic_number() const override
        {
            return 112;
        }

        symbol_t symbol() const override
        {
            return "Cn";
        }

        name_t name() const override
        {
            return "copernicium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 285;
        }

        state_t state() const override
        {
            return "Post-transition metal";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "12";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^10 7s^2";
        }
};

#endif
