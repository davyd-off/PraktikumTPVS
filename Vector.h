#pragma once

namespace CalcLab {

    public ref class Vector {
    private:
        array<double>^ data;

    public:
        Vector(array<double>^ arr) : data(arr) {}

        array<double>^ GetData() { return data; }   //методы для работы с векторами
        void SetData(array<double>^ arr) { data = arr; }
        int GetSize() { return data->Length; }

        //математические операции
        Vector^ ElementWiseMultiply(Vector^ other) {
            if (this->data->Length != other->data->Length) {
                throw gcnew System::ArgumentException("Векторы должны иметь одинаковую длину");
            }

            array<double>^ result = gcnew array<double>(this->data->Length);
            for (int i = 0; i < this->data->Length; i++) {
                result[i] = this->data[i] * other->data[i];
            }

            return gcnew Vector(result);
        }

        //вывод, 4 знака после запятой
        virtual System::String^ ToString() override {
            System::String^ result = "[";
            for (int i = 0; i < data->Length; i++) {
                result += data[i].ToString("F4");
                if (i < data->Length - 1) {
                    result += ", ";
                }
            }
            result += "]";
            return result;
        }
    };
}