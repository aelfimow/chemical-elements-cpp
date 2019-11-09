#ifdef RUTHERFORDIUM_H
#error Already included
#else
#define RUTHERFORDIUM_H


class rutherfordium: public chemical_element
{
    public:
        rutherfordium() { }
        ~rutherfordium() { }

        atomic_number_t atomic_number() const override
        {
            return 104;
        }

        symbol_t symbol() const override
        {
            return "Rf";
        }

        name_t name() const override
        {
            return "rutherfordium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 267;
        }

        state_t state() const override
        {
            return "Transition metal";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "4";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 4f^14 6d^2 7s^2";
        }
};

#endif
