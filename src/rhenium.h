#ifdef RHENIUM_H
#error Already included
#else
#define RHENIUM_H


class rhenium: public chemical_element
{
    public:
        rhenium() = default;
        ~rhenium() = default;

        atomic_number_t atomic_number() const override
        {
            return 75;
        }

        symbol_t symbol() const override
        {
            return "Re";
        }

        name_t name() const override
        {
            return "rhenium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 186.207;
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
            return "7";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^5 6s^2";
        }
};

#endif
