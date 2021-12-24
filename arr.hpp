#pragma once

namespace kr {
    class Array {
    public:
        Array(int n);
        ~Array();
        void add(int num);
        int getSize();
        int getElem(int i);
        void insert(int iter, int num);
        int summa();
    private:
        int* m_mas;
        int m_n, m_size;

    };
}
