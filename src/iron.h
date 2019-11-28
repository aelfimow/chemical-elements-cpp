#ifdef IRON_H
#error Already included
#else
#define IRON_H


class iron: public chemical_element
{
    public:
        iron() = default;
        ~iron() = default;

        atomic_number_t atomic_number() const override
        {
            return 26;
        }

        symbol_t symbol() const override
        {
            return "Fe";
        }

        name_t name() const override
        {
            return "iron";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 55.845;
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
            return "8";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^6 4s^2";
        }
};

#endif
