#ifndef _MOVE_H_
#define _MOVE_H_

class Move
{
    private:
        int *data;
    public:
        void set_data_value(int d) {*data = d;}
        int get_data_value() {return *data;}
    // Constructor
        Move(int d);
    // Copy Constructor
        Move(const Move &source);
    // Move Constructor
        Move(Move &&source) noexcept;
    // Destructor
        ~Move();
};

#endif // _MOVE_H_