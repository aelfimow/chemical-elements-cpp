#ifdef ACTINIUM_H
#error Already included
#else
#define ACTINIUM_H


class actinium: public chemical_element
{
    public:
        actinium() { }
        ~actinium() { }

        atomic_number_t atomic_number() const override
        {
            return 89;
        }

        symbol_t symbol() const override
        {
            return "Ac";
        }

        name_t name() const override
        {
            return "actinium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 227;
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
            return "3";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn]dd^1 7s^2";
        }
};

#endif
