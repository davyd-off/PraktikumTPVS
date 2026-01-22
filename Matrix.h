#pragma once
#include "Vector.h"

namespace CalcLab {

    public ref class Matrix {
    private:
        array<array<double>^>^ data;
        int rows;
        int cols;

    public:
        Matrix(int r, int c) : rows(r), cols(c) {
            data = gcnew array<array<double>^>(r);
            for (int i = 0; i < r; i++) {
                data[i] = gcnew array<double>(c);
            }
        }

        Matrix(array<array<double>^>^ arr) {
            rows = arr->Length;
            if (rows > 0) {
                cols = arr[0]->Length;
            }
            else {
                cols = 0;
            }

            data = gcnew array<array<double>^>(rows);
            for (int i = 0; i < rows; i++) {
                data[i] = gcnew array<double>(cols);
                System::Array::Copy(arr[i], data[i], cols);
            }
        }

        //методы для работы с матрицами
        array<array<double>^>^ GetData() { return data; }
        void SetData(array<array<double>^>^ arr) {
            rows = arr->Length;
            if (rows > 0) {
                cols = arr[0]->Length;
            }
            else {
                cols = 0;
            }

            data = gcnew array<array<double>^>(rows);
            for (int i = 0; i < rows; i++) {
                data[i] = gcnew array<double>(cols);
                System::Array::Copy(arr[i], data[i], cols);
            }
        }

        int GetRows() { return rows; }  
        int GetCols() { return cols; }

        Matrix^ ElementWiseMultiply(Matrix^ other) {    //поэлементное умножение
            if (this->rows != other->rows || this->cols != other->cols) {
                throw gcnew System::ArgumentException("Матрицы должны иметь одинаковые размеры");
            }

            array<array<double>^>^ result = gcnew array<array<double>^>(rows);
            for (int i = 0; i < rows; i++) {
                result[i] = gcnew array<double>(cols);
                for (int j = 0; j < cols; j++) {
                    result[i][j] = this->data[i][j] * other->data[i][j];
                }
            }

            return gcnew Matrix(result);
        }

        Vector^ MultiplyByVector(Vector^ vector) {  //умножение на вектор
            if (this->rows != vector->GetSize()) {
                throw gcnew System::ArgumentException("Количество строк матрицы должно совпадать с размером вектора");
            }

            array<double>^ result = gcnew array<double>(cols);
            for (int j = 0; j < this->cols; j++) {
                double sum = 0.0;
                for (int i = 0; i < this->rows; i++) {
                    sum += this->data[i][j] * vector->GetData()[i];
                }
                result[j] = sum;
            }

            return gcnew Vector(result);
        }

        //вывод, 4 знака после запятой
        virtual System::String^ ToString() override {
            System::String^ result = "";
            for (int i = 0; i < rows; i++) {
                result += "[";
                for (int j = 0; j < cols; j++) {
                    result += data[i][j].ToString("F4");
                    if (j < cols - 1) {
                        result += "\t";
                    }
                }
                result += "]";
                if (i < rows - 1) {
                    result += System::Environment::NewLine;
                }
            }
            return result;
        }
    };
}