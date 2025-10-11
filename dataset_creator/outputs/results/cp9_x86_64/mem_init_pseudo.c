
undefined8 mem_init(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *ptr;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  ptr = (long *)CRYPTO_zalloc(0x10,"../crypto/bio/bss_mem.c",0x6f);
  if (ptr != (long *)0x0) {
    lVar3 = BUF_MEM_new_ex(param_2);
    *ptr = lVar3;
    if (lVar3 == 0) {
      CRYPTO_free(ptr);
      return 0;
    }
    puVar4 = (undefined8 *)CRYPTO_zalloc(0x20,"../crypto/bio/bss_mem.c",0x77);
    ptr[1] = (long)puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      BUF_MEM_free((BUF_MEM *)*ptr);
      CRYPTO_free(ptr);
    }
    else {
      puVar1 = (undefined8 *)*ptr;
      uVar5 = 1;
      uVar2 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      uVar2 = puVar1[3];
      puVar4[2] = puVar1[2];
      puVar4[3] = uVar2;
      *(undefined8 *)(param_1 + 0x28) = 0x100000001;
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      *(long **)(param_1 + 0x40) = ptr;
    }
  }
  return uVar5;
}

