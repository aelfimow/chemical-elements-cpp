#ifdef CALCIUM_H
#error Already included
#else
#define CALCIUM_H


class calcium: public chemical_element
{
    public:
        calcium() { }
        ~calcium() { }

        atomic_number_t atomic_number() const override
        {
            return 20;
        }

        symbol_t symbol() const override
        {
            return "Ca";
        }

        name_t name() const override
        {
            return "calcium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 40.078;
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
            return "[Ar]4s^2";
        }
};

#endif
