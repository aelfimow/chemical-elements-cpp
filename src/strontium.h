#ifdef STRNTIUM_H
#error Already included
#else
#define STRNTIUM_H


class strontium: public chemical_element
{
    public:
        strontium() { }
        ~strontium() { }

        atomic_number_t atomic_number() const override
        {
            return 38;
        }

        symbol_t symbol() const override
        {
            return "Sr";
        }

        name_t name() const override
        {
            return "strontium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 87.62;
        }

        state_t state() const override
        {
            return "Alkaline earth metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "2: alkaline earth metals";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr]5s^2";
        }
};

#endif
