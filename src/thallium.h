#ifdef THALLIUM_H
#error Already included
#else
#define THALLIUM_H


class thallium: public chemical_element
{
    public:
        thallium() = default;
        ~thallium() = default;

        atomic_number_t atomic_number() const override
        {
            return 81;
        }

        symbol_t symbol() const override
        {
            return "Tl";
        }

        name_t name() const override
        {
            return "thallium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 204.38;
        }

        state_t state() const override
        {
            return "Post-transition metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "13";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^10 6s^2 6p^1";
        }
};

#endif
