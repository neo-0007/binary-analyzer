
tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)__tz_convert(*__timer,0,_tmbuf);
  return ptVar1;
}

