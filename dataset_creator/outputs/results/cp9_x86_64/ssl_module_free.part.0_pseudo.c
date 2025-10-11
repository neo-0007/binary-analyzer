
void ssl_module_free_part_0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (ssl_names_count != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      puVar2 = (undefined8 *)((long)ssl_names + lVar5);
      CRYPTO_free((void *)*puVar2);
      if (puVar2[2] != 0) {
        uVar1 = 0;
        do {
          lVar3 = uVar1 * 0x10;
          uVar1 = uVar1 + 1;
          CRYPTO_free(*(void **)(puVar2[1] + lVar3));
          CRYPTO_free(*(void **)(puVar2[1] + 8 + lVar3));
        } while (uVar1 < (ulong)puVar2[2]);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x18;
      CRYPTO_free((void *)puVar2[1]);
    } while (uVar4 < ssl_names_count);
  }
  CRYPTO_free(ssl_names);
  ssl_names = (void *)0x0;
  ssl_names_count = 0;
  return;
}

