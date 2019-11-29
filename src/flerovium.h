#ifdef FLEROVIUM_H
#error Already included
#else
#define FLEROVIUM_H


class flerovium: public chemical_element
{
    public:
        flerovium() = default;
        ~flerovium() = default;

        atomic_number_t atomic_number() const override
        {
            return 114;
        }

        symbol_t symbol() const override
        {
            return "Fl";
        }

        name_t name() const override
        {
            return "flerovium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 289;
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
            return "14";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^10 7s^2 7p^2";
        }
};

#endif
