#ifdef ZIRKONIUM_H
#error Already included
#else
#define ZIRKONIUM_H


class zirkonium: public chemical_element
{
    public:
        zirkonium() { }
        ~zirkonium() { }

        atomic_number_t atomic_number() const override
        {
            return 40;
        }

        symbol_t symbol() const override
        {
            return "Zr";
        }

        name_t name() const override
        {
            return "zirkonium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 91.224;
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
            return "4";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 4d^2 5s^2";
        }
};

#endif
