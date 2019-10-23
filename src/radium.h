#ifdef RADIUM_H
#error Already included
#else
#define RADIUM_H


class radium: public chemical_element
{
    public:
        radium() { }
        ~radium() { }

        atomic_number_t atomic_number() const override
        {
            return 88;
        }

        symbol_t symbol() const override
        {
            return "Ra";
        }

        name_t name() const override
        {
            return "radium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 226;
        }

        state_t state() const override
        {
            return "Alkaline earth metal";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "2: alkaline earth metals";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn]7s^2";
        }
};

#endif
