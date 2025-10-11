
void FUN_00695600(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 *puVar8;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar7 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  local_48 = -1;
  local_40 = -1;
  local_38 = -1;
  local_30 = -1;
  local_28 = -1;
  if (*(long *)(param_2 + 8) == 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if (lVar3 == 0) goto LAB_006956da;
    local_38 = lVar3 - lVar7;
    local_30 = *(ulong *)(param_2 + 0x28) - lVar3;
    local_28 = *(long *)(param_2 + 0x30) - lVar7;
    uVar6 = *(ulong *)(param_2 + 0x28);
  }
  else {
    local_50 = *(long *)(param_2 + 8) - lVar7;
    local_48 = *(long *)(param_2 + 0x10) - lVar7;
    uVar2 = *(ulong *)(param_2 + 0x18);
    local_40 = uVar2 - lVar7;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = uVar2;
    if (lVar3 != 0) {
      local_38 = lVar3 - lVar7;
      uVar4 = *(ulong *)(param_2 + 0x28);
      local_30 = uVar4 - lVar3;
      local_28 = *(long *)(param_2 + 0x30) - lVar7;
      uVar6 = uVar4;
      if ((uVar2 != 0) && (uVar6 = uVar2, uVar2 < uVar4)) {
        uVar6 = uVar4;
      }
    }
  }
  if (uVar6 != 0) {
    *(ulong *)(param_2 + 0x50) = uVar6 - lVar7;
  }
LAB_006956da:
  puVar8 = param_1;
                    /* try { // try from 006956e0 to 006956e4 has its CatchHandler @ 0069581d */
  FUN_0069d4c0(param_1,param_2);
  lVar7 = param_2 + 0x58;
  *param_1 = &PTR_FUN_009380c8;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = param_1 + 0xb;
  if (*(long *)(param_2 + 0x48) == lVar7) {
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    param_1[0xc] = uVar5;
  }
  else {
    param_1[9] = *(long *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(long *)(param_2 + 0x48) = lVar7;
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[10] = uVar5;
  *(undefined1 *)(param_2 + 0x58) = 0;
  lVar3 = param_1[9];
  if (local_50 != -1) {
    param_1[1] = local_50 + lVar3;
    param_1[2] = local_48 + lVar3;
    param_1[3] = local_40 + lVar3;
  }
  if (local_38 != -1) {
    FUN_006943b0(param_1,lVar3 + local_38,local_28 + lVar3,local_30,lVar7,in_R9,puVar8);
    lVar7 = *(long *)(param_2 + 0x48);
  }
                    /* try { // try from 006957a1 to 006957a5 has its CatchHandler @ 00695826 */
  FUN_00694640(param_2,lVar7,0,0);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

