#ifdef BISMUTH_H
#error Already included
#else
#define BISMUTH_H


class bismuth: public chemical_element
{
    public:
        bismuth() = default;
        ~bismuth() = default;

        atomic_number_t atomic_number() const override
        {
            return 83;
        }

        symbol_t symbol() const override
        {
            return "Bi";
        }

        name_t name() const override
        {
            return "bismuth";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 208.98040;
        }

        state_t state() const override
        {
            return "Post-transition metal";
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
            return "[Xe] 4f^14 5d^10 6s^2 6p^3";
        }
};

#endif
