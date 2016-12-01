//平方根倒数速算算法
//http://blog.jobbole.com/105295/
//https://zh.wikipedia.org/wiki/%E5%B9%B3%E6%96%B9%E6%A0%B9%E5%80%92%E6%95%B0%E9%80%9F%E7%AE%97%E6%B3%95


float FastInvSqrt(float x) {
  float xhalf = 0.5f * x;
  int i = *(int*)&x;         
  i = 0x5f3759df - (i >> 1);
  x = *(float*)&i;
  x = x*(1.5f-(xhalf*x*x));    //牛顿法迭代来提高精度
  return x;
}
