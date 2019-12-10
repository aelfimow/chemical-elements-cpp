#ifdef ARGON_H
#error Already included
#else
#define ARGON_H


class argon: public chemical_element
{
    public:
        argon() = default;
        ~argon() = default;

        atomic_number_t atomic_number() const override
        {
            return 18;
        }

        symbol_t symbol() const override
        {
            return "Ar";
        }

        name_t name() const override
        {
            return "argon";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 39.95;
        }

        state_t state() const override
        {
            return "Noble gas";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "18: noble gases";
        }

        electron_config_t electron_config() const override
        {
            return "[Ne] 3s^2 3p^6";
        }
};

#endif
