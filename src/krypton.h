#ifdef KRYPTON_H
#error Already included
#else
#define KRYPTON_H


class krypton: public chemical_element
{
    public:
        krypton() = default;
        ~krypton() = default;

        atomic_number_t atomic_number() const override
        {
            return 36;
        }

        symbol_t symbol() const override
        {
            return "Kr";
        }

        name_t name() const override
        {
            return "krypton";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 83.798;
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
            return "18";
        }

        electron_config_t electron_config() const override
        {
            return "[Ar] 3d^10 4s^2 4p^6";
        }
};

#endif
