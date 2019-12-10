#ifdef RADON_H
#error Already included
#else
#define RADON_H


class radon: public chemical_element
{
    public:
        radon() = default;
        ~radon() = default;

        atomic_number_t atomic_number() const override
        {
            return 86;
        }

        symbol_t symbol() const override
        {
            return "Rn";
        }

        name_t name() const override
        {
            return "radon";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 222;
        }

        state_t state() const override
        {
            return "Noble gas";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "18: noble gases";
        }

        electron_config_t electron_config() const override
        {
            return "[Xe] 4f^14 5d^10 6s^2 6p^6";
        }
};

#endif
