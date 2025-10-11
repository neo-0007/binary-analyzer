
undefined8 FUN_005475e0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    *param_1 = param_2;
    lVar1 = -1;
    param_1[1] = 0;
    if (param_3 - 1U < 7) {
      lVar1 = (1L << ((char)param_3 * '\b' & 0x3fU)) + (param_3 - 1U);
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    param_1[4] = lVar1;
    uVar2 = FUN_00547450();
    return uVar2;
  }
  return 0;
}

