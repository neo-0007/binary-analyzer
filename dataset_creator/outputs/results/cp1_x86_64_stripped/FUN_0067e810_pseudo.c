
undefined1  [16]
FUN_0067e810(undefined8 param_1,long *param_2,ulong param_3,long param_4,char param_5,
            undefined8 *param_6)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  bool bVar12;
  long *plVar13;
  byte bVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  ulong local_b0;
  char *local_a0;
  ulong local_90;
  uint local_88;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = FUN_0067c1e0(param_4 + 0xd0);
  lVar8 = FUN_00625ba0(&DAT_00945488);
  plVar13 = (long *)(*(long *)(*(long *)(param_4 + 0xd0) + 0x18) + lVar8 * 8);
  lVar10 = *plVar13;
  if (lVar10 == 0) {
                    /* try { // try from 0067ed35 to 0067ed39 has its CatchHandler @ 0067eea8 */
    puVar11 = (undefined8 *)FUN_006c31f0(0x70);
    *(undefined4 *)(puVar11 + 1) = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = &PTR_FUN_00933f38;
    *(undefined2 *)(puVar11 + 4) = 0;
    *(undefined1 *)((long)puVar11 + 0x22) = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    *(undefined4 *)(puVar11 + 0xc) = 0;
    *(undefined1 *)((long)puVar11 + 0x6f) = 0;
                    /* try { // try from 0067edb6 to 0067edba has its CatchHandler @ 0067ee9f */
    FUN_0067d120(puVar11,param_4 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_4 + 0xd0),puVar11,lVar8);
    lVar10 = *plVar13;
  }
  pbVar17 = (byte *)*param_6;
  pbVar1 = pbVar17 + -0x18;
  if (*pbVar17 == *(byte *)(lVar10 + 100)) {
    local_44 = *(undefined1 (*) [4])(lVar10 + 0x60);
    local_a0 = *(char **)(lVar10 + 0x48);
    local_b0 = *(ulong *)(lVar10 + 0x50);
    if (*(long *)pbVar1 == 0) goto LAB_0067e8fa;
    pbVar17 = pbVar17 + 1;
  }
  else {
    local_44 = *(undefined1 (*) [4])(lVar10 + 0x5c);
    local_a0 = *(char **)(lVar10 + 0x38);
    local_b0 = *(ulong *)(lVar10 + 0x40);
  }
  if (pbVar17 < pbVar17 + *(long *)pbVar1) {
    pbVar16 = pbVar17;
    do {
      if ((*(byte *)(*(long *)(lVar7 + 0x30) + 1 + (ulong)*pbVar16 * 2) & 8) == 0) break;
      pbVar16 = pbVar16 + 1;
    } while (pbVar17 + *(long *)pbVar1 != pbVar16);
    lVar7 = (long)pbVar16 - (long)pbVar17;
    if (lVar7 != 0) {
      local_58 = &DAT_009452b8;
                    /* try { // try from 0067e989 to 0067ea55 has its CatchHandler @ 0067ee7c */
      FUN_00638bc0(&local_58,lVar7 * 2);
      iVar6 = *(int *)(lVar10 + 0x58);
      lVar8 = lVar7 - iVar6;
      if (0 < lVar8) {
        if (iVar6 < 0) {
          lVar8 = lVar7;
        }
        if (*(long *)(lVar10 + 0x18) == 0) {
                    /* try { // try from 0067edeb to 0067ee6d has its CatchHandler @ 0067ee7c */
          FUN_006386a0(&local_58,pbVar17,lVar8);
        }
        else {
          FUN_00638440(&local_58,0,*(undefined8 *)(local_58 + -0x18),lVar8 * 2,0);
          cVar3 = *(char *)(lVar10 + 0x22);
          uVar4 = *(undefined8 *)(lVar10 + 0x18);
          uVar5 = *(undefined8 *)(lVar10 + 0x10);
          if (-1 < *(int *)(local_58 + -8)) {
            FUN_00638140(&local_58);
          }
          lVar9 = FUN_0067e5a0(local_58,(int)cVar3,uVar5,uVar4,pbVar17,pbVar17 + lVar8);
          if (-1 < *(int *)(local_58 + -8)) {
            FUN_00638140(&local_58);
          }
          uVar15 = lVar9 - (long)local_58;
          if (*(ulong *)(local_58 + -0x18) < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::erase",uVar15);
          }
          FUN_00637f00(&local_58,uVar15,*(ulong *)(local_58 + -0x18) - uVar15,0);
        }
        iVar6 = *(int *)(lVar10 + 0x58);
      }
      if (0 < iVar6) {
                    /* try { // try from 0067eca4 to 0067ecc1 has its CatchHandler @ 0067ee7c */
        FUN_006390c0(&local_58,(int)*(char *)(lVar10 + 0x21));
        if (lVar8 < 0) {
          FUN_00638fa0(&local_58,-lVar8,(int)*(char *)(lVar10 + 0x65));
          FUN_00638e20(&local_58,pbVar17,lVar7);
        }
        else {
          FUN_00638e20(&local_58,pbVar17 + lVar8,(long)*(int *)(lVar10 + 0x58));
        }
      }
      local_88 = *(uint *)(param_4 + 0x18) & 0xb0;
      local_90 = local_b0 + *(long *)(local_58 + -0x18);
      if ((*(uint *)(param_4 + 0x18) & 0x200) != 0) {
        local_90 = local_90 + *(long *)(lVar10 + 0x30);
      }
      local_50 = &DAT_009452b8;
                    /* try { // try from 0067eaae to 0067ec00 has its CatchHandler @ 0067ee73 */
      FUN_00638bc0(&local_50,local_90 * 2);
      uVar15 = *(ulong *)(param_4 + 0x10);
      plVar13 = (long *)local_44;
      bVar12 = local_88 == 0x10 && local_90 < uVar15;
      do {
        switch((char)*plVar13) {
        case '\0':
          if (bVar12) {
LAB_0067eb50:
            FUN_00638fa0(&local_50,uVar15 - local_90,(int)param_5);
          }
          break;
        case '\x01':
          if (bVar12) goto LAB_0067eb50;
          FUN_006390c0(&local_50,(int)param_5);
          break;
        case '\x02':
          if ((*(byte *)(param_4 + 0x19) & 2) != 0) {
            FUN_00638e20(&local_50,*(undefined8 *)(lVar10 + 0x28),*(undefined8 *)(lVar10 + 0x30));
          }
          break;
        case '\x03':
          if (local_b0 != 0) {
            FUN_006390c0(&local_50,(int)*local_a0);
          }
          break;
        case '\x04':
          FUN_00638c90(&local_50,&local_58);
        }
        plVar13 = (long *)((long)plVar13 + 1);
      } while (plVar13 != local_40);
      if (local_b0 < 2) {
        uVar18 = *(ulong *)(local_50 + -0x18);
      }
      else {
                    /* try { // try from 0067ece3 to 0067ed24 has its CatchHandler @ 0067ee73 */
        FUN_00638e20(&local_50,local_a0 + 1,local_b0 - 1);
        uVar18 = *(ulong *)(local_50 + -0x18);
      }
      if (uVar18 < uVar15) {
        if (local_88 == 0x20) {
          FUN_00638fa0(&local_50,uVar15 - uVar18,(int)param_5);
          uVar18 = uVar15;
        }
        else {
          FUN_00638440(&local_50,0,0);
          uVar18 = uVar15;
        }
      }
      bVar14 = (byte)param_3;
      if ((bVar14 == 0) &&
         (lVar10 = (**(code **)(*param_2 + 0x60))(param_2,local_50,(long)(int)uVar18),
         (int)uVar18 != lVar10)) {
        bVar14 = 1;
      }
      param_3 = (ulong)bVar14 | param_3 & 0xffffffffffffff00;
      FUN_00637db0(&local_50);
      if ((undefined8 *)(local_58 + -0x18) != &DAT_009452a0) {
        if (DAT_0093ea10 == '\0') {
          LOCK();
          piVar2 = (int *)(local_58 + -8);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
        }
        else {
          iVar6 = *(int *)(local_58 + -8);
          *(int *)(local_58 + -8) = iVar6 + -1;
        }
        if (iVar6 < 1) {
          thunk_FUN_007104f0(local_58 + -0x18,&local_59);
        }
      }
    }
  }
LAB_0067e8fa:
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar19._8_8_ = param_3;
    auVar19._0_8_ = param_2;
    return auVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

