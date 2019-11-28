#ifdef RUTHENIUM_H
#error Already included
#else
#define RUTHENIUM_H


class ruthenium: public chemical_element
{
    public:
        ruthenium() = default;
        ~ruthenium() = default;

        atomic_number_t atomic_number() const override
        {
            return 44;
        }

        symbol_t symbol() const override
        {
            return "Ru";
        }

        name_t name() const override
        {
            return "ruthenium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 101.07;
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
            return "[Kr] 4d^7 5s^1";
        }
};

#endif
