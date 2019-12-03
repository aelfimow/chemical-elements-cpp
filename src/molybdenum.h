#ifdef MOLYBDENUM_H
#error Already included
#else
#define MOLYBDENUM_H


class molybdenum: public chemical_element
{
    public:
        molybdenum() = default;
        ~molybdenum() = default;

        atomic_number_t atomic_number() const override
        {
            return 42;
        }

        symbol_t symbol() const override
        {
            return "Mo";
        }

        name_t name() const override
        {
            return "molybdenum";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 95.95;
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
            return "6";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 4d^5 5s^1";
        }
};

#endif
