#ifdef XENON_H
#error Already included
#else
#define XENON_H


class xenon: public chemical_element
{
    public:
        xenon() = default;
        ~xenon() = default;

        atomic_number_t atomic_number() const override
        {
            return 54;
        }

        symbol_t symbol() const override
        {
            return "Xe";
        }

        name_t name() const override
        {
            return "xenon";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 131.293;
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
            return "[Kr] 4d^10 5s^2 5p^6";
        }
};

#endif
