#ifdef SULFUR_H
#error Already included
#else
#define SULFUR_H


class sulfur: public chemical_element
{
    public:
        sulfur() = default;
        ~sulfur() = default;

        atomic_number_t atomic_number() const override
        {
            return 16;
        }

        symbol_t symbol() const override
        {
            return "S";
        }

        name_t name() const override
        {
            return "sulfur";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 32.06;
        }

        state_t state() const override
        {
            return "Reactive nonmetal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "16: chalcogens";
        }

        electron_config_t electron_config() const override
        {
            return "[Ne] 3s^2 3p^4";
        }
};

#endif
