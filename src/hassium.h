#ifdef HASSIUM_H
#error Already included
#else
#define HASSIUM_H


class hassium: public chemical_element
{
    public:
        hassium() = default;
        ~hassium() = default;

        atomic_number_t atomic_number() const override
        {
            return 108;
        }

        symbol_t symbol() const override
        {
            return "Hs";
        }

        name_t name() const override
        {
            return "hassium";
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
            return "8";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^6 7s^2";
        }
};

#endif
