
void FUN_00770910(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_2 != (long *)0x0) {
    puVar1 = (undefined *)*param_2;
    if (puVar1 != (undefined *)0x0) {
      lVar2 = thunk_FUN_00712bd0(puVar1,0x2f);
      PTR_DAT_0093ea18 = puVar1;
      if (lVar2 != 0) {
        PTR_DAT_0093ea18 = (undefined *)(lVar2 + 1);
      }
      PTR_DAT_0093ea20 = (undefined *)*param_2;
    }
    return;
  }
  return;
}

