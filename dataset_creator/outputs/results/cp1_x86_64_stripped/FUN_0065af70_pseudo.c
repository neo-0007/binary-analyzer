
/* WARNING: Removing unreachable block (ram,0x0065b6e4) */
/* WARNING: Removing unreachable block (ram,0x0065ba44) */
/* WARNING: Removing unreachable block (ram,0x0065ba51) */
/* WARNING: Removing unreachable block (ram,0x0065b1df) */
/* WARNING: Removing unreachable block (ram,0x0065b1e8) */
/* WARNING: Removing unreachable block (ram,0x0065b1ed) */
/* WARNING: Removing unreachable block (ram,0x0065b1f6) */
/* WARNING: Removing unreachable block (ram,0x0065b8c0) */
/* WARNING: Removing unreachable block (ram,0x0065c00c) */
/* WARNING: Removing unreachable block (ram,0x0065b8d0) */
/* WARNING: Removing unreachable block (ram,0x0065b8d4) */
/* WARNING: Removing unreachable block (ram,0x0065b8dc) */
/* WARNING: Removing unreachable block (ram,0x0065b8e0) */
/* WARNING: Removing unreachable block (ram,0x0065b1f8) */
/* WARNING: Removing unreachable block (ram,0x0065b207) */
/* WARNING: Removing unreachable block (ram,0x0065bc30) */
/* WARNING: Removing unreachable block (ram,0x0065b217) */
/* WARNING: Removing unreachable block (ram,0x0065b220) */
/* WARNING: Removing unreachable block (ram,0x0065b17c) */
/* WARNING: Removing unreachable block (ram,0x0065b18f) */
/* WARNING: Removing unreachable block (ram,0x0065b8e8) */
/* WARNING: Removing unreachable block (ram,0x0065b198) */
/* WARNING: Removing unreachable block (ram,0x0065b1a0) */
/* WARNING: Removing unreachable block (ram,0x0065bb68) */
/* WARNING: Removing unreachable block (ram,0x0065bfee) */
/* WARNING: Removing unreachable block (ram,0x0065bb78) */
/* WARNING: Removing unreachable block (ram,0x0065bb7a) */
/* WARNING: Removing unreachable block (ram,0x0065bb82) */
/* WARNING: Removing unreachable block (ram,0x0065bb86) */
/* WARNING: Removing unreachable block (ram,0x0065bb89) */
/* WARNING: Removing unreachable block (ram,0x0065b1b7) */
/* WARNING: Removing unreachable block (ram,0x0065b1ba) */
/* WARNING: Removing unreachable block (ram,0x0065b9e0) */
/* WARNING: Removing unreachable block (ram,0x0065bffd) */
/* WARNING: Removing unreachable block (ram,0x0065b9f2) */
/* WARNING: Removing unreachable block (ram,0x0065b9f4) */
/* WARNING: Removing unreachable block (ram,0x0065b9fc) */
/* WARNING: Removing unreachable block (ram,0x0065ba06) */
/* WARNING: Removing unreachable block (ram,0x0065ba0a) */
/* WARNING: Removing unreachable block (ram,0x0065b1d4) */
/* WARNING: Removing unreachable block (ram,0x0065ba20) */
/* WARNING: Removing unreachable block (ram,0x0065ba2b) */
/* WARNING: Removing unreachable block (ram,0x0065bb06) */
/* WARNING: Removing unreachable block (ram,0x0065b6eb) */

undefined1  [16]
FUN_0065af70(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,int param_5,
            long param_6,uint *param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  long local_130;
  long local_118;
  undefined4 local_8c;
  undefined1 *local_88;
  ulong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_006a4ba0(param_6 + 0xd0);
  lVar4 = FUN_00625ba0(&DAT_009453d8);
  plVar1 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + lVar4 * 8);
  local_130 = *plVar1;
  if (local_130 == 0) {
                    /* try { // try from 0065bd3d to 0065bd41 has its CatchHandler @ 0065c26d */
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
                    /* try { // try from 0065bdc3 to 0065bdc7 has its CatchHandler @ 0065c276 */
    FUN_006a60e0(puVar7,param_6 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_6 + 0xd0),puVar7,lVar4);
    local_130 = *plVar1;
  }
  local_78 = 0;
  local_80 = 0;
  local_88 = &local_78;
  if (*(char *)(local_130 + 0x20) != '\0') {
                    /* try { // try from 0065b08a to 0065b08e has its CatchHandler @ 0065c2ac */
    FUN_0069e840(&local_88,0x20);
  }
  local_60 = 0;
  local_58[0] = 0;
  local_68 = local_58;
                    /* try { // try from 0065b0ca to 0065bd29 has its CatchHandler @ 0065c2a3 */
  FUN_0069e840(&local_68,0x20);
  local_118 = 0;
  local_8c = *(undefined4 *)(local_130 + 0x68);
  while( true ) {
    if (*(byte *)((long)&local_8c + local_118) < 5) {
                    /* WARNING: Could not recover jumptable at 0x0065b14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar11 = (*(code *)(&DAT_0081f0ec +
                          *(int *)(&DAT_0081f0ec + (ulong)*(byte *)((long)&local_8c + local_118) * 4
                                  )))();
      return auVar11;
    }
    if (3 < (int)local_118 + 1) break;
    local_118 = local_118 + 1;
  }
  if ((local_60 < 2) || (uVar6 = FUN_006a0500(&local_68,0x30,0), uVar6 == 0)) goto LAB_0065ba3a;
  if (uVar6 == 0xffffffffffffffff) {
    uVar6 = local_60 - 1;
    if (local_60 == 0) {
      local_60 = 0;
      *local_68 = 0;
      goto LAB_0065ba3a;
    }
    if (uVar6 == 0) goto LAB_0065ba3a;
  }
  uVar8 = local_60;
  if (uVar6 < local_60) {
    uVar8 = uVar6;
  }
  FUN_0069e450(&local_68,0,uVar8);
LAB_0065ba3a:
  uVar6 = local_80;
  if (local_80 != 0) {
    uVar8 = local_80 + 1;
    uVar5 = 0xf;
    if (local_88 != &local_78) {
      uVar5 = CONCAT71(uStack_77,local_78);
    }
    if (uVar5 < uVar8) {
      FUN_0069e300(&local_88,local_80,0,0,1);
    }
    local_88[uVar6] = 0;
    local_88[uVar6 + 1] = 0;
    local_80 = uVar8;
    cVar2 = FUN_006c7dc0(*(undefined8 *)(local_130 + 0x10),*(undefined8 *)(local_130 + 0x18),
                         &local_88);
    if (cVar2 == '\0') {
      *param_7 = *param_7 | 4;
    }
  }
  bVar10 = (int)param_3 == -1;
  FUN_0069fef0(param_8,&local_68);
  bVar9 = param_2 != (long *)0x0;
  if (bVar9 && bVar10) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar3 = *(int *)param_2[2];
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar3 == -1) {
      param_2 = (long *)0x0;
    }
    bVar10 = iVar3 == -1 && (bVar9 && bVar10);
  }
  bVar9 = param_5 == -1;
  if ((param_4 != (long *)0x0) && (bVar9)) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar3 = *(int *)param_4[2];
    }
    else {
      iVar3 = (**(code **)(*param_4 + 0x48))();
    }
    bVar9 = iVar3 == -1;
  }
  if (bVar9 == bVar10) {
    *param_7 = *param_7 | 2;
  }
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  if (local_88 != &local_78) {
    thunk_FUN_007104f0();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar11._8_8_ = param_3;
    auVar11._0_8_ = param_2;
    return auVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

