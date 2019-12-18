#ifdef ANTIMONEY_H
#error Already included
#else
#define ANTIMONEY_H


class antimoney: public chemical_element
{
    public:
        antimoney() = default;
        ~antimoney() = default;

        atomic_number_t atomic_number() const override
        {
            return 51;
        }

        symbol_t symbol() const override
        {
            return "Sb";
        }

        name_t name() const override
        {
            return "antimoney";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 121.760;
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
            return "15: pnictogens";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 4d^10 5s^2 5p^3";
        }
};

#endif
