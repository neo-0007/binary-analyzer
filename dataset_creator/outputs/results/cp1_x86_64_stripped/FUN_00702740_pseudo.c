
int FUN_00702740(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  uint local_138 [8];
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_b0;
  undefined *local_60;
  undefined *local_58;
  undefined *puStack_50;
  long local_40;
  
  puVar3 = PTR_FUN_0093af90;
  puVar2 = PTR_FUN_0093af00;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = FUN_007101b0(100);
  if (lVar5 == 0) {
    iVar4 = -1;
    goto LAB_00702851;
  }
  local_b0 = 0;
  FUN_00707490(local_138,0x8000,0xffffffff,0,0);
  local_60 = &DAT_0093f6a0;
  FUN_00708b50(local_138,lVar5,100,lVar5);
  local_138[0] = local_138[0] & 0xfffffffe;
  local_58 = puVar2;
  puStack_50 = puVar3;
  iVar4 = FUN_007986e0(local_138,param_2,param_3,param_4);
  lVar5 = local_100;
  if (iVar4 < 0) {
    FUN_007104f0(local_100);
    goto LAB_00702851;
  }
  lVar7 = local_110 - local_118;
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)(local_108 - local_118) >> 1) {
    lVar6 = FUN_007101b0(uVar1);
    *param_1 = lVar6;
    if (lVar6 == 0) goto LAB_0070283a;
    thunk_FUN_00713a50(lVar6,lVar5,lVar7);
    FUN_007104f0(lVar5);
    lVar5 = *param_1;
  }
  else {
LAB_0070283a:
    lVar5 = FUN_00710840(lVar5,uVar1);
    *param_1 = lVar5;
  }
  if (lVar5 == 0) {
    *param_1 = local_100;
    lVar5 = local_100;
  }
  *(undefined1 *)(lVar5 + lVar7) = 0;
LAB_00702851:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

