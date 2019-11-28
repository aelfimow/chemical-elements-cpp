#ifdef OSMIUM_H
#error Already included
#else
#define OSMIUM_H


class osmium: public chemical_element
{
    public:
        osmium() = default;
        ~osmium() = default;

        atomic_number_t atomic_number() const override
        {
            return 76;
        }

        symbol_t symbol() const override
        {
            return "Os";
        }

        name_t name() const override
        {
            return "osmium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 190.23;
        }

        state_t state() const override
        {
            return "Transition metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "8";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^6 6s^2";
        }
};

#endif
