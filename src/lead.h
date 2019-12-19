#ifdef LEAD_H
#error Already included
#else
#define LEAD_H


class lead: public chemical_element
{
    public:
        lead() = default;
        ~lead() = default;

        atomic_number_t atomic_number() const override
        {
            return 82;
        }

        symbol_t symbol() const override
        {
            return "Pb";
        }

        name_t name() const override
        {
            return "lead";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 207.2;
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
            return "14";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^10 6s^2 6p^2";
        }
};

#endif
