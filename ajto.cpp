class Ajto {
    bool irany;
    int meret;

public:
    Ajto(bool irany, int meret): irany(irany), meret(meret) {}

    Ajto& operator!() {
        irany = !irany;
        return *this;
    }
};
