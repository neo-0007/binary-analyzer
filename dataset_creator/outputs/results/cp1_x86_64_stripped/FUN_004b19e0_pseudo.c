
ulong FUN_004b19e0(long *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if ((param_2 == 0) && (param_2 = *(long *)(param_3 + 8), param_2 == 0)) {
    FUN_0051f420();
    uVar7 = 0;
    FUN_0051f540("../crypto/bn/bn_blind.c",0xaf,"BN_BLINDING_invert_ex");
    FUN_0051f8f0(3,0x6b,0);
  }
  else {
    lVar3 = *(long *)(param_3 + 0x38);
    if (lVar3 == 0) {
      uVar7 = FUN_004b8fe0(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18));
      return uVar7;
    }
    uVar5 = *(uint *)(param_2 + 8);
    if ((int)uVar5 <= *(int *)((long)param_1 + 0xc)) {
      uVar2 = *(uint *)(param_1 + 1);
      lVar8 = (long)(int)uVar2;
      lVar9 = (long)(int)uVar5;
      if (lVar9 != 0) {
        lVar4 = *param_1;
        lVar6 = -lVar8;
        do {
          puVar1 = (ulong *)(lVar4 + lVar8 * 8 + lVar6 * 8);
          *puVar1 = *puVar1 & lVar6 >> 0x3f;
          lVar6 = lVar6 + 1;
        } while (lVar9 - lVar8 != lVar6);
      }
      *(uint *)(param_1 + 1) = (uVar2 ^ uVar5) & (uint)(lVar9 - lVar8 >> 0x3f) ^ uVar5;
    }
    uVar5 = FUN_004b9520(param_1,param_1,param_2,lVar3);
    uVar7 = (ulong)uVar5;
    FUN_004b8410(param_1);
  }
  return uVar7;
}

