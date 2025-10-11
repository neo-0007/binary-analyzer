
undefined8 FUN_00547570(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_4 - 1U < 7) {
    uVar1 = (1L << ((char)param_4 * '\b' & 0x3fU)) + (param_4 - 1U);
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[1] = param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    *param_1 = 0;
    param_1[4] = param_3;
    uVar2 = FUN_00547450(param_1,param_4);
    return uVar2;
  }
  return 0;
}

