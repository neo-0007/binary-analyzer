
undefined8 * FUN_0063c2e0(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)*param_1;
    if (0xffffffffffffffeU - *(long *)(puVar2 + -6) < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00403998("basic_string::append");
    }
    uVar3 = *(long *)(puVar2 + -6) + param_3;
    if ((*(ulong *)(puVar2 + -4) < uVar3) ||
       (piVar1 = puVar2 + -2, puVar2 = (undefined4 *)*param_1, 0 < *piVar1)) {
      if ((param_2 < puVar2) || (puVar2 + *(long *)(puVar2 + -6) < param_2)) {
        FUN_0063c070(param_1,uVar3);
        puVar2 = (undefined4 *)*param_1;
      }
      else {
        lVar4 = (long)param_2 - (long)puVar2;
        FUN_0063c070(param_1,uVar3);
        puVar2 = (undefined4 *)*param_1;
        param_2 = (undefined4 *)(lVar4 + (long)puVar2);
      }
    }
    if (param_3 == 1) {
      puVar2[*(long *)(puVar2 + -6)] = *param_2;
    }
    else {
      FUN_00771ea0(puVar2 + *(long *)(puVar2 + -6),param_2,param_3,0x3fffffffffffffff);
      puVar2 = (undefined4 *)*param_1;
    }
    if (puVar2 != (undefined4 *)&DAT_009452d8) {
      puVar2[-2] = 0;
      *(ulong *)(puVar2 + -6) = uVar3;
      puVar2[uVar3] = 0;
    }
  }
  return param_1;
}

