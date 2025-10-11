
int BN_print(void *fp,BIGNUM *a)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if (((a->neg == 0) || (iVar1 = BIO_write((BIO *)fp,&DAT_0080042c,1), iVar1 == 1)) &&
     ((iVar1 = BN_is_zero(a), iVar1 == 0 || (iVar1 = BIO_write((BIO *)fp,"0",1), iVar1 == 1)))) {
    iVar1 = a->top;
    uVar3 = iVar1 - 1;
    if (-1 < (int)uVar3) {
      lVar5 = (long)(int)uVar3 << 3;
      uVar2 = 0;
      do {
        iVar6 = 0x3c;
        do {
          uVar4 = (uint)(*(ulong *)((long)a->d + lVar5) >> ((byte)iVar6 & 0x3f)) & 0xf;
          uVar2 = uVar2 | uVar4;
          if ((uVar2 != 0) &&
             (uVar2 = BIO_write((BIO *)fp,"0123456789ABCDEF" + (int)uVar4,1), uVar2 != 1)) {
            return 0;
          }
          iVar6 = iVar6 + -4;
        } while (iVar6 != -4);
        lVar5 = lVar5 + -8;
      } while (((long)iVar1 - (ulong)uVar3) * 8 + -0x10 != lVar5);
    }
    return 1;
  }
  return 0;
}

