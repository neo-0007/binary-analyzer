
ulong FUN_0042a000(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = FUN_00429fe0();
  if (param_2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rand/rand_pool.c",0xfc,"ossl_rand_pool_bytes_needed");
    FUN_0051f8f0(0x24,0x69,0);
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
    iVar2 = FUN_00429b10(param_1,uVar5);
    if (iVar2 != 0) {
      return uVar5;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/rand/rand_pool.c",0x104,"ossl_rand_pool_bytes_needed");
  FUN_0051f8f0(0x24,0x7d,0);
  return 0;
}

