#ifdef NITROGEN_H
#error Already included
#else
#define NITROGEN_H


class nitrogen: public chemical_element
{
    public:
        nitrogen() = default;
        ~nitrogen() = default;

        atomic_number_t atomic_number() const override
        {
            return 7;
        }

        symbol_t symbol() const override
        {
            return "N";
        }

        name_t name() const override
        {
            return "nitrogen";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 14.007;
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
            return "15: pnictogens";
        }

        electron_config_t electron_config() const override
        {
            return "[He] 2s^2 2p^3";
        }
};

#endif
