#ifdef SODIUM_H
#error Already included
#else
#define SODIUM_H


class sodium: public chemical_element
{
    public:
        sodium() { }
        ~sodium() { }

        atomic_number_t atomic_number() const override
        {
            return 1;
        }

        symbol_t symbol() const override
        {
            return "Na";
        }

        name_t name() const override
        {
            return "sodium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 22.98976928;
        }

        state_t state() const override
        {
            return "Alkali metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "1: H and alkali metals";
        }

        electron_config_t electron_config() const override
        {
            return "[Ne]3s^1";
        }
};

#endif
