
void BN_CTX_start(BN_CTX *ctx)

{
  undefined4 uVar1;
  uint uVar2;
  void *__dest;
  int num;
  uint uVar3;
  
  if ((*(int *)(ctx + 0x34) != 0) || (*(int *)(ctx + 0x38) != 0)) {
    *(int *)(ctx + 0x34) = *(int *)(ctx + 0x34) + 1;
    return;
  }
  uVar1 = *(undefined4 *)(ctx + 0x30);
  uVar2 = *(uint *)(ctx + 0x28);
  if (uVar2 == *(uint *)(ctx + 0x2c)) {
    if (uVar2 == 0) {
      num = 0x80;
      uVar3 = 0x20;
    }
    else {
      uVar3 = uVar2 * 3 >> 1;
      num = uVar3 << 2;
    }
    __dest = CRYPTO_malloc(num,"../crypto/bn/bn_ctx.c",0x10f);
    if (__dest == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_ctx.c",0x110,"BN_STACK_push");
      ERR_set_error(3,0xc0100,0);
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_ctx.c",0xbd,"BN_CTX_start");
      ERR_set_error(3,0x6d,0);
      *(int *)(ctx + 0x34) = *(int *)(ctx + 0x34) + 1;
      return;
    }
    if (*(uint *)(ctx + 0x28) != 0) {
      memcpy(__dest,*(void **)(ctx + 0x20),(ulong)*(uint *)(ctx + 0x28) * 4);
    }
    CRYPTO_free(*(void **)(ctx + 0x20));
    *(void **)(ctx + 0x20) = __dest;
    uVar2 = *(uint *)(ctx + 0x28);
    *(uint *)(ctx + 0x2c) = uVar3;
  }
  else {
    __dest = *(void **)(ctx + 0x20);
  }
  *(uint *)(ctx + 0x28) = uVar2 + 1;
  *(undefined4 *)((long)__dest + (ulong)uVar2 * 4) = uVar1;
  return;
}

