#ifdef DARMSTADTIUM_H
#error Already included
#else
#define DARMSTADTIUM_H


class darmstadtium: public chemical_element
{
    public:
        darmstadtium() = default;
        ~darmstadtium() = default;

        atomic_number_t atomic_number() const override
        {
            return 110;
        }

        symbol_t symbol() const override
        {
            return "Ds";
        }

        name_t name() const override
        {
            return "darmstadtium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 281;
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
            return "10";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^8 7s^2";
        }
};

#endif
