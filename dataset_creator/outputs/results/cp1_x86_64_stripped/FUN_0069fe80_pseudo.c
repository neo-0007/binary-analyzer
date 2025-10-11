
ulong FUN_0069fe80(long *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[1];
  if (uVar1 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                 param_4,uVar1);
  }
  uVar2 = uVar1 - param_4;
  if (param_3 < uVar1 - param_4) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      *param_2 = *(undefined1 *)(param_4 + *param_1);
      return 1;
    }
    thunk_FUN_00713a50(param_2,(undefined1 *)(param_4 + *param_1),uVar2);
  }
  return uVar2;
}

