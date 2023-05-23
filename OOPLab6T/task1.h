#include <iostream>

namespace Task1 {
    // без віртуального успадкування:

    class Base1 {
    protected:
        int data1;
       
    };

    class Base2 {
    protected:
        int data2;
     
    };

    class D1 : protected Base1, protected Base2 {
    protected:
        int d1;
    };

    class D2 : protected Base1 {
    protected:
        int d2;
    };

    class D3 : protected D1 {
    protected:
        int d3;
    };

    class D123 : protected D1, protected D2, protected D3 {
    protected:
        int d123;
    };


    // друга ієрархія з віртуальним успадкуванням:

    class Base1V {
    protected:
        int data1;
    };

    class Base2V {
    protected:
        int data2;
    };

    class D1V : virtual protected Base1V, virtual protected Base2V {
    protected:
        int d1v;
    };

    class D2V : virtual protected Base1V {
    protected:
        int d2v;
    };

    class D3V : virtual protected D1V {
    protected:
        int d3v;
    };

    class D123V : virtual protected D1V, virtual protected D2V, virtual protected D3V {
    protected:
        int d123v;
    };

   
}

