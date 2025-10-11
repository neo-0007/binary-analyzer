
void FUN_007104f0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = param_1 - 0x10;
  uVar3 = *(ulong *)(param_1 + -8);
  uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if ((uVar3 & 2) == 0) {
    if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
      FUN_0070fa60();
      uVar3 = *(ulong *)(param_1 + -8);
    }
    puVar4 = &DAT_0093e160;
    if ((uVar3 & 4) != 0) {
      uVar3 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar3 = 0xfffffffffc000000;
      }
      puVar4 = *(undefined4 **)(uVar3 & uVar1);
    }
    FUN_0070cb80(puVar4,uVar1,0);
    *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
    return;
  }
  if (((DAT_0093e108 == 0) && (DAT_0093e0d0 < uVar3)) && (uVar3 < 0x2000001)) {
    DAT_0093e0d0 = uVar3 & 0xfffffffffffffff8;
    DAT_0093e0c0 = DAT_0093e0d0 * 2;
  }
  FUN_0070c050(uVar1);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
  return;
}

