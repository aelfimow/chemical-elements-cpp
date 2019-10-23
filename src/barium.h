#ifdef BARIUM_H
#error Already included
#else
#define BARIUM_H


class barium: public chemical_element
{
    public:
        barium() { }
        ~barium() { }

        atomic_number_t atomic_number() const override
        {
            return 56;
        }

        symbol_t symbol() const override
        {
            return "Ba";
        }

        name_t name() const override
        {
            return "barium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 137.327;
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
            return "[Xe]6s^2";
        }
};

#endif
