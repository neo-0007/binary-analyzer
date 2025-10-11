
long * FUN_0063c460(long *param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_2 != 0) {
    lVar2 = *param_1;
    if (0xffffffffffffffeU - *(long *)(lVar2 + -0x18) < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00403998("basic_string::append");
    }
    uVar1 = param_2 + *(long *)(lVar2 + -0x18);
    if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < *(int *)(lVar2 + -8))) {
      FUN_0063c070(param_1,uVar1);
    }
    puVar3 = (undefined *)*param_1;
    if (param_2 == 1) {
      *(undefined4 *)(puVar3 + *(long *)(puVar3 + -0x18) * 4) = param_3;
    }
    else {
      FUN_00771ff0(puVar3 + *(long *)(puVar3 + -0x18) * 4,param_3,param_2,0x3fffffffffffffff);
      puVar3 = (undefined *)*param_1;
    }
    if (puVar3 != &DAT_009452d8) {
      *(undefined4 *)(puVar3 + -8) = 0;
      *(ulong *)(puVar3 + -0x18) = uVar1;
      *(undefined4 *)(puVar3 + uVar1 * 4) = 0;
    }
  }
  return param_1;
}

