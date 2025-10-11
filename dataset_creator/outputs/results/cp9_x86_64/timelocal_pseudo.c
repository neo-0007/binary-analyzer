
time_t timelocal(tm *__tp)

{
  time_t tVar1;
  
  tzset();
  tVar1 = __mktime_internal(__tp,localtime_r,&localtime_offset_0);
  return tVar1;
}

