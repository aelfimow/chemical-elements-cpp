#ifdef LAWRENCIUM_H
#error Already included
#else
#define LAWRENCIUM_H


class lawrencium: public chemical_element
{
    public:
        lawrencium() { }
        ~lawrencium() { }

        atomic_number_t atomic_number() const override
        {
            return 103;
        }

        symbol_t symbol() const override
        {
            return "Lr";
        }

        name_t name() const override
        {
            return "lawrencium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 266;
        }

        state_t state() const override
        {
            return "Actinide";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "n/a";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 7s^2 7p1";
        }
};

#endif
