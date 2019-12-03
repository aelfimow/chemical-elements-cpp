#ifdef CALIFORNIUM_H
#error Already included
#else
#define CALIFORNIUM_H


class californium: public chemical_element
{
    public:
        californium() = default;
        ~californium() = default;

        atomic_number_t atomic_number() const override
        {
            return 98;
        }

        symbol_t symbol() const override
        {
            return "Cf";
        }

        name_t name() const override
        {
            return "californium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 251;
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
            return "[Rn] 5f^10 7s^2";
        }
};

#endif
