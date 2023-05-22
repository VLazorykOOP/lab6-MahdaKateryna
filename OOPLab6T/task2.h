#include <iostream>

// ����������� ������� ���� �������
class Progression {
protected:
    double firstTerm; // ������ ���� �������
    double commonDifference; // ������� �������

public:
    Progression(double firstTerm, double commonDifference)
        : firstTerm(firstTerm), commonDifference(commonDifference) {}

    // ³�������� ������� ��� ���������� ���� �������
    virtual double sum(int n) const = 0;
};

// �������� ���� ��� ����������� �������
class ArithmeticProgression : public Progression {
public:
    ArithmeticProgression(double firstTerm, double commonDifference)
        : Progression(firstTerm, commonDifference) {}

    // ��������� ��������� ������� ���������� ���� �������
    double sum(int n) const override {
        double lastTerm = firstTerm + (n - 1) * commonDifference;
        return (n * (firstTerm + lastTerm)) / 2;
    }
};

// �������� ���� ��� ����������� �������
class GeometricProgression : public Progression {
public:
    GeometricProgression(double firstTerm, double commonRatio)
        : Progression(firstTerm, commonRatio) {}

    // ��������� ��������� ������� ���������� ���� �������
    double sum(int n) const override {
        double lastTerm = firstTerm * pow(commonDifference, n - 1);
        return (firstTerm - lastTerm * commonDifference) / (1 - commonDifference);
    }
};

