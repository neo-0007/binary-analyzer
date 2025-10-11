
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_pop_to_mark(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = ossl_err_get_state_int();
  if ((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 0x380), iVar3 != *(int *)(lVar4 + 900))) {
    do {
      lVar5 = (long)iVar3;
      puVar1 = (undefined4 *)(lVar4 + lVar5 * 4);
      if (puVar1[0x10] != 0) {
        puVar1[0x10] = puVar1[0x10] + -1;
        return 1;
      }
      if ((*(byte *)(puVar1 + 0x80) & 1) == 0) {
        *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
        *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
        puVar1[0x80] = 0;
      }
      else {
        puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
          puVar1[0x80] = 1;
        }
      }
      lVar5 = lVar4 + lVar5 * 8;
      puVar1[0x10] = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar5 + 0x80) = 0;
      puVar1[0xb0] = 0xffffffff;
      CRYPTO_free(*(void **)(lVar5 + 0x240));
      *(undefined8 *)(lVar5 + 0x240) = 0;
      CRYPTO_free(*(void **)(lVar5 + 0x300));
      *(undefined8 *)(lVar5 + 0x300) = 0;
      iVar3 = *(int *)(lVar4 + 0x380) + -1;
      if (*(int *)(lVar4 + 0x380) < 1) {
        iVar3 = 0xf;
      }
      *(int *)(lVar4 + 0x380) = iVar3;
    } while (*(int *)(lVar4 + 900) != iVar3);
  }
  return 0;
}

