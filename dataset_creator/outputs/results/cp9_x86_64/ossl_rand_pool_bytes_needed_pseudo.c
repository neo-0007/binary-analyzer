
ulong ossl_rand_pool_bytes_needed(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = ossl_rand_pool_entropy_needed();
  if (param_2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rand/rand_pool.c",0xfc,"ossl_rand_pool_bytes_needed");
    ERR_set_error(0x24,0x69,0);
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar5 = (ulong)param_2 * lVar3 + 7 >> 3;
  if (uVar5 <= *(long *)(param_1 + 0x20) - uVar1) {
    uVar4 = *(ulong *)(param_1 + 0x18) - uVar1;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar1 < *(ulong *)(param_1 + 0x18)) {
      uVar5 = uVar4;
    }
    iVar2 = rand_pool_grow(param_1,uVar5);
    if (iVar2 != 0) {
      return uVar5;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/rand/rand_pool.c",0x104,"ossl_rand_pool_bytes_needed");
  ERR_set_error(0x24,0x7d,0);
  return 0;
}

