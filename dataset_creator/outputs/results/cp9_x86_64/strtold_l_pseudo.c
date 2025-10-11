
double strtold_l(char *__nptr,char **__endptr,__locale_t __loc)

{
  double dVar1;
  
  dVar1 = (double)____strtold_l_internal(__nptr,__endptr,0,__loc);
  return dVar1;
}

