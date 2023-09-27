    #pragma once
    #include <iostream>
    #include <algorithm>
    using namespace std;

    template <class T>
    class Container
    {
    private:
        int size;
        T* values; 
        int capacity;
    public:
        Container() : size(0), values(nullptr), capacity(0) {} 
        Container(T value[], int size); 
        void addValue(const T& newValue); 
        bool deleteValue(const T& valueToDelete);
        void getValue();
        void searchValues(T valueToSearch);
        void sortValues();
    
    };

    template<class T>
    Container<T>::Container(T value[], int size)
    {
        this->size = size;
        this->capacity = size;
        this->values = new T[capacity]; 

        for (int i = 0; i < size; i++)
        {
            this->values[i] = value[i];
        }
    }

    template<class T>
    void Container<T>::addValue(const T& newValue)
    {
        if (size >= capacity) 
        {
            capacity *= 2; 
            T* newValues = new T[capacity]; 

            for (int i = 0; i < size; i++)
            {
                newValues[i] = values[i];
            }

            delete[] values; 
            values = newValues; 
        }

        values[size] = newValue;
        size++;
    }
    template<class T>
    bool Container<T>::deleteValue(const T& valueToDelete)
    {
        for (int i = 0; i < size; i++)
        {
            if (values[i] == valueToDelete)
            {
                for (int j = i; j < size - 1; j++)
                {
                    values[j] = values[j + 1];
                }

                size--;

                if (size < capacity / 2)
                {
                    capacity /= 2;
                    T* newValues = new T[capacity];
                    for (int k = 0; k < size; k++)
                    {
                        newValues[k] = values[k];
                    }
                    delete[] values;
                    values = newValues;
                }

                return true; 
            }
        }

        return false; 
    }
    template<class T>
    void Container<T>::getValue() {
        for (int i = 0; i < size; i++)
        {
            cout << values[i] << " ";
        }
        cout << endl;
    }
    template<class T>
    void Container<T>::searchValues(T valueToSearch) {
        for (int i = 0; i < size; i++)
        {
            if (values[i] == valueToSearch)
            {
                cout << "Value found at index " << i << endl;
                return;
            }
        }
        cout << "Value not found" << endl;
    }
    template<class T>
    void Container<T>::sortValues() {
        std::sort(values, values + size);
    }

    template<>
    void Container<const char*>::sortValues()
    {
        std::sort(values, values + size, [](const char* a, const char* b) {
            return std::strcmp(a, b) < 0;
            });
    }