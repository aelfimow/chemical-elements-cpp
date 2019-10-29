#ifdef SAMARIUM_H
#error Already included
#else
#define SAMARIUM_H

class samarium: public chemical_element
{
    public:
        samarium() { }
        ~samarium() { }

        atomic_number_t atomic_number() const override
        {
            return 62;
        }

        symbol_t symbol() const override
        {
            return "Sm";
        }

        name_t name() const override
        {
            return "samarium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 150.36;
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
            return "n/a";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe]4f^6 6s^2";
        }
};

#endif
