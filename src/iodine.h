#ifdef IODINE_H
#error Already included
#else
#define IODINE_H


class iodine: public chemical_element
{
    public:
        iodine() = default;
        ~iodine() = default;

        atomic_number_t atomic_number() const override
        {
            return 53;
        }

        symbol_t symbol() const override
        {
            return "I";
        }

        name_t name() const override
        {
            return "iodine";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 126.90447;
        }

        state_t state() const override
        {
            return "Reactive nonmetal";
        }

        stability_t stability() const override
        {
            return "stable";
        }

        group_t group() const override
        {
            return "17: halogens";
        }

        electron_config_t electron_config() const override
        {
            return "[Kr] 3d^10 5s^2 5p^5";
        }
};

#endif
