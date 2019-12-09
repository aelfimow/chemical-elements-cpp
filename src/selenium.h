#ifdef SELENIUM_H
#error Already included
#else
#define SELENIUM_H


class selenium: public chemical_element
{
    public:
        selenium() = default;
        ~selenium() = default;

        atomic_number_t atomic_number() const override
        {
            return 34;
        }

        symbol_t symbol() const override
        {
            return "Se";
        }

        name_t name() const override
        {
            return "selenium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 78.971;
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
            return "16";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^10 4s^2 4p^4";
        }
};

#endif
