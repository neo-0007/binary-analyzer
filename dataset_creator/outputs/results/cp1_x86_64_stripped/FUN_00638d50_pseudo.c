
long * FUN_00638d50(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(*param_2 + -0x18);
  if (param_3 <= uVar2) {
    uVar4 = uVar2 - param_3;
    if (param_4 < uVar2 - param_3) {
      uVar4 = param_4;
    }
    if (uVar4 != 0) {
      lVar1 = *param_1;
      uVar2 = *(long *)(lVar1 + -0x18) + uVar4;
      if ((*(ulong *)(lVar1 + -0x10) < uVar2) || (0 < *(int *)(lVar1 + -8))) {
        FUN_00638bc0(param_1,uVar2);
      }
      puVar3 = (undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18));
      if (uVar4 == 1) {
        *puVar3 = *(undefined1 *)(param_3 + *param_2);
      }
      else {
        thunk_FUN_00713a50(puVar3,(undefined1 *)(param_3 + *param_2),uVar4);
      }
      puVar3 = (undefined1 *)*param_1;
      if (puVar3 != &DAT_009452b8) {
        *(undefined4 *)(puVar3 + -8) = 0;
        *(ulong *)(puVar3 + -0x18) = uVar2;
        puVar3[uVar2] = 0;
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::append",
               param_3,uVar2);
}

