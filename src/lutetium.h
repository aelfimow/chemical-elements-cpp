#ifdef LUTETIUM_H
#error Already included
#else
#define LUTETIUM_H

class lutetium: public chemical_element
{
    public:
        lutetium() { }
        ~lutetium() { }

        atomic_number_t atomic_number() const override
        {
            return 71;
        }

        symbol_t symbol() const override
        {
            return "Lu";
        }

        name_t name() const override
        {
            return "lutetium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 174.9668;
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
            return "[Xe]4f^14 5d^1 6s^2";
        }
};

#endif
