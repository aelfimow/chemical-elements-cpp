#ifdef OXYGEN_H
#error Already included
#else
#define OXYGEN_H


class oxygen: public chemical_element
{
    public:
        oxygen() = default;
        ~oxygen() = default;

        atomic_number_t atomic_number() const override
        {
            return 8;
        }

        symbol_t symbol() const override
        {
            return "O";
        }

        name_t name() const override
        {
            return "oxygen";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 15.999;
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
            return "[He] 2s^2 2p^4";
        }
};

#endif
