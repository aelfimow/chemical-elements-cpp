#ifdef AMERICIUM_H
#error Already included
#else
#define AMERICIUM_H


class americium: public chemical_element
{
    public:
        americium() { }
        ~americium() { }

        atomic_number_t atomic_number() const override
        {
            return 95;
        }

        symbol_t symbol() const override
        {
            return "Am";
        }

        name_t name() const override
        {
            return "americium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 243;
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
            return "[Rn] 5f^7 7s^2";
        }
};

#endif
