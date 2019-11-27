#ifdef TECHNETIUM_H
#error Already included
#else
#define TECHNETIUM_H


class technetium: public chemical_element
{
    public:
        technetium() = default;
        ~technetium() = default;

        atomic_number_t atomic_number() const override
        {
            return 43;
        }

        symbol_t symbol() const override
        {
            return "Tc";
        }

        name_t name() const override
        {
            return "technetium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 97;
        }

        state_t state() const override
        {
            return "Transition metal";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "7";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 4d^5 5s^2";
        }
};

#endif
