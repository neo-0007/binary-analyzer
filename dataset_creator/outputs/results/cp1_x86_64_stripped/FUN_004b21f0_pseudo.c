
char * FUN_004b21f0(long *param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  
  iVar4 = FUN_004b7ba0();
  if (iVar4 == 0) {
    uVar8 = 0;
    pcVar5 = (char *)FUN_0041ad90((long)((int)param_1[1] * 0x10 + 2),"../crypto/bn/bn_conv.c",0x19);
    if (pcVar5 == (char *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_conv.c",0x1b,"BN_bn2hex");
      FUN_0051f8f0(3,0xc0100,0);
    }
    else {
      pcVar10 = pcVar5;
      if ((int)param_1[2] != 0) {
        *pcVar5 = '-';
        pcVar10 = pcVar5 + 1;
      }
      lVar3 = param_1[1];
      uVar6 = (int)lVar3 - 1;
      if (-1 < (int)uVar6) {
        lVar11 = (long)(int)uVar6 << 3;
        do {
          iVar4 = 0x38;
          pcVar9 = pcVar10;
          do {
            uVar2 = (uint)(*(ulong *)(*param_1 + lVar11) >> ((byte)iVar4 & 0x3f));
            uVar7 = uVar2 & 0xff;
            uVar8 = uVar8 | uVar7;
            pcVar10 = pcVar9;
            if (uVar8 != 0) {
              pcVar10 = pcVar9 + 2;
              uVar8 = 1;
              cVar1 = "0123456789ABCDEF"[(int)uVar7 >> 4];
              pcVar9[1] = "0123456789ABCDEF"[uVar2 & 0xf];
              *pcVar9 = cVar1;
            }
            iVar4 = iVar4 + -8;
            pcVar9 = pcVar10;
          } while (iVar4 != -8);
          lVar11 = lVar11 + -8;
        } while (((long)(int)lVar3 - (ulong)uVar6) * 8 + -0x10 != lVar11);
      }
      *pcVar10 = '\0';
    }
    return pcVar5;
  }
  pcVar5 = (char *)FUN_0041c2c0("0","../crypto/bn/bn_conv.c",0x18);
  return pcVar5;
}

