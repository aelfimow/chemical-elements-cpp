#ifdef URANIUM_H
#error Already included
#else
#define URANIUM_H


class uranium: public chemical_element
{
    public:
        uranium() { }
        ~uranium() { }

        atomic_number_t atomic_number() const override
        {
            return 92;
        }

        symbol_t symbol() const override
        {
            return "U";
        }

        name_t name() const override
        {
            return "uranium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 238.02891;
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
            return "[Rn] 5f^3 6d^1 7s^2";
        }
};

#endif
