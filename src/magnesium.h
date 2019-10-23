#ifdef MAGNESIUM_H
#error Already included
#else
#define MAGNESIUM_H


class magnesium: public chemical_element
{
    public:
        magnesium() { }
        ~magnesium() { }

        atomic_number_t atomic_number() const override
        {
            return 12;
        }

        symbol_t symbol() const override
        {
            return "Mg";
        }

        name_t name() const override
        {
            return "magnesium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 24.305;
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
            return "[Ne]3s^2";
        }
};

#endif
