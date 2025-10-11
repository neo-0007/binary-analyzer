
float strtof32(char *__nptr,char **__endptr)

{
  long in_FS_OFFSET;
  float fVar1;
  
  fVar1 = (float)____strtof_l_internal(__nptr,__endptr,0,*(undefined8 *)(in_FS_OFFSET + -0x78));
  return fVar1;
}

