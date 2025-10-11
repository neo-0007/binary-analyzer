
void ERR_vset_error(uint param_1,uint param_2,char *param_3,va_list param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *buf;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  ulong n;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 == 0) {
    return;
  }
  lVar6 = (long)*(int *)(lVar5 + 0x380);
  if (param_3 == (char *)0x0) {
    buf = (char *)0x0;
    uVar9 = 0;
    n = 0;
    goto LAB_00511766;
  }
  lVar1 = lVar5 + lVar6 * 8;
  n = *(ulong *)(lVar1 + 0x180);
  pcVar7 = *(char **)(lVar1 + 0x100);
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined4 *)(lVar5 + 0x200 + lVar6 * 4) = 0;
  if ((n < 0x400) &&
     (buf = (char *)CRYPTO_realloc(pcVar7,0x400,"../crypto/err/err_blocks.c",0x54),
     buf != (char *)0x0)) {
    n = 0x400;
LAB_0051187f:
    iVar4 = BIO_vsnprintf(buf,n,param_3,param_4);
    iVar8 = 0;
    if (-1 < iVar4) {
      iVar8 = iVar4;
    }
    buf[iVar8] = '\0';
    pcVar7 = (char *)CRYPTO_realloc(buf,iVar8 + 1,"../crypto/err/err_blocks.c",0x67);
    if (pcVar7 == (char *)0x0) {
      lVar6 = (long)*(int *)(lVar5 + 0x380);
      uVar9 = 3;
      goto LAB_00511766;
    }
    buf = pcVar7 + iVar8;
    uVar3 = (long)(iVar8 + 1);
  }
  else {
    buf = pcVar7;
    if (pcVar7 != (char *)0x0) goto LAB_0051187f;
    buf = (char *)CRYPTO_realloc((void *)0x0,1,"../crypto/err/err_blocks.c",0x67);
    uVar3 = 1;
    pcVar7 = buf;
    if (buf == (char *)0x0) {
      lVar6 = (long)*(int *)(lVar5 + 0x380);
      uVar9 = 0;
      goto LAB_00511766;
    }
  }
  n = uVar3;
  *buf = '\0';
  lVar6 = (long)*(int *)(lVar5 + 0x380);
  uVar9 = 3;
  buf = pcVar7;
LAB_00511766:
  lVar1 = lVar6 + 0x80;
  if ((*(byte *)(lVar5 + 0x200 + lVar6 * 4) & 1) == 0) {
    *(undefined8 *)(lVar5 + 0x100 + lVar6 * 8) = 0;
    *(undefined8 *)(lVar5 + 0x180 + lVar6 * 8) = 0;
    *(undefined4 *)(lVar5 + lVar1 * 4) = 0;
  }
  else {
    puVar2 = *(undefined1 **)(lVar5 + 0x100 + lVar6 * 8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      lVar6 = (long)*(int *)(lVar5 + 0x380);
      *(undefined4 *)(lVar5 + lVar1 * 4) = 1;
    }
  }
  if (param_1 == 2) {
    param_2 = param_2 | 0x80000000;
  }
  else {
    param_2 = (param_1 & 0xff) << 0x17 | param_2 & 0x7fffff;
  }
  lVar1 = lVar5 + lVar6 * 8;
  *(ulong *)(lVar1 + 0x80) = (ulong)param_2;
  if (param_3 != (char *)0x0) {
    if ((*(byte *)(lVar5 + 0x200 + lVar6 * 4) & 1) != 0) {
      CRYPTO_free(*(void **)(lVar1 + 0x100));
    }
    *(char **)(lVar1 + 0x100) = buf;
    *(ulong *)(lVar1 + 0x180) = n;
    *(undefined4 *)(lVar5 + (lVar6 + 0x80) * 4) = uVar9;
  }
  return;
}

