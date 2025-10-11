
undefined8 buffer_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_2);
  if (0 < (int)sVar1) {
    uVar2 = buffer_write_part_0(param_1,param_2,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}

