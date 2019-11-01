#ifdef BERKELIUM_H
#error Already included
#else
#define BERKELIUM_H


class berkelium: public chemical_element
{
    public:
        berkelium() { }
        ~berkelium() { }

        atomic_number_t atomic_number() const override
        {
            return 97;
        }

        symbol_t symbol() const override
        {
            return "Bk";
        }

        name_t name() const override
        {
            return "berkelium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 247;
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
            return "[Rn] 5f^9 7s^2";
        }
};

#endif
