
long * FUN_006386a0(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)*param_1;
  lVar2 = *(long *)(puVar3 + -0x18);
  if (0x3ffffffffffffff9 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::assign");
  }
  if ((param_2 < puVar3) || (puVar3 + lVar2 < param_2)) {
LAB_006386e8:
    plVar1 = (long *)FUN_00638630(param_1,0,lVar2);
    return plVar1;
  }
  if (0 < *(int *)(puVar3 + -8)) {
    lVar2 = *(long *)(*param_1 + -0x18);
    goto LAB_006386e8;
  }
  puVar3 = (undefined1 *)*param_1;
  if ((ulong)((long)param_2 - (long)puVar3) < param_3) {
    if (param_2 == puVar3) goto LAB_00638740;
    if (param_3 != 1) {
      if (param_3 != 0) {
        thunk_FUN_00713610(puVar3,param_2,param_3);
        puVar3 = (undefined1 *)*param_1;
      }
      goto LAB_00638740;
    }
  }
  else if (param_3 != 1) {
    if (param_3 != 0) {
      thunk_FUN_00713a50(puVar3,param_2,param_3);
      puVar3 = (undefined1 *)*param_1;
    }
    goto LAB_00638740;
  }
  *puVar3 = *param_2;
  puVar3 = (undefined1 *)*param_1;
LAB_00638740:
  if (puVar3 != &DAT_009452b8) {
    *(undefined4 *)(puVar3 + -8) = 0;
    *(ulong *)(puVar3 + -0x18) = param_3;
    puVar3[param_3] = 0;
  }
  return param_1;
}

