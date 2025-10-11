
long * FUN_006c3e40(long *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_006c3c40(param_3);
  if (lVar2 != 0) {
    cVar1 = FUN_006c3d30(param_1);
    if (cVar1 == '\0') {
      lVar2 = FUN_006fda20(param_2,lVar2);
      *param_1 = lVar2;
      if (lVar2 != 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
    }
  }
  return (long *)0x0;
}

