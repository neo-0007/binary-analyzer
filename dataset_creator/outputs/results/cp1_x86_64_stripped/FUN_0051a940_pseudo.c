
undefined8 FUN_0051a940(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((param_1 == 0) || (param_2 == 0 && *(long *)(param_1 + 0xd8) == 0)) ||
     ((param_3 != 0 && (iVar3 = FUN_004222c0(DAT_00941008), iVar3 == 0)))) {
    return 0;
  }
  lVar1 = DAT_00941028;
  lVar2 = DAT_00941028;
  if (param_2 == 0) {
LAB_0051a9d1:
    if (lVar1 == 0) {
      lVar2 = param_1;
      if (DAT_00941020 == 0) goto LAB_0051a9f7;
    }
    else if ((DAT_00941020 != 0) && (*(long *)(DAT_00941020 + 0xd0) == 0)) {
      *(long *)(DAT_00941020 + 0xd0) = param_1;
      lVar2 = DAT_00941028;
LAB_0051a9f7:
      DAT_00941028 = lVar2;
      *(long *)(param_1 + 200) = DAT_00941020;
      uVar4 = 1;
      DAT_00941020 = param_1;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      goto joined_r0x0051aa19;
    }
  }
  else {
    for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xc0)) {
      if (param_2 == *(long *)(lVar2 + 0xd8)) goto LAB_0051a9a5;
    }
    if (*(long *)(param_1 + 0xd8) == 0) {
      *(long *)(param_1 + 0xd8) = param_2;
      goto LAB_0051a9d1;
    }
  }
LAB_0051a9a5:
  uVar4 = 0;
joined_r0x0051aa19:
  if (param_3 != 0) {
    FUN_004222e0(DAT_00941008);
    return uVar4;
  }
  return uVar4;
}

