#ifdef INDIUM_H
#error Already included
#else
#define INDIUM_H


class indium: public chemical_element
{
    public:
        indium() = default;
        ~indium() = default;

        atomic_number_t atomic_number() const override
        {
            return 49;
        }

        symbol_t symbol() const override
        {
            return "In";
        }

        name_t name() const override
        {
            return "indium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 114.818;
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
            return "[Kr] 4d^10 5s^2 5p^1";
        }
};

#endif
