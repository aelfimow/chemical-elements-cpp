#ifdef ASTATINE_H
#error Already included
#else
#define ASTATINE_H


class astatine: public chemical_element
{
    public:
        astatine() = default;
        ~astatine() = default;

        atomic_number_t atomic_number() const override
        {
            return 85;
        }

        symbol_t symbol() const override
        {
            return "At";
        }

        name_t name() const override
        {
            return "astatine";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 210;
        }

        state_t state() const override
        {
            return "Metalloid";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "17: halogens";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^10 6s^2 6p^5";
        }
};

#endif
