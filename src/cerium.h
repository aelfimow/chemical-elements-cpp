#ifdef CERIUM_H
#error Already included
#else
#define CERIUM_H


class cerium: public chemical_element
{
    public:
        cerium() { }
        ~cerium() { }

        atomic_number_t atomic_number() const override
        {
            return 58;
        }

        symbol_t symbol() const override
        {
            return "Ce";
        }

        name_t name() const override
        {
            return "cerium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 140.116;
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
            return "[Xe]4f^1 5d^1 6s^2";
        }
};

#endif
