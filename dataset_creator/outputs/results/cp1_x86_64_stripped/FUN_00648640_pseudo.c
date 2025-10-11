
undefined1  [16]
FUN_00648640(undefined8 param_1,long *param_2,ulong param_3,long param_4,char param_5,
            undefined8 *param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  ulong uVar12;
  byte bVar13;
  byte *pbVar14;
  undefined1 **ppuVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  ulong local_108;
  undefined1 *local_f0;
  ulong local_e8;
  uint local_e0;
  undefined1 local_8c [4];
  undefined1 *local_88;
  ulong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = FUN_0067c1e0(param_4 + 0xd0);
  lVar6 = FUN_00625ba0(&DAT_00945358);
  plVar2 = (long *)(*(long *)(*(long *)(param_4 + 0xd0) + 0x18) + lVar6 * 8);
  lVar9 = *plVar2;
  if (lVar9 == 0) {
                    /* try { // try from 00648ca5 to 00648ca9 has its CatchHandler @ 00648ea0 */
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
                    /* try { // try from 00648d26 to 00648d2a has its CatchHandler @ 00648e97 */
    FUN_0067d8d0(puVar10,param_4 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar6);
    lVar9 = *plVar2;
  }
  pbVar14 = (byte *)*param_6;
  if (*pbVar14 == *(byte *)(lVar9 + 100)) {
    local_8c = *(undefined1 (*) [4])(lVar9 + 0x60);
    local_f0 = *(undefined1 **)(lVar9 + 0x48);
    local_108 = *(ulong *)(lVar9 + 0x50);
    if (param_6[1] == 0) goto LAB_00648729;
    pbVar14 = pbVar14 + 1;
  }
  else {
    local_8c = *(undefined1 (*) [4])(lVar9 + 0x5c);
    local_f0 = *(undefined1 **)(lVar9 + 0x38);
    local_108 = *(ulong *)(lVar9 + 0x40);
  }
  if (pbVar14 < pbVar14 + param_6[1]) {
    pbVar17 = pbVar14;
    do {
      if ((*(byte *)(*(long *)(lVar5 + 0x30) + 1 + (ulong)*pbVar17 * 2) & 8) == 0) break;
      pbVar17 = pbVar17 + 1;
    } while (pbVar14 + param_6[1] != pbVar17);
    uVar18 = (long)pbVar17 - (long)pbVar14;
    if (uVar18 != 0) {
      local_80 = 0;
      local_78 = 0;
      local_88 = &local_78;
                    /* try { // try from 006487d8 to 00648819 has its CatchHandler @ 00648e5e */
      FUN_0069e840(&local_88,uVar18 * 2);
      iVar4 = *(int *)(lVar9 + 0x58);
      uVar16 = uVar18 - (long)iVar4;
      if (0 < (long)uVar16) {
        if (iVar4 < 0) {
          uVar16 = uVar18;
        }
        if (*(long *)(lVar9 + 0x18) == 0) {
                    /* try { // try from 00648d5d to 00648d88 has its CatchHandler @ 00648e5e */
          FUN_0069f220(&local_88,0,local_80,pbVar14,uVar16);
          iVar4 = *(int *)(lVar9 + 0x58);
        }
        else {
          FUN_0069ef10(&local_88,0,local_80,uVar16 * 2,0);
          puVar7 = (undefined1 *)
                   FUN_0067e5a0(local_88,(int)*(char *)(lVar9 + 0x22),*(undefined8 *)(lVar9 + 0x10),
                                *(undefined8 *)(lVar9 + 0x18),pbVar14,pbVar14 + uVar16);
          if (local_80 < (ulong)((long)puVar7 - (long)local_88)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00648e27 to 00648e2b has its CatchHandler @ 00648e5e */
            FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::erase");
          }
          *puVar7 = 0;
          iVar4 = *(int *)(lVar9 + 0x58);
          local_80 = (long)puVar7 - (long)local_88;
        }
      }
      uVar12 = local_80;
      if (0 < iVar4) {
        uVar3 = *(undefined1 *)(lVar9 + 0x21);
        uVar1 = local_80 + 1;
        uVar8 = 0xf;
        if (local_88 != &local_78) {
          uVar8 = CONCAT71(uStack_77,local_78);
        }
        if (uVar8 < uVar1) {
                    /* try { // try from 00648de3 to 00648de7 has its CatchHandler @ 00648e5e */
          FUN_0069e300(&local_88,local_80,0,0,1);
        }
        local_88[uVar12] = uVar3;
        local_88[uVar12 + 1] = 0;
        local_80 = uVar1;
        if ((long)uVar16 < 0) {
          FUN_0069ef10(&local_88,uVar1,0,-uVar16,(int)*(char *)(lVar9 + 0x65));
          if (0x3fffffffffffffff - local_80 < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_00403998("basic_string::append");
          }
        }
        else {
          uVar18 = (ulong)*(int *)(lVar9 + 0x58);
          pbVar14 = pbVar14 + uVar16;
          if (0x3fffffffffffffff - uVar1 < uVar18) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00648e3f to 00648e54 has its CatchHandler @ 00648e5e */
            FUN_00403998("basic_string::append",pbVar14);
          }
        }
                    /* try { // try from 00648c08 to 00648c0c has its CatchHandler @ 00648e5e */
        FUN_0069fc40(&local_88,pbVar14,uVar18);
      }
      uVar18 = local_80 + local_108;
      local_e0 = *(uint *)(param_4 + 0x18) & 0xb0;
      if ((*(uint *)(param_4 + 0x18) & 0x200) != 0) {
        uVar18 = uVar18 + *(long *)(lVar9 + 0x30);
      }
      local_60 = 0;
      local_58 = 0;
      local_68 = &local_58;
                    /* try { // try from 006488ca to 00648b0b has its CatchHandler @ 00648e55 */
      FUN_0069e840(&local_68,uVar18 * 2);
      uVar16 = *(ulong *)(param_4 + 0x10);
      ppuVar15 = (undefined1 **)local_8c;
      bVar11 = local_e0 == 0x10 && uVar18 < uVar16;
      do {
        uVar12 = local_60;
        switch(*(undefined1 *)ppuVar15) {
        case 0:
          if (bVar11) {
            FUN_0069ef10(&local_68,local_60,0,uVar16 - uVar18,(int)param_5);
          }
          break;
        case 1:
          if (bVar11) {
            FUN_0069ef10(&local_68,local_60,0,uVar16 - uVar18,(int)param_5);
          }
          else {
            uVar1 = local_60 + 1;
            uVar8 = 0xf;
            if (local_68 != &local_58) {
              uVar8 = CONCAT71(uStack_57,local_58);
            }
            if (uVar8 < uVar1) {
                    /* try { // try from 00648e05 to 00648e09 has its CatchHandler @ 00648e55 */
              FUN_0069e300(&local_68,local_60,0,0,1);
            }
            local_68[uVar12] = param_5;
            local_60 = uVar1;
            local_68[uVar12 + 1] = 0;
          }
          break;
        case 2:
          if ((*(byte *)(param_4 + 0x19) & 2) != 0) {
            uVar12 = *(ulong *)(lVar9 + 0x30);
            puVar7 = *(undefined1 **)(lVar9 + 0x28);
            if (0x3fffffffffffffff - local_60 < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00403998("basic_string::append");
            }
            goto LAB_00648a88;
          }
          break;
        case 3:
          if (local_108 != 0) {
            uVar3 = *local_f0;
            uVar1 = local_60 + 1;
            uVar8 = 0xf;
            if (local_68 != &local_58) {
              uVar8 = CONCAT71(uStack_57,local_58);
            }
            if (uVar8 < uVar1) {
                    /* try { // try from 00648dbf to 00648dc3 has its CatchHandler @ 00648e55 */
              FUN_0069e300(&local_68,local_60,0,0,1);
            }
            local_68[uVar12] = uVar3;
            local_60 = uVar1;
            local_68[uVar12 + 1] = 0;
          }
          break;
        case 4:
          uVar12 = local_80;
          puVar7 = local_88;
LAB_00648a88:
          FUN_0069fc40(&local_68,puVar7,uVar12);
        }
        ppuVar15 = (undefined1 **)((long)ppuVar15 + 1);
      } while (ppuVar15 != &local_88);
      local_e8 = local_60;
      if (1 < local_108) {
        if (0x3fffffffffffffff - local_60 < local_108 - 1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00648e33 to 00648e37 has its CatchHandler @ 00648e55 */
          FUN_00403998("basic_string::append",local_f0 + 1);
        }
                    /* try { // try from 00648c49 to 00648c96 has its CatchHandler @ 00648e55 */
        FUN_0069fc40(&local_68);
        local_e8 = local_60;
      }
      local_60 = local_e8;
      if (local_e8 < uVar16) {
        if (local_e0 == 0x20) {
          FUN_0069ef10(&local_68,local_e8,0,uVar16 - local_e8,(int)param_5);
          local_e8 = uVar16;
        }
        else {
          FUN_0069ef10(&local_68,0,0,uVar16 - local_e8,(int)param_5);
          local_e8 = uVar16;
        }
      }
      bVar13 = (byte)param_3;
      if ((bVar13 == 0) &&
         (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_68,(long)(int)local_e8),
         (int)local_e8 != lVar9)) {
        bVar13 = 1;
      }
      param_3 = (ulong)bVar13 | param_3 & 0xffffffffffffff00;
      if (local_68 != &local_58) {
        thunk_FUN_007104f0(local_68);
      }
      if (local_88 != &local_78) {
        thunk_FUN_007104f0();
      }
    }
  }
LAB_00648729:
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  auVar19._8_8_ = param_3;
  auVar19._0_8_ = param_2;
  return auVar19;
}

