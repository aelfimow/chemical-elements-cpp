#ifdef CHLORINE_H
#error Already included
#else
#define CHLORINE_H


class chlorine: public chemical_element
{
    public:
        chlorine() = default;
        ~chlorine() = default;

        atomic_number_t atomic_number() const override
        {
            return 17;
        }

        symbol_t symbol() const override
        {
            return "Cl";
        }

        name_t name() const override
        {
            return "chlorine";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 35.45;
        }

        state_t state() const override
        {
            return "Reactive nonmetal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "17: halogens";
        }

        electron_config_t electron_config() const override
        {
            return "[Ne] 2s^2 3p^5";
        }
};

#endif
