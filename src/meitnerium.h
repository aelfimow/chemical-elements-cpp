#ifdef MEITNERIUM_H
#error Already included
#else
#define MEITNERIUM_H


class meitnerium: public chemical_element
{
    public:
        meitnerium() = default;
        ~meitnerium() = default;

        atomic_number_t atomic_number() const override
        {
            return 109;
        }

        symbol_t symbol() const override
        {
            return "Mt";
        }

        name_t name() const override
        {
            return "meitnerium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 278;
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
            return "9";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^7 7s^2";
        }
};

#endif
