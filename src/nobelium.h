#ifdef NOBELIUM_H
#error Already included
#else
#define NOBELIUM_H


class nobelium: public chemical_element
{
    public:
        nobelium() = default;
        ~nobelium() = default;

        atomic_number_t atomic_number() const override
        {
            return 102;
        }

        symbol_t symbol() const override
        {
            return "No";
        }

        name_t name() const override
        {
            return "nobelium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 259;
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
            return "[Rn] 5f^14 7s^2";
        }
};

#endif
