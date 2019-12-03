#ifdef THORIUM_H
#error Already included
#else
#define THORIUM_H


class thorium: public chemical_element
{
    public:
        thorium() = default;
        ~thorium() = default;

        atomic_number_t atomic_number() const override
        {
            return 90;
        }

        symbol_t symbol() const override
        {
            return "Th";
        }

        name_t name() const override
        {
            return "thorium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 232.0377;
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
            return "[Rn] 6d^2 7s^2";
        }
};

#endif
