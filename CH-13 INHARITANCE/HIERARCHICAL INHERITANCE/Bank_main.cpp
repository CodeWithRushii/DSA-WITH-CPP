#include "Bank.cpp"

int main() {
    SBI s1;
    BOB b1;
    ICICI i1;

    s1.setAmountSBI();
    b1.setAmountBOB();
    i1.setAmountICICI();

    s1.getRate();
    b1.getRate();
    i1.getRate();

    return 0;
}
