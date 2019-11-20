#ifdef TUNGSTEN_H
#error Already included
#else
#define TUNGSTEN_H


class tungsten: public chemical_element
{
    public:
        tungsten() { }
        ~tungsten() { }

        atomic_number_t atomic_number() const override
        {
            return 74;
        }

        symbol_t symbol() const override
        {
            return "W";
        }

        name_t name() const override
        {
            return "tungsten";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 183.84;
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
            return "6";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f14 5d^4 6s^2";
        }
};

#endif
