
void FUN_00699e40(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar8 = *(long *)(param_2 + 0x48);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  local_48 = -1;
  local_40 = -1;
  local_38 = -1;
  local_30 = -1;
  local_28 = -1;
  if (*(long *)(param_2 + 8) == 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    if (lVar4 == 0) goto LAB_00699f37;
    local_38 = lVar4 - lVar8 >> 2;
    local_30 = (long)(*(ulong *)(param_2 + 0x28) - lVar4) >> 2;
    local_28 = *(long *)(param_2 + 0x30) - lVar8 >> 2;
    uVar7 = *(ulong *)(param_2 + 0x28);
  }
  else {
    local_50 = *(long *)(param_2 + 8) - lVar8 >> 2;
    local_48 = *(long *)(param_2 + 0x10) - lVar8 >> 2;
    uVar3 = *(ulong *)(param_2 + 0x18);
    local_40 = (long)(uVar3 - lVar8) >> 2;
    lVar4 = *(long *)(param_2 + 0x20);
    uVar7 = uVar3;
    if (lVar4 != 0) {
      local_38 = lVar4 - lVar8 >> 2;
      uVar5 = *(ulong *)(param_2 + 0x28);
      local_30 = (long)(uVar5 - lVar4) >> 2;
      local_28 = *(long *)(param_2 + 0x30) - lVar8 >> 2;
      uVar7 = uVar5;
      if ((uVar3 != 0) && (uVar7 = uVar3, uVar3 < uVar5)) {
        uVar7 = uVar5;
      }
    }
  }
  if (uVar7 != 0) {
    *(long *)(param_2 + 0x50) = (long)(uVar7 - lVar8) >> 2;
  }
LAB_00699f37:
                    /* try { // try from 00699f3d to 00699f41 has its CatchHandler @ 0069a09f */
  FUN_0069dc60(param_1,param_2);
  lVar8 = param_2 + 0x58;
  *param_1 = &PTR_FUN_009384a8;
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = param_1 + 0xb;
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (*(long *)(param_2 + 0x48) == lVar8) {
    FUN_00756660(param_1 + 0xb,lVar8,4);
  }
  else {
    param_1[9] = *(long *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  *(long *)(param_2 + 0x48) = lVar8;
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[10] = uVar6;
  lVar4 = param_1[9];
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (local_50 != -1) {
    param_1[1] = lVar4 + local_50 * 4;
    param_1[2] = lVar4 + local_48 * 4;
    param_1[3] = lVar4 + local_40 * 4;
  }
  if (local_38 != -1) {
    FUN_00698ae0(param_1,lVar4 + local_38 * 4,lVar4 + local_28 * 4,local_30);
    lVar8 = *(long *)(param_2 + 0x48);
  }
                    /* try { // try from 0069a006 to 0069a00a has its CatchHandler @ 0069a096 */
  FUN_00698d90(param_2,lVar8,0,0);
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

