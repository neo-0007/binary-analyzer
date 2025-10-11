
/* WARNING: Removing unreachable block (ram,0x00646e14) */
/* WARNING: Removing unreachable block (ram,0x006471c4) */
/* WARNING: Removing unreachable block (ram,0x006471d1) */
/* WARNING: Removing unreachable block (ram,0x00646aac) */
/* WARNING: Removing unreachable block (ram,0x00646ab5) */
/* WARNING: Removing unreachable block (ram,0x00647130) */
/* WARNING: Removing unreachable block (ram,0x0064776e) */
/* WARNING: Removing unreachable block (ram,0x0064777d) */
/* WARNING: Removing unreachable block (ram,0x00647781) */
/* WARNING: Removing unreachable block (ram,0x00647140) */
/* WARNING: Removing unreachable block (ram,0x00647152) */
/* WARNING: Removing unreachable block (ram,0x00646ac7) */
/* WARNING: Removing unreachable block (ram,0x00646ad6) */
/* WARNING: Removing unreachable block (ram,0x00646ae6) */
/* WARNING: Removing unreachable block (ram,0x00647190) */
/* WARNING: Removing unreachable block (ram,0x00646aef) */
/* WARNING: Removing unreachable block (ram,0x00646a44) */
/* WARNING: Removing unreachable block (ram,0x00646a57) */
/* WARNING: Removing unreachable block (ram,0x00647000) */
/* WARNING: Removing unreachable block (ram,0x00646a60) */
/* WARNING: Removing unreachable block (ram,0x00646a70) */
/* WARNING: Removing unreachable block (ram,0x00647110) */
/* WARNING: Removing unreachable block (ram,0x00647750) */
/* WARNING: Removing unreachable block (ram,0x00647762) */
/* WARNING: Removing unreachable block (ram,0x00647766) */
/* WARNING: Removing unreachable block (ram,0x00647769) */
/* WARNING: Removing unreachable block (ram,0x00647120) */
/* WARNING: Removing unreachable block (ram,0x00646a87) */
/* WARNING: Removing unreachable block (ram,0x00646a8a) */
/* WARNING: Removing unreachable block (ram,0x00646a97) */
/* WARNING: Removing unreachable block (ram,0x00646a9f) */
/* WARNING: Removing unreachable block (ram,0x00646fd0) */
/* WARNING: Removing unreachable block (ram,0x00646fde) */
/* WARNING: Removing unreachable block (ram,0x00646ff7) */
/* WARNING: Removing unreachable block (ram,0x00646ffb) */
/* WARNING: Removing unreachable block (ram,0x00646aa1) */
/* WARNING: Removing unreachable block (ram,0x006471a0) */
/* WARNING: Removing unreachable block (ram,0x006471ab) */
/* WARNING: Removing unreachable block (ram,0x00646e1b) */
/* WARNING: Removing unreachable block (ram,0x00647290) */
/* WARNING: Removing unreachable block (ram,0x00646e25) */

undefined1  [16]
FUN_00646680(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,int param_5,
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
  FUN_0067c1e0(param_6 + 0xd0);
  lVar4 = FUN_00625ba0(&DAT_00945358);
  plVar1 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + lVar4 * 8);
  local_130 = *plVar1;
  if (local_130 == 0) {
                    /* try { // try from 00647425 to 00647429 has its CatchHandler @ 00647992 */
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
                    /* try { // try from 006474a6 to 006474aa has its CatchHandler @ 0064799b */
    FUN_0067d8d0(puVar7,param_6 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_6 + 0xd0),puVar7,lVar4);
    local_130 = *plVar1;
  }
  local_78 = 0;
  local_80 = 0;
  local_88 = &local_78;
  if (*(char *)(local_130 + 0x20) != '\0') {
                    /* try { // try from 0064679e to 006467a2 has its CatchHandler @ 006479d1 */
    FUN_0069e840(&local_88,0x20);
  }
  local_60 = 0;
  local_58[0] = 0;
  local_68 = local_58;
                    /* try { // try from 006467de to 006473f9 has its CatchHandler @ 006479c8 */
  FUN_0069e840(&local_68,0x20);
  local_118 = 0;
  local_8c = *(undefined4 *)(local_130 + 0x60);
  while( true ) {
    if (*(byte *)((long)&local_8c + local_118) < 5) {
                    /* WARNING: Could not recover jumptable at 0x00646863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar11 = (*(code *)(&DAT_0081e778 +
                          *(int *)(&DAT_0081e778 + (ulong)*(byte *)((long)&local_8c + local_118) * 4
                                  )))();
      return auVar11;
    }
    if (3 < (int)local_118 + 1) break;
    local_118 = local_118 + 1;
  }
  if ((local_60 < 2) || (uVar6 = FUN_006a0500(&local_68,0x30,0), uVar6 == 0)) goto LAB_006471ba;
  if (uVar6 == 0xffffffffffffffff) {
    uVar6 = local_60 - 1;
    if (local_60 == 0) {
      local_60 = 0;
      *local_68 = 0;
      goto LAB_006471ba;
    }
    if (uVar6 == 0) goto LAB_006471ba;
  }
  uVar8 = local_60;
  if (uVar6 < local_60) {
    uVar8 = uVar6;
  }
  FUN_0069e450(&local_68,0,uVar8);
LAB_006471ba:
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
  bVar9 = param_2 != (long *)0x0 && bVar10;
  FUN_0069fef0(param_8,&local_68);
  if ((param_2 != (long *)0x0 && bVar10) && (bVar10 = false, (ulong)param_2[3] <= (ulong)param_2[2])
     ) {
    iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar3 == -1) {
      param_2 = (long *)0x0;
    }
    bVar10 = iVar3 == -1 && bVar9;
  }
  bVar9 = param_5 == -1;
  if (((param_4 != (long *)0x0) && (bVar9)) &&
     (bVar9 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
                    /* try { // try from 00647516 to 0064797e has its CatchHandler @ 006479c8 */
    iVar3 = (**(code **)(*param_4 + 0x48))(param_4);
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

