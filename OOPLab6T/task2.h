#include <iostream>

// Абстрактний базовий клас прогресії
class Progression {
protected:
    double firstTerm; // Перший член прогресії
    double commonDifference; // Постійна прогресії

public:
    Progression(double firstTerm, double commonDifference)
        : firstTerm(firstTerm), commonDifference(commonDifference) {}

    // Віртуальна функція для обчислення суми прогресії
    virtual double sum(int n) const = 0;
};

// Похідний клас для арифметичної прогресії
class ArithmeticProgression : public Progression {
public:
    ArithmeticProgression(double firstTerm, double commonDifference)
        : Progression(firstTerm, commonDifference) {}

    // Реалізація віртуальної функції обчислення суми прогресії
    double sum(int n) const override {
        double lastTerm = firstTerm + (n - 1) * commonDifference;
        return (n * (firstTerm + lastTerm)) / 2;
    }
};

// Похідний клас для геометричної прогресії
class GeometricProgression : public Progression {
public:
    GeometricProgression(double firstTerm, double commonRatio)
        : Progression(firstTerm, commonRatio) {}

    // Реалізація віртуальної функції обчислення суми прогресії
    double sum(int n) const override {
        double lastTerm = firstTerm * pow(commonDifference, n - 1);
        return (firstTerm - lastTerm * commonDifference) / (1 - commonDifference);
    }
};

