
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ERR_clear_error(void)

{
  undefined1 *puVar1;
  void *ptr;
  long lVar2;
  long lVar3;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar2 + 0x200 + lVar3 * 4) & 1) == 0) {
        *(undefined8 *)(lVar2 + 0x100 + lVar3 * 8) = 0;
        *(undefined8 *)(lVar2 + 0x180 + lVar3 * 8) = 0;
        *(undefined4 *)(lVar2 + 0x200 + lVar3 * 4) = 0;
      }
      else {
        puVar1 = *(undefined1 **)(lVar2 + 0x100 + lVar3 * 8);
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)(lVar2 + 0x200 + lVar3 * 4) = 1;
        }
      }
      *(undefined4 *)(lVar2 + 0x40 + lVar3 * 4) = 0;
      ptr = *(void **)(lVar2 + 0x240 + lVar3 * 8);
      *(undefined4 *)(lVar2 + lVar3 * 4) = 0;
      *(undefined8 *)(lVar2 + 0x80 + lVar3 * 8) = 0;
      *(undefined4 *)(lVar2 + 0x2c0 + lVar3 * 4) = 0xffffffff;
      CRYPTO_free(ptr);
      *(undefined8 *)(lVar2 + 0x240 + lVar3 * 8) = 0;
      CRYPTO_free(*(void **)(lVar2 + 0x300 + lVar3 * 8));
      *(undefined8 *)(lVar2 + 0x300 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
    *(undefined8 *)(lVar2 + 0x380) = 0;
  }
  return;
}

