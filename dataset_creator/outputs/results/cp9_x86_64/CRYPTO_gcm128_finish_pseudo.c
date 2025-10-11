
int CRYPTO_gcm128_finish(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *a;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  uint local_58;
  
  puVar2 = (ulong *)(param_1 + 0x188);
  lVar1 = param_1 + 0x60;
  a = (void *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x30);
  pcVar7 = *(code **)(param_1 + 0x168);
  uVar3 = lVar6 * 8;
  lVar8 = *(long *)(param_1 + 0x38);
  uVar4 = lVar8 * 8;
  uVar5 = *(uint *)(param_1 + 0x170);
  puVar11 = puVar2;
  if (uVar5 == 0) {
    if (*(int *)(param_1 + 0x174) == 0) {
      iVar9 = 0x10;
    }
    else {
      (**(code **)(param_1 + 0x160))(a,lVar1);
      iVar9 = 0x10;
    }
  }
  else {
    uVar10 = uVar5 + 0xf;
    local_58 = uVar10 & 0xfffffff0;
    memset((void *)((ulong)uVar5 + (long)puVar2),0,(ulong)((uVar10 & 0xfffffff0) - uVar5));
    if (local_58 == 0x30) {
      (*pcVar7)(a,lVar1,puVar2,0x30);
      iVar9 = 0x10;
    }
    else {
      iVar9 = local_58 + 0x10;
      puVar11 = (ulong *)(((ulong)uVar10 & 0xfffffff0) + (long)puVar2);
    }
  }
  puVar11[1] = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
               | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 |
               (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 | lVar8 << 0x3b;
  *puVar11 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
             (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
             (uVar3 & 0xff00) << 0x28 | lVar6 << 0x3b;
  (*pcVar7)(a,lVar1,puVar2,iVar9);
  *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) ^ *(ulong *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x48) ^ *(ulong *)(param_1 + 0x28);
  if ((param_2 != (void *)0x0) && (param_3 < 0x11)) {
    iVar9 = CRYPTO_memcmp(a,param_2,param_3);
    return iVar9;
  }
  return -1;
}

