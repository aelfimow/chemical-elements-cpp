#ifdef GERMANIUM_H
#error Already included
#else
#define GERMANIUM_H


class germanium: public chemical_element
{
    public:
        germanium() = default;
        ~germanium() = default;

        atomic_number_t atomic_number() const override
        {
            return 32;
        }

        symbol_t symbol() const override
        {
            return "Ge";
        }

        name_t name() const override
        {
            return "germanium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 72.630;
        }

        state_t state() const override
        {
            return "Metalloid";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "14";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^10 4s^2 4p^2";
        }
};

#endif
