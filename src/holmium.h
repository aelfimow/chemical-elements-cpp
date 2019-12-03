#ifdef HOLMIUM_H
#error Already included
#else
#define HOLMIUM_H

class holmium: public chemical_element
{
    public:
        holmium() = default;
        ~holmium() = default;

        atomic_number_t atomic_number() const override
        {
            return 67;
        }

        symbol_t symbol() const override
        {
            return "Ho";
        }

        name_t name() const override
        {
            return "holmium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 164.930328;
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
            return "[Xe]4f^11 6s^2";
        }
};

#endif
