void f(Object obj)             // pass by value
void f(Object& obj)            // pass by reference
void f(Object* obj)            // pass by raw pointer
void f(Object&& obj)           // pass by rvalue
void f(shared_ptr<Object> obj) // pass by shared pointer
void f(unique_ptr<Object> obj) // pass by unique pointer

void f(shared_ptr<Object>  or unique_ptr<Object> obj) // ??

void f(const Object* obj)       // object is immutable
void f(Object* const obj)       // pointer is immutable
void f(const Object* const obj) // both are immutable

void f(Object const* obj)       // what is immutable?

void f(shared_ptr<Object>& obj) // pass shared pointer
                                // by reference