class Vector {
    public:
        Vector(int s) : elem{new double[s]}, sz{s}{}
        double& operator[](int i) {return elem[i];}
        int size() {return sz;}
        ~Vector() {
            delete[] elem;
        }

    private:
        double* elem; 
        int  sz;
};
