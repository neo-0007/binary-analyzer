
/* WARNING: Removing unreachable block (ram,0x0068bd38) */
/* WARNING: Removing unreachable block (ram,0x0068bf42) */
/* WARNING: Removing unreachable block (ram,0x0068b7e1) */
/* WARNING: Removing unreachable block (ram,0x0068b7e9) */
/* WARNING: Removing unreachable block (ram,0x0068b7fd) */
/* WARNING: Removing unreachable block (ram,0x0068b802) */
/* WARNING: Removing unreachable block (ram,0x0068c317) */
/* WARNING: Removing unreachable block (ram,0x0068c32a) */
/* WARNING: Removing unreachable block (ram,0x0068b790) */
/* WARNING: Removing unreachable block (ram,0x0068b79a) */
/* WARNING: Removing unreachable block (ram,0x0068bee0) */
/* WARNING: Removing unreachable block (ram,0x0068b810) */
/* WARNING: Removing unreachable block (ram,0x0068b819) */
/* WARNING: Removing unreachable block (ram,0x0068b7b0) */
/* WARNING: Removing unreachable block (ram,0x0068b7b8) */
/* WARNING: Removing unreachable block (ram,0x0068b75c) */
/* WARNING: Removing unreachable block (ram,0x0068b767) */
/* WARNING: Removing unreachable block (ram,0x0068bdf0) */
/* WARNING: Removing unreachable block (ram,0x0068b76b) */
/* WARNING: Removing unreachable block (ram,0x0068b7c7) */
/* WARNING: Removing unreachable block (ram,0x0068bef0) */
/* WARNING: Removing unreachable block (ram,0x0068befb) */
/* WARNING: Removing unreachable block (ram,0x0068c21c) */
/* WARNING: Removing unreachable block (ram,0x0068c35f) */
/* WARNING: Removing unreachable block (ram,0x0068c22f) */
/* WARNING: Removing unreachable block (ram,0x0068c238) */
/* WARNING: Removing unreachable block (ram,0x0068bf6d) */
/* WARNING: Removing unreachable block (ram,0x0068bd45) */

undefined1  [16]
FUN_0068b590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long local_e0;
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
  FUN_0067c1e0(param_6 + 0xd0);
  lVar5 = FUN_00625ba0(&DAT_00945490);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + lVar5 * 8);
  lVar9 = *plVar2;
  if (lVar9 == 0) {
                    /* try { // try from 0068c125 to 0068c129 has its CatchHandler @ 0068c3f3 */
    puVar7 = (undefined8 *)FUN_006c31f0(0x70);
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined2 *)(puVar7 + 4) = 0;
    *puVar7 = &PTR_FUN_00933f58;
    *(undefined1 *)((long)puVar7 + 0x22) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(undefined4 *)(puVar7 + 0xc) = 0;
    *(undefined1 *)((long)puVar7 + 0x6f) = 0;
                    /* try { // try from 0068c1aa to 0068c1ae has its CatchHandler @ 0068c3a1 */
    FUN_0067d8d0(puVar7,param_6 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_6 + 0xd0),puVar7,lVar5);
    lVar9 = *plVar2;
  }
  local_58 = &DAT_009452b8;
  if (*(char *)(lVar9 + 0x20) != '\0') {
                    /* try { // try from 0068b675 to 0068b679 has its CatchHandler @ 0068c3ea */
    FUN_00638bc0(&local_58,0x20);
  }
  local_50 = &DAT_009452b8;
                    /* try { // try from 0068b6aa to 0068c0f9 has its CatchHandler @ 0068c3aa */
  FUN_00638bc0(&local_50,0x20);
  local_44 = *(undefined4 *)(lVar9 + 0x60);
  local_e0 = 0;
  while( true ) {
    if (*(byte *)((long)&local_44 + local_e0) < 5) {
                    /* WARNING: Could not recover jumptable at 0x0068b72e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)(&DAT_0081fc88 +
                          *(int *)(&DAT_0081fc88 + (ulong)*(byte *)((long)&local_44 + local_e0) * 4)
                          ))();
      return auVar10;
    }
    if (3 < (int)local_e0 + 1) break;
    local_e0 = local_e0 + 1;
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
  cVar3 = FUN_00681960(&local_78,&local_88);
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

