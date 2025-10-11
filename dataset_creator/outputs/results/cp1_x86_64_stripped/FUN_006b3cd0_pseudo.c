
/* WARNING: Removing unreachable block (ram,0x006b4468) */
/* WARNING: Removing unreachable block (ram,0x006b47b1) */
/* WARNING: Removing unreachable block (ram,0x006b3f1e) */
/* WARNING: Removing unreachable block (ram,0x006b3f32) */
/* WARNING: Removing unreachable block (ram,0x006b3f37) */
/* WARNING: Removing unreachable block (ram,0x006b4b8e) */
/* WARNING: Removing unreachable block (ram,0x006b3f45) */
/* WARNING: Removing unreachable block (ram,0x006b3f49) */
/* WARNING: Removing unreachable block (ram,0x006b3f52) */
/* WARNING: Removing unreachable block (ram,0x006b3ec0) */
/* WARNING: Removing unreachable block (ram,0x006b3ece) */
/* WARNING: Removing unreachable block (ram,0x006b4750) */
/* WARNING: Removing unreachable block (ram,0x006b3ee4) */
/* WARNING: Removing unreachable block (ram,0x006b3eec) */
/* WARNING: Removing unreachable block (ram,0x006b3e84) */
/* WARNING: Removing unreachable block (ram,0x006b3e8f) */
/* WARNING: Removing unreachable block (ram,0x006b4640) */
/* WARNING: Removing unreachable block (ram,0x006b3e98) */
/* WARNING: Removing unreachable block (ram,0x006b3efb) */
/* WARNING: Removing unreachable block (ram,0x006b3f13) */
/* WARNING: Removing unreachable block (ram,0x006b4760) */
/* WARNING: Removing unreachable block (ram,0x006b476b) */
/* WARNING: Removing unreachable block (ram,0x006b4a7c) */
/* WARNING: Removing unreachable block (ram,0x006b4bc9) */
/* WARNING: Removing unreachable block (ram,0x006b4a8f) */
/* WARNING: Removing unreachable block (ram,0x006b4a98) */
/* WARNING: Removing unreachable block (ram,0x006b4ba0) */
/* WARNING: Removing unreachable block (ram,0x006b4aa3) */
/* WARNING: Removing unreachable block (ram,0x006b47dc) */
/* WARNING: Removing unreachable block (ram,0x006b4475) */

undefined1  [16]
FUN_006b3cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,uint *param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  long lStack_e8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_44;
  long local_40;
  
  local_70 = (undefined4)param_3;
  uStack_6c = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_4;
  local_80 = param_5;
  local_78 = param_2;
  FUN_006a4ba0(param_6 + 0xd0);
  lVar5 = FUN_00625ba0(&DAT_00945550);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + lVar5 * 8);
  lVar9 = *plVar2;
  if (lVar9 == 0) {
    puVar7 = (undefined8 *)FUN_006c31f0(0xa0);
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = &PTR_FUN_00933f98;
    *(undefined1 *)(puVar7 + 4) = 0;
    *(undefined8 *)((long)puVar7 + 0x24) = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    FUN_006a60e0(puVar7,param_6 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_6 + 0xd0),puVar7,lVar5);
    lVar9 = *plVar2;
  }
  puStack_58 = &DAT_009452b8;
  if (*(char *)(lVar9 + 0x20) != '\0') {
    FUN_00638bc0(&puStack_58,0x20);
  }
  puStack_50 = &DAT_009452b8;
  FUN_00638bc0(&puStack_50,0x20);
  uStack_44 = *(undefined4 *)(lVar9 + 0x68);
  lStack_e8 = 0;
  while( true ) {
    if (*(byte *)((long)&uStack_44 + lStack_e8) < 5) {
                    /* WARNING: Could not recover jumptable at 0x006b3e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)((long)&UINT_00820658 +
                          (long)(int)(&UINT_00820658)[*(byte *)((long)&uStack_44 + lStack_e8)]))();
      return auVar10;
    }
    if (3 < (int)lStack_e8 + 1) break;
    lStack_e8 = lStack_e8 + 1;
  }
  if ((1 < *(ulong *)(puStack_50 + -0x18)) && (uVar6 = FUN_006376e0(&puStack_50,0x30,0), uVar6 != 0)
     ) {
    uVar8 = *(ulong *)(puStack_50 + -0x18);
    if (uVar6 == 0xffffffffffffffff) {
      uVar6 = uVar8 - 1;
    }
    if (uVar6 <= uVar8) {
      uVar8 = uVar6;
    }
    FUN_00637f00(&puStack_50,0,uVar8,0);
  }
  if (*(long *)(puStack_58 + -0x18) != 0) {
    FUN_006390c0(&puStack_58,0);
    cVar3 = FUN_006c6980(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18),&puStack_58);
    if (cVar3 == '\0') {
      *param_7 = *param_7 | 4;
    }
  }
  FUN_00637180(param_8,&puStack_50);
  cVar3 = FUN_006aa060(&local_78,&local_88);
  if (cVar3 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar10._8_4_ = local_70;
  auVar10._0_8_ = local_78;
  auVar10._12_4_ = uStack_6c;
  if ((undefined8 *)(puStack_50 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(puStack_50 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(puStack_50 + -8);
      *(int *)(puStack_50 + -8) = iVar4 + -1;
    }
    if (iVar4 < 1) {
      thunk_FUN_007104f0(puStack_50 + -0x18,&uStack_59);
    }
  }
  if ((undefined8 *)(puStack_58 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(puStack_58 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(puStack_58 + -8);
      *(int *)(puStack_58 + -8) = iVar4 + -1;
    }
    if (iVar4 < 1) {
      thunk_FUN_007104f0(puStack_58 + -0x18,&puStack_50);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

