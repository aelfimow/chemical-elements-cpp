#ifdef MOSCOVIUM_H
#error Already included
#else
#define MOSCOVIUM_H


class moscovium: public chemical_element
{
    public:
        moscovium() = default;
        ~moscovium() = default;

        atomic_number_t atomic_number() const override
        {
            return 115;
        }

        symbol_t symbol() const override
        {
            return "Mc";
        }

        name_t name() const override
        {
            return "moscovium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 290;
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
            return "15";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^10 7s^2 7p^3";
        }
};

#endif
