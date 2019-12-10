#ifdef NEON_H
#error Already included
#else
#define NEON_H


class neon: public chemical_element
{
    public:
        neon() = default;
        ~neon() = default;

        atomic_number_t atomic_number() const override
        {
            return 10;
        }

        symbol_t symbol() const override
        {
            return "Ne";
        }

        name_t name() const override
        {
            return "neon";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 20.1797;
        }

        state_t state() const override
        {
            return "Noble gas";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "18: noble gases";
        }

        electron_config_t electron_config() const override
        {
            return "[He] 2s^2 2p^6";
        }
};

#endif
