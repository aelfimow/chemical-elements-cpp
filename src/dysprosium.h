#ifdef DYSPROSIUM_H
#error Already included
#else
#define DYSPROSIUM_H

class dysprosium: public chemical_element
{
    public:
        dysprosium() = default;
        ~dysprosium() = default;

        atomic_number_t atomic_number() const override
        {
            return 66;
        }

        symbol_t symbol() const override
        {
            return "Dy";
        }

        name_t name() const override
        {
            return "dysprosium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 162.500;
        }

        state_t state() const override
        {
            return "Lanthanide";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "n/a";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe]4f^10 6s^2";
        }
};

#endif
