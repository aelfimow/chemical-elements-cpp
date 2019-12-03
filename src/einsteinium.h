#ifdef EINSTEINIUM_H
#error Already included
#else
#define EINSTEINIUM_H


class einsteinium: public chemical_element
{
    public:
        einsteinium() = default;
        ~einsteinium() = default;

        atomic_number_t atomic_number() const override
        {
            return 99;
        }

        symbol_t symbol() const override
        {
            return "Es";
        }

        name_t name() const override
        {
            return "einsteinium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 252;
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
            return "[Rn] 5f^11 7s^2";
        }
};

#endif
