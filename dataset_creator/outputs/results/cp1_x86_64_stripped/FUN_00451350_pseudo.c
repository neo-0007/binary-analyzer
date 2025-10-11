
void FUN_00451350(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  param_1[4] = 0;
  uVar3 = 0x6a09e667;
  param_1[0xf] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8)) + 0x80U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[2] = 0x9b05688c510e527f;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[0xf] = (ulong)*param_2;
  lVar1 = 0;
  while( true ) {
    *(uint *)((long)param_1 + lVar1 * 4) = uVar3 ^ *(uint *)(param_2 + lVar1 * 4);
    lVar1 = lVar1 + 1;
    if (lVar1 == 8) break;
    uVar3 = *(uint *)((long)param_1 + lVar1 * 4);
  }
  return;
}

