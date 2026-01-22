#pragma once

namespace CalcLab {

    public ref class Scalar {
    private:
        double value;

    public:
        Scalar(double val) : value(val) {}
        Scalar() : value(0) {} 

        double GetValue() { return value; }     //методы для работы со скалярами
        void SetValue(double val) { value = val; }

        Scalar^ Multiply(Scalar^ other) {       //математические операции
            return gcnew Scalar(this->value * other->value);
        }

        Scalar^ Power(Scalar^ other) {
            return gcnew Scalar(System::Math::Pow(this->value, other->value));
        }

        virtual System::String^ ToString() override {   //вывод, 4 знака после запятой
            return value.ToString("F4");
        }
    };
}