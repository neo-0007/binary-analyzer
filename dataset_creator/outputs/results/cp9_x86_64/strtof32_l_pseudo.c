
float strtof32_l(char *__nptr,char **__endptr,__locale_t __loc)

{
  float fVar1;
  
  fVar1 = (float)____strtof_l_internal(__nptr,__endptr,0,__loc);
  return fVar1;
}

