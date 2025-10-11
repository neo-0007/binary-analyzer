
undefined1  [16]
FUN_0067eee0(undefined8 param_1,long *param_2,ulong param_3,long param_4,char param_5,
            undefined8 *param_6)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  ulong local_a0;
  char *local_88;
  ulong local_80;
  uint local_78;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = FUN_0067c1e0(param_4 + 0xd0);
  lVar7 = FUN_00625ba0(&DAT_00945490);
  plVar12 = (long *)(*(long *)(*(long *)(param_4 + 0xd0) + 0x18) + lVar7 * 8);
  lVar9 = *plVar12;
  if (lVar9 == 0) {
                    /* try { // try from 0067f3b5 to 0067f3b9 has its CatchHandler @ 0067f517 */
    puVar10 = (undefined8 *)FUN_006c31f0(0x70);
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = &PTR_FUN_00933f58;
    *(undefined2 *)(puVar10 + 4) = 0;
    *(undefined1 *)((long)puVar10 + 0x22) = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(undefined4 *)(puVar10 + 0xc) = 0;
    *(undefined1 *)((long)puVar10 + 0x6f) = 0;
                    /* try { // try from 0067f436 to 0067f43a has its CatchHandler @ 0067f50e */
    FUN_0067d8d0(puVar10,param_4 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar7);
    lVar9 = *plVar12;
  }
  pbVar16 = (byte *)*param_6;
  pbVar1 = pbVar16 + -0x18;
  if (*pbVar16 == *(byte *)(lVar9 + 100)) {
    local_44 = *(undefined1 (*) [4])(lVar9 + 0x60);
    local_88 = *(char **)(lVar9 + 0x48);
    local_a0 = *(ulong *)(lVar9 + 0x50);
    if (*(long *)pbVar1 == 0) goto LAB_0067efca;
    pbVar16 = pbVar16 + 1;
  }
  else {
    local_44 = *(undefined1 (*) [4])(lVar9 + 0x5c);
    local_88 = *(char **)(lVar9 + 0x38);
    local_a0 = *(ulong *)(lVar9 + 0x40);
  }
  if (pbVar16 < pbVar16 + *(long *)pbVar1) {
    pbVar15 = pbVar16;
    do {
      if ((*(byte *)(*(long *)(lVar6 + 0x30) + 1 + (ulong)*pbVar15 * 2) & 8) == 0) break;
      pbVar15 = pbVar15 + 1;
    } while (pbVar16 + *(long *)pbVar1 != pbVar15);
    lVar6 = (long)pbVar15 - (long)pbVar16;
    if (lVar6 != 0) {
      local_58 = &DAT_009452b8;
                    /* try { // try from 0067f051 to 0067f11d has its CatchHandler @ 0067f4e4 */
      FUN_00638bc0(&local_58,lVar6 * 2);
      iVar5 = *(int *)(lVar9 + 0x58);
      lVar7 = lVar6 - iVar5;
      if (0 < lVar7) {
        if (iVar5 < 0) {
          lVar7 = lVar6;
        }
        if (*(long *)(lVar9 + 0x18) == 0) {
                    /* try { // try from 0067f46b to 0067f4e3 has its CatchHandler @ 0067f4e4 */
          FUN_006386a0(&local_58,pbVar16,lVar7);
        }
        else {
          FUN_00638440(&local_58,0,*(undefined8 *)(local_58 + -0x18),lVar7 * 2,0);
          cVar2 = *(char *)(lVar9 + 0x22);
          uVar3 = *(undefined8 *)(lVar9 + 0x18);
          uVar4 = *(undefined8 *)(lVar9 + 0x10);
          if (-1 < *(int *)(local_58 + -8)) {
            FUN_00638140(&local_58);
          }
          lVar8 = FUN_0067e5a0(local_58,(int)cVar2,uVar4,uVar3,pbVar16,pbVar16 + lVar7);
          if (-1 < *(int *)(local_58 + -8)) {
            FUN_00638140(&local_58);
          }
          uVar14 = lVar8 - (long)local_58;
          if (*(ulong *)(local_58 + -0x18) < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::erase",uVar14);
          }
          FUN_00637f00(&local_58,uVar14,*(ulong *)(local_58 + -0x18) - uVar14,0);
        }
        iVar5 = *(int *)(lVar9 + 0x58);
      }
      if (0 < iVar5) {
                    /* try { // try from 0067f32c to 0067f349 has its CatchHandler @ 0067f4e4 */
        FUN_006390c0(&local_58,(int)*(char *)(lVar9 + 0x21));
        if (lVar7 < 0) {
          FUN_00638fa0(&local_58,-lVar7,(int)*(char *)(lVar9 + 0x65));
          FUN_00638e20(&local_58,pbVar16,lVar6);
        }
        else {
          FUN_00638e20(&local_58,pbVar16 + lVar7,(long)*(int *)(lVar9 + 0x58));
        }
      }
      local_78 = *(uint *)(param_4 + 0x18) & 0xb0;
      local_80 = local_a0 + *(long *)(local_58 + -0x18);
      if ((*(uint *)(param_4 + 0x18) & 0x200) != 0) {
        local_80 = local_80 + *(long *)(lVar9 + 0x30);
      }
      local_50 = &DAT_009452b8;
                    /* try { // try from 0067f176 to 0067f2c0 has its CatchHandler @ 0067f4ed */
      FUN_00638bc0(&local_50,local_80 * 2);
      uVar14 = *(ulong *)(param_4 + 0x10);
      plVar12 = (long *)local_44;
      bVar11 = local_78 == 0x10 && local_80 < uVar14;
      do {
        switch((char)*plVar12) {
        case '\0':
          if (bVar11) {
LAB_0067f210:
            FUN_00638fa0(&local_50,uVar14 - local_80,(int)param_5);
          }
          break;
        case '\x01':
          if (bVar11) goto LAB_0067f210;
          FUN_006390c0(&local_50,(int)param_5);
          break;
        case '\x02':
          if ((*(byte *)(param_4 + 0x19) & 2) != 0) {
            FUN_00638e20(&local_50,*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30));
          }
          break;
        case '\x03':
          if (local_a0 != 0) {
            FUN_006390c0(&local_50,(int)*local_88);
          }
          break;
        case '\x04':
          FUN_00638c90(&local_50,&local_58);
        }
        plVar12 = (long *)((long)plVar12 + 1);
      } while (plVar12 != local_40);
      if (local_a0 < 2) {
        uVar17 = *(ulong *)(local_50 + -0x18);
      }
      else {
                    /* try { // try from 0067f363 to 0067f3a4 has its CatchHandler @ 0067f4ed */
        FUN_00638e20(&local_50,local_88 + 1,local_a0 - 1);
        uVar17 = *(ulong *)(local_50 + -0x18);
      }
      if (uVar17 < uVar14) {
        if (local_78 == 0x20) {
          FUN_00638fa0(&local_50,uVar14 - uVar17,(int)param_5);
          uVar17 = uVar14;
        }
        else {
          FUN_00638440(&local_50,0,0);
          uVar17 = uVar14;
        }
      }
      bVar13 = (byte)param_3;
      if ((bVar13 == 0) &&
         (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_50,(long)(int)uVar17),
         (int)uVar17 != lVar9)) {
        bVar13 = 1;
      }
      param_3 = (ulong)bVar13 | param_3 & 0xffffffffffffff00;
      FUN_00637db0(&local_50);
      FUN_00637db0(&local_58);
    }
  }
LAB_0067efca:
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar18._8_8_ = param_3;
    auVar18._0_8_ = param_2;
    return auVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

