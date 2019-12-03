#ifdef DUBNIUM_H
#error Already included
#else
#define DUBNIUM_H


class dubnium: public chemical_element
{
    public:
        dubnium() = default;
        ~dubnium() = default;

        atomic_number_t atomic_number() const override
        {
            return 105;
        }

        symbol_t symbol() const override
        {
            return "Db";
        }

        name_t name() const override
        {
            return "dubnium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 268;
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
            return "5";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^3 7s^2";
        }
};

#endif
