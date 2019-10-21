#ifdef RUBIDIUM_H
#error Already included
#else
#define RUBIDIUM_H


class rubidium: public chemical_element
{
    public:
        rubidium() { }
        ~rubidium() { }

        atomic_number_t atomic_number() const override
        {
            return 37;
        }

        symbol_t symbol() const override
        {
            return "Rb";
        }

        name_t name() const override
        {
            return "rubidium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 85.4678;
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
            return "[Kr]5s^1";
        }
};

#endif
