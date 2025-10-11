
char * BN_bn2hex(BIGNUM *a)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  
  iVar3 = BN_is_zero();
  if (iVar3 == 0) {
    uVar8 = 0;
    pcVar4 = (char *)CRYPTO_malloc(a->top * 0x10 + 2,"../crypto/bn/bn_conv.c",0x19);
    if (pcVar4 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_conv.c",0x1b,__func___2);
      ERR_set_error(3,0xc0100,0);
    }
    else {
      pcVar10 = pcVar4;
      if (a->neg != 0) {
        *pcVar4 = '-';
        pcVar10 = pcVar4 + 1;
      }
      iVar3 = a->top;
      uVar6 = iVar3 - 1;
      if (-1 < (int)uVar6) {
        lVar11 = (long)(int)uVar6 << 3;
        do {
          iVar5 = 0x38;
          pcVar9 = pcVar10;
          do {
            uVar2 = (uint)(*(ulong *)((long)a->d + lVar11) >> ((byte)iVar5 & 0x3f));
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
            iVar5 = iVar5 + -8;
            pcVar9 = pcVar10;
          } while (iVar5 != -8);
          lVar11 = lVar11 + -8;
        } while (((long)iVar3 - (ulong)uVar6) * 8 + -0x10 != lVar11);
      }
      *pcVar10 = '\0';
    }
    return pcVar4;
  }
  pcVar4 = CRYPTO_strdup("0","../crypto/bn/bn_conv.c",0x18);
  return pcVar4;
}

