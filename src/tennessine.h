#ifdef TENNESSINE_H
#error Already included
#else
#define TENNESSINE_H


class tennessine: public chemical_element
{
    public:
        tennessine() = default;
        ~tennessine() = default;

        atomic_number_t atomic_number() const override
        {
            return 117;
        }

        symbol_t symbol() const override
        {
            return "Ts";
        }

        name_t name() const override
        {
            return "tennessine";
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
            return "17";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^10 7s^2 7p^5";
        }
};

#endif
