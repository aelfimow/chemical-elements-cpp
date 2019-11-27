#ifdef BOHRIUM_H
#error Already included
#else
#define BOHRIUM_H


class bohrium: public chemical_element
{
    public:
        bohrium() = default;
        ~bohrium() = default;

        atomic_number_t atomic_number() const override
        {
            return 107;
        }

        symbol_t symbol() const override
        {
            return "Bh";
        }

        name_t name() const override
        {
            return "bohrium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 270;
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
            return "7";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^5 7s^2";
        }
};

#endif
