// { dg-options "-std=c++1z" }

template<typename T>
  concept bool C() { return __is_class(T); }

template<typename T>
  requires C<T>()
    void f(T x) { }

// Non-dependent args are checked even in dependent scope.
template<typename T>
  void h(T x) {
    f(0); // { dg-error "cannot call" }
  }

int main() {
  f(0); // { dg-error "cannot call" }
}
