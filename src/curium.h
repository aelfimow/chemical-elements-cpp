#ifdef CURIUM_H
#error Already included
#else
#define CURIUM_H


class curium: public chemical_element
{
    public:
        curium() = default;
        ~curium() = default;

        atomic_number_t atomic_number() const override
        {
            return 96;
        }

        symbol_t symbol() const override
        {
            return "Cm";
        }

        name_t name() const override
        {
            return "curium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 247;
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
            return "[Rn] 5f^7 6d^1 7s^2";
        }
};

#endif
