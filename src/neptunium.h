#ifdef NEPTUNIUM_H
#error Already included
#else
#define NEPTUNIUM_H


class neptunium: public chemical_element
{
    public:
        neptunium() { }
        ~neptunium() { }

        atomic_number_t atomic_number() const override
        {
            return 93;
        }

        symbol_t symbol() const override
        {
            return "Np";
        }

        name_t name() const override
        {
            return "neptunium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 237;
        }

        state_t state() const override
        {
            return "Actinide";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "n/a";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^4 6d^1 7s^2";
        }
};

#endif
