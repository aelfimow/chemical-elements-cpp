#ifdef TANTALUM_H
#error Already included
#else
#define TANTALUM_H


class tantalum: public chemical_element
{
    public:
        tantalum() = default;
        ~tantalum() = default;

        atomic_number_t atomic_number() const override
        {
            return 73;
        }

        symbol_t symbol() const override
        {
            return "Ta";
        }

        name_t name() const override
        {
            return "tantalum";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 180.94788;
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
            return "5";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^3 6s^2";
        }
};

#endif
