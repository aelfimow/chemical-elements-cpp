#ifdef FRANCIUM_H
#error Already included
#else
#define FRANCIUM_H


class francium: public chemical_element
{
    public:
        francium() { }
        ~francium() { }

        atomic_number_t atomic_number() const override
        {
            return 87;
        }

        symbol_t symbol() const override
        {
            return "Fr";
        }

        name_t name() const override
        {
            return "francium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 223;
        }

        state_t state() const override
        {
            return "Alkali metal";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "1: H and alkali metals";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn]7s^1";
        }
};

#endif
