#ifdef FLUORINE_H
#error Already included
#else
#define FLUORINE_H


class fluorine: public chemical_element
{
    public:
        fluorine() = default;
        ~fluorine() = default;

        atomic_number_t atomic_number() const override
        {
            return 9;
        }

        symbol_t symbol() const override
        {
            return "F";
        }

        name_t name() const override
        {
            return "fluorine";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 18.998403163;
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
            return "[He] 2s^2 2p^5";
        }
};

#endif
