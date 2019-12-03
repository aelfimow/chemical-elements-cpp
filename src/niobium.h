#ifdef NIOBIUM_H
#error Already included
#else
#define NIOBIUM_H


class niobium: public chemical_element
{
    public:
        niobium() = default;
        ~niobium() = default;

        atomic_number_t atomic_number() const override
        {
            return 41;
        }

        symbol_t symbol() const override
        {
            return "Nb";
        }

        name_t name() const override
        {
            return "niobium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 92.90637;
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
            return "5";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 4d^4 5s^1";
        }
};

#endif
