#ifdef YTTRIUM_H
#error Already included
#else
#define YTTRIUM_H


class yttrium: public chemical_element
{
    public:
        yttrium() { }
        ~yttrium() { }

        atomic_number_t atomic_number() const override
        {
            return 39;
        }

        symbol_t symbol() const override
        {
            return "Y";
        }

        name_t name() const override
        {
            return "yttrium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 88.90584;
        }

        state_t state() const override
        {
            return "Transition metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "3";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr]4d^1 5s^2";
        }
};

#endif
