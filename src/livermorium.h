#ifdef LIVERMORIUM_H
#error Already included
#else
#define LIVERMORIUM_H


class livermorium: public chemical_element
{
    public:
        livermorium() = default;
        ~livermorium() = default;

        atomic_number_t atomic_number() const override
        {
            return 116;
        }

        symbol_t symbol() const override
        {
            return "Lv";
        }

        name_t name() const override
        {
            return "livermorium";
        }

        atomic_mass_t atomic_weight() const override
        {
            return 293;
        }

        state_t state() const override
        {
            return "unknown";
        }

        stability_t stability() const override
        {
            return "radioactive";
        }

        group_t group() const override
        {
            return "16";
        }

        electron_config_t electron_config() const override
        {
            return "[Rn] 5f^14 6d^10 7s^2 7p^4";
        }
};

#endif
