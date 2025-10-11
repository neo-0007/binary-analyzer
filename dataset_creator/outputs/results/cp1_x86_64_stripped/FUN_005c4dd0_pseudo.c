
undefined8 FUN_005c4dd0(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if ((((int)param_2[2] == 0) || (iVar2 = FUN_004ab7e0(param_1,&DAT_0080b56c,1), iVar2 == 1)) &&
     ((iVar2 = FUN_004b7ba0(param_2), iVar2 == 0 ||
      (iVar2 = FUN_004ab7e0(param_1,"0",1), iVar2 == 1)))) {
    lVar1 = param_2[1];
    uVar4 = (int)lVar1 - 1;
    if (-1 < (int)uVar4) {
      lVar6 = (long)(int)uVar4 << 3;
      uVar3 = 0;
      do {
        iVar2 = 0x3c;
        do {
          uVar5 = (uint)(*(ulong *)(*param_2 + lVar6) >> ((byte)iVar2 & 0x3f)) & 0xf;
          uVar3 = uVar3 | uVar5;
          if ((uVar3 != 0) &&
             (uVar3 = FUN_004ab7e0(param_1,"0123456789ABCDEF" + (int)uVar5,1), uVar3 != 1)) {
            return 0;
          }
          iVar2 = iVar2 + -4;
        } while (iVar2 != -4);
        lVar6 = lVar6 + -8;
      } while (((long)(int)lVar1 - (ulong)uVar4) * 8 + -0x10 != lVar6);
    }
    return 1;
  }
  return 0;
}

