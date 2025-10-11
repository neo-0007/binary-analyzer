
long FUN_004b2df0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)((long)param_1 + 0x34) != 0) {
    return 0;
  }
  if ((int)param_1[7] != 0) {
    return 0;
  }
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  uVar2 = *(uint *)(param_1 + 3);
  if (uVar2 == *(uint *)((long)param_1 + 0x1c)) {
    lVar3 = FUN_0041ad90(400,"../crypto/bn/bn_ctx.c",0x145);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_ctx.c",0x146,"BN_POOL_get");
      FUN_0051f8f0(3,0xc0100,0);
      goto LAB_004b2f47;
    }
    lVar4 = lVar3;
    do {
      while (FUN_004b7670(lVar4), (uVar1 & 8) == 0) {
        lVar4 = lVar4 + 0x18;
        if (lVar4 == lVar3 + 0x180) goto LAB_004b2efc;
      }
      lVar5 = lVar4 + 0x18;
      FUN_004b7e70(lVar4,8);
      lVar4 = lVar5;
    } while (lVar5 != lVar3 + 0x180);
LAB_004b2efc:
    lVar4 = param_1[2];
    lVar5 = *param_1;
    *(undefined8 *)(lVar3 + 0x188) = 0;
    *(long *)(lVar3 + 0x180) = lVar4;
    if (lVar5 == 0) {
      param_1[2] = lVar3;
      param_1[1] = lVar3;
      *param_1 = lVar3;
    }
    else {
      *(long *)(lVar4 + 0x188) = lVar3;
      param_1[2] = lVar3;
      param_1[1] = lVar3;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 0x10;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  else {
    if (uVar2 == 0) {
      lVar3 = *param_1;
      param_1[1] = lVar3;
    }
    else {
      lVar3 = param_1[1];
      if ((uVar2 & 0xf) == 0) {
        lVar3 = *(long *)(lVar3 + 0x188);
        param_1[1] = lVar3;
      }
    }
    *(uint *)(param_1 + 3) = uVar2 + 1;
    lVar3 = lVar3 + (ulong)(uVar2 & 0xf) * 0x18;
    if (lVar3 == 0) {
LAB_004b2f47:
      *(undefined4 *)(param_1 + 7) = 1;
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_ctx.c",0xe3,"BN_CTX_get");
      FUN_0051f8f0(3,0x6d,0);
      return 0;
    }
  }
  FUN_004b7b50(lVar3);
  *(uint *)(lVar3 + 0x14) = *(uint *)(lVar3 + 0x14) & 0xfffffffb;
  *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  return lVar3;
}

