
long * FUN_0063c200(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(*param_2 + -0x18);
  if (param_3 <= uVar4) {
    uVar5 = uVar4 - param_3;
    if (param_4 < uVar4 - param_3) {
      uVar5 = param_4;
    }
    if (uVar5 != 0) {
      lVar2 = *param_1;
      uVar4 = *(long *)(lVar2 + -0x18) + uVar5;
      if ((*(ulong *)(lVar2 + -0x10) < uVar4) || (0 < *(int *)(lVar2 + -8))) {
        FUN_0063c070(param_1,uVar4);
      }
      puVar1 = (undefined4 *)(*param_2 + param_3 * 4);
      puVar3 = (undefined *)*param_1;
      if (uVar5 == 1) {
        *(undefined4 *)(puVar3 + *(long *)(puVar3 + -0x18) * 4) = *puVar1;
      }
      else {
        FUN_00771ea0(puVar3 + *(long *)(puVar3 + -0x18) * 4,puVar1,uVar5,0x3fffffffffffffff);
        puVar3 = (undefined *)*param_1;
      }
      if (puVar3 != &DAT_009452d8) {
        *(undefined4 *)(puVar3 + -8) = 0;
        *(ulong *)(puVar3 + -0x18) = uVar4;
        *(undefined4 *)(puVar3 + uVar4 * 4) = 0;
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::append",
               param_3,uVar4);
}

