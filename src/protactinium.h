#ifdef PROTACTINIUM_H
#error Already included
#else
#define PROTACTINIUM_H


class protactinium: public chemical_element
{
    public:
        protactinium() { }
        ~protactinium() { }

        atomic_number_t atomic_number() const override
        {
            return 91;
        }

        symbol_t symbol() const override
        {
            return "Pa";
        }

        name_t name() const override
        {
            return "protactinium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 231.03588;
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
            return "[Rn] 5f^2 6d^1 7s^2";
        }
};

#endif
