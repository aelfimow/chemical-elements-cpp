#ifdef OGANESSON_H
#error Already included
#else
#define OGANESSON_H


class oganesson: public chemical_element
{
    public:
        oganesson() = default;
        ~oganesson() = default;

        atomic_number_t atomic_number() const override
        {
            return 118;
        }

        symbol_t symbol() const override
        {
            return "Og";
        }

        name_t name() const override
        {
            return "oganesson";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 294;
        }

        state_t state() const override
        {
            return "unknown";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "18";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^10 7s^2 7p^6";
        }
};

#endif
