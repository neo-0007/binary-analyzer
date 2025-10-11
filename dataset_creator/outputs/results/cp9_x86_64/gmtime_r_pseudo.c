
tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)__tz_convert(*__timer,0,__tp);
  return ptVar1;
}

