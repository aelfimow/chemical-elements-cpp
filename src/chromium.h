#ifdef CHROMIUM_H
#error Already included
#else
#define CHROMIUM_H


class chromium: public chemical_element
{
    public:
        chromium() = default;
        ~chromium() = default;

        atomic_number_t atomic_number() const override
        {
            return 24;
        }

        symbol_t symbol() const override
        {
            return "Cr";
        }

        name_t name() const override
        {
            return "chromium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 51.9961;
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
            return "[Ar] 3d^5 4s^1";
        }
};

#endif
