
void FUN_004b2c00(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 == *(uint *)(param_1 + 0x2c)) {
    if (uVar2 == 0) {
      lVar3 = 0x80;
      uVar4 = 0x20;
    }
    else {
      uVar4 = uVar2 * 3 >> 1;
      lVar3 = (ulong)uVar4 << 2;
    }
    lVar3 = FUN_0041ad90(lVar3,"../crypto/bn/bn_ctx.c",0x10f);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_ctx.c",0x110,"BN_STACK_push");
      FUN_0051f8f0(3,0xc0100,0);
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_ctx.c",0xbd,"BN_CTX_start");
      FUN_0051f8f0(3,0x6d,0);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      thunk_FUN_00713a50(lVar3,*(undefined8 *)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x28) * 4)
      ;
    }
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x20),"../crypto/bn/bn_ctx.c",0x115);
    *(long *)(param_1 + 0x20) = lVar3;
    uVar2 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x2c) = uVar4;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x28) = uVar2 + 1;
  *(undefined4 *)(lVar3 + (ulong)uVar2 * 4) = uVar1;
  return;
}

