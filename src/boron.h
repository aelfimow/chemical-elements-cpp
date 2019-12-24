#ifdef BORON_H
#error Already included
#else
#define BORON_H


class boron: public chemical_element
{
    public:
        boron() = default;
        ~boron() = default;

        atomic_number_t atomic_number() const override
        {
            return 5;
        }

        symbol_t symbol() const override
        {
            return "B";
        }

        name_t name() const override
        {
            return "boron";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 10.81;
        }

        state_t state() const override
        {
            return "Metalloid";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "13";
        }

        electron_config_t electron_config() const override
        {
            return "[He] 2s^2 2p^1";
        }
};

#endif
