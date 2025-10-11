
undefined * FUN_00413c40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  switch(param_1) {
  case 0:
    return &DAT_008ea8c0;
  case 1:
    return &DAT_00902880;
  case 2:
    return &DAT_00903140;
  case 3:
    return &DAT_00903660;
  case 4:
    return &DAT_008ea7c0;
  case 5:
    return &DAT_00902780;
  case 6:
    return &DAT_00903a60;
  case 7:
    return &DAT_00903960;
  case 8:
    return &DAT_00903860;
  case 9:
    return &DAT_00903760;
  }
  if (DAT_0093f9f8 == 0) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_00436480(DAT_0093f9f8);
  if ((ulong)(long)iVar1 <= param_1 - 10U) {
    return (undefined *)0x0;
  }
  puVar2 = (undefined *)FUN_004364a0(DAT_0093f9f8,param_1 - 10U & 0xffffffff);
  return puVar2;
}

