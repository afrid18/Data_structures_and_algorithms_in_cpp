class Counter {
    public:
        Counter();
        int getCount();
        void increaseBy(int x);
    private:
        int count;
};

Counter::Counter() {
    count = 0;
}

int Counter::getCount() {
    return count;
}

void Counter::increaseBy(int x) {
    count += x;
}


