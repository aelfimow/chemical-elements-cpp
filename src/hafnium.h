#ifdef HAFNIUM_H
#error Already included
#else
#define HAFNIUM_H


class hafnium: public chemical_element
{
    public:
        hafnium() { }
        ~hafnium() { }

        atomic_number_t atomic_number() const override
        {
            return 72;
        }

        symbol_t symbol() const override
        {
            return "Hf";
        }

        name_t name() const override
        {
            return "hafnium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 178.49;
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
            return "[Xe] 4f^14 5d^2 6s^2";
        }
};

#endif
