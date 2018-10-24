
#if !defined(DP_SINGLETON_SINGLE_OBJECT_H_)
#define DP_SINGLETON_SINGLE_OBJECT_H_

class SingleObject {
 public:
  static SingleObject* GetInstance();
  void SayHi();

 private:
  SingleObject() {}

  static SingleObject* instance;
};

#endif  // DP_SINGLETON_SINGLE_OBJECT_H_
