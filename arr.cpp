
#include "arr.hpp"
#include <iostream>
namespace kr {

   // 1.	��������� �������
        Array::Array(int n) {
        m_n = n;//���-�� ��������� � �������?
        m_mas = new int[m_n];
        m_size = 0;
    }

   //    2.	���������� �������� � �����
        Array::~Array() {
        delete[] m_mas;
    }

  //  3.	���������� �������� �� �������
        void Array::add(int num) {
        m_mas[m_size] = num;
        std::cout << m_mas[m_size];
        m_size++;
    }

   // 4.	��������� �������� �� �������
        int Array::getSize() { return m_size; }
    int Array::getElem(int i) { return m_mas[i]; }
    void Array::insert(int iter, int num) {
        for (int i = 0; i < m_size + 1; i++) {
            for (int j = m_size + 1; j > i; j--) {
                m_mas[j + 1] = m_mas[j];
            }
            m_mas[iter] = num;
        }
        m_size += 1;
    }
   // 5.  ����� ��������� 
        int Array::summa() 
        {
        int sum = 0;
        for (int i = 0; i < m_size; i++) 
        {   
            sum += m_mas[i];
        }

        return sum;
       }
}