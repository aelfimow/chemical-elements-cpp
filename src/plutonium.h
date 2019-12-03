#ifdef PLUTONIUM_H
#error Already included
#else
#define PLUTONIUM_H


class plutonium: public chemical_element
{
    public:
        plutonium() = default;
        ~plutonium() = default;

        atomic_number_t atomic_number() const override
        {
            return 94;
        }

        symbol_t symbol() const override
        {
            return "Pu";
        }

        name_t name() const override
        {
            return "plutonium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 244;
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
            return "[Rn] 5f^6 7s^2";
        }
};

#endif
