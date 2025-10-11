
double strtof64(char *__nptr,char **__endptr)

{
  long in_FS_OFFSET;
  double dVar1;
  
  dVar1 = (double)____strtod_l_internal(__nptr,__endptr,0,*(undefined8 *)(in_FS_OFFSET + -0x78));
  return dVar1;
}

