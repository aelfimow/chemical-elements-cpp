#ifdef ARSENIC_H
#error Already included
#else
#define ARSENIC_H


class arsenic: public chemical_element
{
    public:
        arsenic() = default;
        ~arsenic() = default;

        atomic_number_t atomic_number() const override
        {
            return 33;
        }

        symbol_t symbol() const override
        {
            return "As";
        }

        name_t name() const override
        {
            return "arsenic";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 74.921595;
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
            return "15";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^10 4s^2 4p^3";
        }
};

#endif
