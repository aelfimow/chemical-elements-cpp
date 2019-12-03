#ifdef PROMETHIUM_H
#error Already included
#else
#define PROMETHIUM_H

class promethium: public chemical_element
{
    public:
        promethium() = default;
        ~promethium() = default;

        atomic_number_t atomic_number() const override
        {
            return 61;
        }

        symbol_t symbol() const override
        {
            return "Pm";
        }

        name_t name() const override
        {
            return "promethium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 145;
        }

        state_t state() const override
        {
            return "Lanthanide";
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
            return "[Xe]4f^5 6s^2";
        }
};

#endif
