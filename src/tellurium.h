#ifdef TELLURIUM_H
#error Already included
#else
#define TELLURIUM_H


class tellurium: public chemical_element
{
    public:
        tellurium() = default;
        ~tellurium() = default;

        atomic_number_t atomic_number() const override
        {
            return 52;
        }

        symbol_t symbol() const override
        {
            return "Te";
        }

        name_t name() const override
        {
            return "tellurium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 127.60;
        }

        state_t state() const override
        {
            return "Metalloid";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "16: chalcogens";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 4d^10 5s^2 5p^4";
        }
};

#endif
