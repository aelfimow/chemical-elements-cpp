#ifdef POLONIUM_H
#error Already included
#else
#define POLONIUM_H


class polonium: public chemical_element
{
    public:
        polonium() = default;
        ~polonium() = default;

        atomic_number_t atomic_number() const override
        {
            return 84;
        }

        symbol_t symbol() const override
        {
            return "Po";
        }

        name_t name() const override
        {
            return "polonium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 209;
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
            return "16: chalcogens";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^10 6s^2 6p^4";
        }
};

#endif
