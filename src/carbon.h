#ifdef CARBON_H
#error Already included
#else
#define CARBON_H


class carbon: public chemical_element
{
    public:
        carbon() = default;
        ~carbon() = default;

        atomic_number_t atomic_number() const override
        {
            return 6;
        }

        symbol_t symbol() const override
        {
            return "C";
        }

        name_t name() const override
        {
            return "carbon";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 12.011;
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
            return "14";
        }

        electron_config_t electron_config() const override
        {
            return "[He] 2s^2 2p^2";
        }
};

#endif
