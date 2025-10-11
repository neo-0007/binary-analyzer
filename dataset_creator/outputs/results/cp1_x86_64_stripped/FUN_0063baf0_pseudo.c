
long * FUN_0063baf0(long *param_1,undefined4 *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)*param_1;
  lVar3 = *(long *)(puVar4 + -6);
  if (0xffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::assign");
  }
  if ((param_2 < puVar4) || (puVar4 + lVar3 < param_2)) {
LAB_0063bb38:
    plVar1 = (long *)FUN_0063ba70(param_1,0,lVar3);
    return plVar1;
  }
  if (0 < (int)puVar4[-2]) {
    lVar3 = *(long *)(*param_1 + -0x18);
    goto LAB_0063bb38;
  }
  puVar4 = (undefined4 *)*param_1;
  uVar2 = (long)param_2 - (long)puVar4 >> 2;
  if (uVar2 < param_3) {
    if (uVar2 == 0) goto LAB_0063bb90;
    if (param_3 != 1) {
      if (param_3 != 0) {
        FUN_00756670(puVar4,param_2,param_3);
        puVar4 = (undefined4 *)*param_1;
      }
      goto LAB_0063bb90;
    }
  }
  else if (param_3 != 1) {
    if (param_3 != 0) {
      FUN_00756660(puVar4,param_2,param_3);
      puVar4 = (undefined4 *)*param_1;
    }
    goto LAB_0063bb90;
  }
  *puVar4 = *param_2;
LAB_0063bb90:
  if (puVar4 != (undefined4 *)&DAT_009452d8) {
    puVar4[-2] = 0;
    *(ulong *)(puVar4 + -6) = param_3;
    puVar4[param_3] = 0;
  }
  return param_1;
}

