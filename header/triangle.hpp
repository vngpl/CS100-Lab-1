#pragma once

class Triangle {
    private:
        int height;
        int base;
    
    public:
        void set_height(int h);
        void set_base(int b);
        int area();
};