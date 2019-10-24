#ifdef LANTHANUM_H
#error Already included
#else
#define LANTHANUM_H


class lanthanum: public chemical_element
{
    public:
        lanthanum() { }
        ~lanthanum() { }

        atomic_number_t atomic_number() const override
        {
            return 57;
        }

        symbol_t symbol() const override
        {
            return "La";
        }

        name_t name() const override
        {
            return "lanthanum";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 138.90547;
        }

        state_t state() const override
        {
            return "Lanthanide";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "3";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe]5d^1 6s^2";
        }
};

#endif
