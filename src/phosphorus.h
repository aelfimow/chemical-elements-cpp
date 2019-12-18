#ifdef PHOSPHORUS_H
#error Already included
#else
#define PHOSPHORUS_H


class phosphorus: public chemical_element
{
    public:
        phosphorus() = default;
        ~phosphorus() = default;

        atomic_number_t atomic_number() const override
        {
            return 15;
        }

        symbol_t symbol() const override
        {
            return "P";
        }

        name_t name() const override
        {
            return "phosphorus";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 30.973761998;
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
            return "[Ne] 3s^2 3p^3";
        }
};

#endif
