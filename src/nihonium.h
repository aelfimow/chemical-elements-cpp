#ifdef NIHONIUM_H
#error Already included
#else
#define NIHONIUM_H


class nihonium: public chemical_element
{
    public:
        nihonium() = default;
        ~nihonium() = default;

        atomic_number_t atomic_number() const override
        {
            return 113;
        }

        symbol_t symbol() const override
        {
            return "Nh";
        }

        name_t name() const override
        {
            return "nihonium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 286;
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
            return "13";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^10 7s^2 7p^1";
        }
};

#endif
