#ifdef LITHIUM_H
#error Already included
#else
#define LITHIUM_H


class lithium: public chemical_element
{
    public:
        lithium() { }
        ~lithium() { }

        atomic_number_t atomic_number() const override
        {
            return 1;
        }

        symbol_t symbol() const override
        {
            return "Li";
        }

        name_t name() const override
        {
            return "lithium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 6.941;
        }

        state_t state() const override
        {
            return "Alkali metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "1: H and alkali metals";
        }

        electron_config_t electron_config() const override
        {
            return "2s^1";
        }
};

#endif
