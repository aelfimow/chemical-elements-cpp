#ifdef MENDELEVIUM_H
#error Already included
#else
#define MENDELEVIUM_H


class mendelevium: public chemical_element
{
    public:
        mendelevium() { }
        ~mendelevium() { }

        atomic_number_t atomic_number() const override
        {
            return 101;
        }

        symbol_t symbol() const override
        {
            return "Md";
        }

        name_t name() const override
        {
            return "mendelevium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 258;
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
            return "[Rn] 5f^13 7s^2";
        }
};

#endif
