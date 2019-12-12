#ifdef BROMINE_H
#error Already included
#else
#define BROMINE_H


class bromine: public chemical_element
{
    public:
        bromine() = default;
        ~bromine() = default;

        atomic_number_t atomic_number() const override
        {
            return 35;
        }

        symbol_t symbol() const override
        {
            return "Br";
        }

        name_t name() const override
        {
            return "bromine";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 79.904;
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
            return "[Ar] 3d^10 4s^2 4p^5";
        }
};

#endif
