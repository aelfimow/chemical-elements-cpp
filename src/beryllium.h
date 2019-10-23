#ifdef BERYLLIUM_H
#error Already included
#else
#define BERYLLIUM_H


class beryllium: public chemical_element
{
    public:
        beryllium() { }
        ~beryllium() { }

        atomic_number_t atomic_number() const override
        {
            return 4;
        }

        symbol_t symbol() const override
        {
            return "Be";
        }

        name_t name() const override
        {
            return "beryllium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 9.0121831;
        }

        state_t state() const override
        {
            return "Alkaline earth metal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "2: alkaline earth metals";
        }

        electron_config_t electron_config() const override
        {
            return "[He]2s^2";
        }
};

#endif
