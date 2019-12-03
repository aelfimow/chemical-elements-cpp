#ifdef TITANIUM_H
#error Already included
#else
#define TITANIUM_H


class titanium: public chemical_element
{
    public:
        titanium() = default;
        ~titanium() = default;

        atomic_number_t atomic_number() const override
        {
            return 22;
        }

        symbol_t symbol() const override
        {
            return "Ti";
        }

        name_t name() const override
        {
            return "titanium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 47.867;
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
            return "4";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^2 4s^2";
        }
};

#endif
