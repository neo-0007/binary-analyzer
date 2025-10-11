
long * FUN_00638e20(long *param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  
  if (param_3 == 0) {
    return param_1;
  }
  puVar3 = (undefined1 *)*param_1;
  if (0x3ffffffffffffff9U - *(long *)(puVar3 + -0x18) < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::append");
  }
  uVar2 = *(long *)(puVar3 + -0x18) + param_3;
  if (*(ulong *)(puVar3 + -0x10) < uVar2) {
LAB_00638e66:
    if ((puVar3 <= param_2) && (param_2 <= puVar3 + *(long *)(puVar3 + -0x18))) {
      FUN_00638bc0(param_1,uVar2);
      lVar1 = *param_1;
      param_2 = param_2 + (lVar1 - (long)puVar3);
      puVar3 = (undefined1 *)(lVar1 + *(long *)(lVar1 + -0x18));
      goto joined_r0x00638e8e;
    }
    FUN_00638bc0(param_1,uVar2);
  }
  else if (0 < *(int *)(puVar3 + -8)) {
    puVar3 = (undefined1 *)*param_1;
    goto LAB_00638e66;
  }
  puVar3 = (undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18));
joined_r0x00638e8e:
  if (param_3 == 1) {
    *puVar3 = *param_2;
  }
  else {
    thunk_FUN_00713a50(puVar3,param_2,param_3);
  }
  puVar3 = (undefined1 *)*param_1;
  if (puVar3 != &DAT_009452b8) {
    *(undefined4 *)(puVar3 + -8) = 0;
    *(ulong *)(puVar3 + -0x18) = uVar2;
    puVar3[uVar2] = 0;
  }
  return param_1;
}

