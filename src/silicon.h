#ifdef SILICON_H
#error Already included
#else
#define SILICON_H


class silicon: public chemical_element
{
    public:
        silicon() = default;
        ~silicon() = default;

        atomic_number_t atomic_number() const override
        {
            return 14;
        }

        symbol_t symbol() const override
        {
            return "Si";
        }

        name_t name() const override
        {
            return "silicon";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 28.085;
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
            return "14";
        }

        electron_config_t electron_config() const override
        {
            return "[Ne] 3s^2 3p^2";
        }
};

#endif
