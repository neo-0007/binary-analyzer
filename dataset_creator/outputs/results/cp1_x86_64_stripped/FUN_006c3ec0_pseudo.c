
undefined8 * FUN_006c3ec0(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_006c3d30();
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\0') {
      *param_1 = 0;
      return param_1;
    }
    iVar2 = FUN_006fd190(*param_1);
    *param_1 = 0;
    if (iVar2 == 0) {
      return param_1;
    }
  }
  return (undefined8 *)0x0;
}

