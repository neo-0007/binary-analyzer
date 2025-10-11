
/* WARNING: Removing unreachable block (ram,0x006b34a8) */
/* WARNING: Removing unreachable block (ram,0x006b37f1) */
/* WARNING: Removing unreachable block (ram,0x006b2f5e) */
/* WARNING: Removing unreachable block (ram,0x006b2f72) */
/* WARNING: Removing unreachable block (ram,0x006b2f77) */
/* WARNING: Removing unreachable block (ram,0x006b3bce) */
/* WARNING: Removing unreachable block (ram,0x006b2f85) */
/* WARNING: Removing unreachable block (ram,0x006b2f89) */
/* WARNING: Removing unreachable block (ram,0x006b2f92) */
/* WARNING: Removing unreachable block (ram,0x006b2f00) */
/* WARNING: Removing unreachable block (ram,0x006b2f0e) */
/* WARNING: Removing unreachable block (ram,0x006b3790) */
/* WARNING: Removing unreachable block (ram,0x006b2f24) */
/* WARNING: Removing unreachable block (ram,0x006b2f2c) */
/* WARNING: Removing unreachable block (ram,0x006b2ec4) */
/* WARNING: Removing unreachable block (ram,0x006b2ecf) */
/* WARNING: Removing unreachable block (ram,0x006b3680) */
/* WARNING: Removing unreachable block (ram,0x006b2ed8) */
/* WARNING: Removing unreachable block (ram,0x006b2f3b) */
/* WARNING: Removing unreachable block (ram,0x006b2f53) */
/* WARNING: Removing unreachable block (ram,0x006b37a0) */
/* WARNING: Removing unreachable block (ram,0x006b37ab) */
/* WARNING: Removing unreachable block (ram,0x006b3abc) */
/* WARNING: Removing unreachable block (ram,0x006b3c09) */
/* WARNING: Removing unreachable block (ram,0x006b3acf) */
/* WARNING: Removing unreachable block (ram,0x006b3ad8) */
/* WARNING: Removing unreachable block (ram,0x006b3be0) */
/* WARNING: Removing unreachable block (ram,0x006b3ae3) */
/* WARNING: Removing unreachable block (ram,0x006b381c) */
/* WARNING: Removing unreachable block (ram,0x006b34b5) */

undefined1  [16]
FUN_006b2d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long local_e8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_44;
  long local_40;
  
  local_70 = (undefined4)param_3;
  uStack_6c = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_4;
  local_80 = param_5;
  local_78 = param_2;
  FUN_006a4ba0(param_6 + 0xd0);
  lVar5 = FUN_00625ba0(&DAT_00945548);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + lVar5 * 8);
  lVar9 = *plVar2;
  if (lVar9 == 0) {
                    /* try { // try from 006b39bd to 006b39c1 has its CatchHandler @ 006b3c8a */
    puVar7 = (undefined8 *)FUN_006c31f0(0xa0);
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = &PTR_FUN_00933f78;
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
                    /* try { // try from 006b3a46 to 006b3a4a has its CatchHandler @ 006b3c81 */
    FUN_006a58d0(puVar7,param_6 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_6 + 0xd0),puVar7,lVar5);
    lVar9 = *plVar2;
  }
  local_58 = &DAT_009452b8;
  if (*(char *)(lVar9 + 0x20) != '\0') {
                    /* try { // try from 006b2df5 to 006b2df9 has its CatchHandler @ 006b3c5e */
    FUN_00638bc0(&local_58,0x20);
  }
  local_50 = &DAT_009452b8;
                    /* try { // try from 006b2e2a to 006b39ad has its CatchHandler @ 006b3c55 */
  FUN_00638bc0(&local_50,0x20);
  local_44 = *(undefined4 *)(lVar9 + 0x68);
  local_e8 = 0;
  while( true ) {
    if (*(byte *)((long)&local_44 + local_e8) < 5) {
                    /* WARNING: Could not recover jumptable at 0x006b2e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)((long)&UINT_00820644 +
                          (long)(int)(&UINT_00820644)[*(byte *)((long)&local_44 + local_e8)]))();
      return auVar10;
    }
    if (3 < (int)local_e8 + 1) break;
    local_e8 = local_e8 + 1;
  }
  if ((1 < *(ulong *)(local_50 + -0x18)) && (uVar6 = FUN_006376e0(&local_50,0x30,0), uVar6 != 0)) {
    uVar8 = *(ulong *)(local_50 + -0x18);
    if (uVar6 == 0xffffffffffffffff) {
      uVar6 = uVar8 - 1;
    }
    if (uVar6 <= uVar8) {
      uVar8 = uVar6;
    }
    FUN_00637f00(&local_50,0,uVar8,0);
  }
  if (*(long *)(local_58 + -0x18) != 0) {
    FUN_006390c0(&local_58,0);
    cVar3 = FUN_006c6980(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18),&local_58);
    if (cVar3 == '\0') {
      *param_7 = *param_7 | 4;
    }
  }
  FUN_00637180(param_8,&local_50);
  cVar3 = FUN_006aa060(&local_78,&local_88);
  if (cVar3 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar10._8_4_ = local_70;
  auVar10._0_8_ = local_78;
  auVar10._12_4_ = uStack_6c;
  if ((undefined8 *)(local_50 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_50 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(local_50 + -8);
      *(int *)(local_50 + -8) = iVar4 + -1;
    }
    if (iVar4 < 1) {
      thunk_FUN_007104f0(local_50 + -0x18,&local_59);
    }
  }
  if ((undefined8 *)(local_58 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_58 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(local_58 + -8);
      *(int *)(local_58 + -8) = iVar4 + -1;
    }
    if (iVar4 < 1) {
      thunk_FUN_007104f0(local_58 + -0x18,&local_50);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

