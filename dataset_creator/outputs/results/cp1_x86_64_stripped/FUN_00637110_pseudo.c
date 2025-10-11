
ulong FUN_00637110(long *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (uVar1 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                 param_4,uVar1);
  }
  uVar3 = uVar1 - param_4;
  if (param_3 < uVar1 - param_4) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    puVar2 = (undefined1 *)(*param_1 + param_4);
    if (uVar3 == 1) {
      *param_2 = *puVar2;
      return 1;
    }
    thunk_FUN_00713a50(param_2,puVar2,uVar3);
  }
  return uVar3;
}

