
void FUN_006d4810(byte *param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar12;
  ushort uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  char cVar18;
  byte *pbVar19;
  byte *pbVar20;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  undefined8 local_60;
  byte *local_58 [3];
  long local_40;
  long *plVar11;
  
  puVar4 = PTR_DAT_00939cb8;
  puVar3 = PTR_DAT_00939ca8;
  plVar11 = &local_98;
  plVar10 = &local_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *param_1;
  lVar6 = (long)(char)bVar1;
  uVar13 = *(ushort *)(PTR_DAT_00939ca8 + lVar6 * 2);
  while ((uVar13 & 0x2000) != 0) {
    bVar1 = param_1[1];
    lVar6 = (long)(char)bVar1;
    param_1 = param_1 + 1;
    uVar13 = *(ushort *)(PTR_DAT_00939ca8 + lVar6 * 2);
  }
  plVar12 = &local_98;
  pbVar17 = param_1;
  local_60 = param_2;
  if (bVar1 != 0) {
    while (pbVar14 = pbVar17 + 1, (uVar13 & 0x2000) == 0) {
      *pbVar17 = (byte)*(undefined4 *)(puVar4 + lVar6 * 4);
      lVar6 = (long)(char)pbVar17[1];
      plVar12 = &local_98;
      if (pbVar17[1] == 0) goto LAB_006d4ba0;
      pbVar17 = pbVar14;
      uVar13 = *(ushort *)(puVar3 + lVar6 * 2);
    }
    lVar6 = (long)(char)pbVar17[1];
    *pbVar17 = 0;
    uVar13 = *(ushort *)(puVar3 + lVar6 * 2);
    pbVar19 = pbVar14;
    while ((uVar13 & 0x2000) != 0) {
      lVar6 = (long)(char)pbVar19[1];
      pbVar19 = pbVar19 + 1;
      uVar13 = *(ushort *)(puVar3 + lVar6 * 2);
    }
    plVar12 = &local_98;
    pbVar16 = pbVar14;
    if ((char)lVar6 != '\0') {
      while( true ) {
        pbVar20 = pbVar19 + 1;
        pbVar15 = pbVar16 + 1;
        if ((uVar13 & 0x2000) != 0) break;
        *pbVar16 = (byte)*(undefined4 *)(puVar4 + lVar6 * 4);
        lVar6 = (long)(char)pbVar19[1];
        plVar12 = &local_98;
        if (pbVar19[1] == 0) goto LAB_006d4ba0;
        uVar13 = *(ushort *)(puVar3 + lVar6 * 2);
        pbVar16 = pbVar15;
        pbVar19 = pbVar20;
      }
      *pbVar16 = 0;
      while( true ) {
        uVar8 = (ulong)(char)*pbVar20;
        if ((puVar3[uVar8 * 2 + 1] & 0x20) == 0) break;
        pbVar20 = pbVar20 + 1;
      }
      pbVar19 = pbVar15;
      if (*pbVar20 == 0) {
LAB_006d49c0:
        *pbVar19 = 0;
        pbVar9 = pbVar19 + 1;
        iVar5 = 1;
      }
      else {
        do {
          pbVar9 = pbVar19;
          pbVar20 = pbVar20 + 1;
          pbVar19 = pbVar9 + 1;
          *pbVar9 = (byte)uVar8;
          bVar1 = *pbVar20;
          uVar8 = (ulong)bVar1;
          if (bVar1 == 0) goto LAB_006d49c0;
        } while ((puVar3[(long)(char)bVar1 * 2 + 1] & 0x20) == 0);
        *pbVar19 = 0;
        pbVar9 = pbVar9 + 2;
        local_80 = param_3;
        local_78 = pbVar14;
        local_70 = pbVar15;
        local_68 = pbVar16;
        iVar5 = FUN_006e94d0(pbVar20,local_58,10);
        pbVar14 = local_78;
        pbVar15 = local_70;
        param_3 = local_80;
        pbVar16 = local_68;
        if ((local_58[0] == pbVar20) || (iVar5 < 1)) {
          iVar5 = 1;
        }
      }
      local_90 = CONCAT44(param_4,iVar5);
      plVar12 = &local_98;
      if (pbVar16[1] != 0) {
        if (pbVar16[1] == 0x2f) {
          param_3 = (byte *)0x0;
        }
        local_98 = (long)pbVar9 - (long)pbVar15;
        if (local_98 < 4) {
          local_78 = (byte *)0x3;
          cVar18 = '\x03';
        }
        else {
          local_78 = (byte *)((ulong)(*(int *)(pbVar9 + -4) != 0x6f732e) * 3);
          cVar18 = (*(int *)(pbVar9 + -4) != 0x6f732e) * '\x03';
        }
        local_88 = param_3;
        local_80 = pbVar15;
        local_70 = pbVar16;
        local_68 = pbVar14;
        lVar6 = thunk_FUN_00712a40(param_1,(long)pbVar14 - (long)param_1);
        pbVar16 = local_68;
        local_68 = local_70;
        pbVar19 = local_80;
        plVar12 = &local_98;
        while (plVar11 != (long *)((long)&local_98 - (lVar6 + 0x18U & 0xfffffffffffff000))) {
          plVar10 = (long *)((long)plVar12 + -0x1000);
          *(undefined8 *)((long)plVar12 + -8) = *(undefined8 *)((long)plVar12 + -8);
          plVar11 = (long *)((long)plVar12 + -0x1000);
          plVar12 = (long *)((long)plVar12 + -0x1000);
        }
        uVar8 = (ulong)((uint)(lVar6 + 0x18U) & 0xff0);
        lVar2 = -uVar8;
        if (uVar8 != 0) {
          *(undefined8 *)((long)plVar10 + -8) = *(undefined8 *)((long)plVar10 + -8);
        }
        local_70 = local_78;
        *(undefined1 *)(((ulong)((long)plVar10 + lVar2 + 0xf) & 0xfffffffffffffff0) + lVar6) = 0;
        local_80 = pbVar16;
        local_78 = pbVar19;
        *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4ad6;
        local_58[0] = (byte *)thunk_FUN_00713a50((ulong)((long)plVar10 + lVar2 + 0xf) &
                                                 0xfffffffffffffff0,param_1);
        *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4af1;
        lVar6 = FUN_0076f840(local_58,&DAT_009460c0,FUN_006d30c0);
        pbVar19 = local_70;
        plVar12 = (long *)((long)plVar10 + lVar2);
        if (lVar6 == 0) {
          local_70 = local_68;
          local_68 = local_88;
          *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4b23;
          plVar7 = (long *)FUN_00711600(1,local_88 + (long)(pbVar9 + (0x38 - (long)param_1)) +
                                          (long)pbVar19);
          plVar12 = (long *)((long)plVar10 + lVar2);
          if (plVar7 != (long *)0x0) {
            *plVar7 = (long)(plVar7 + 7);
            *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4b3d;
            lVar6 = thunk_FUN_00713820(plVar7 + 7,param_1,(long)pbVar14 - (long)param_1);
            plVar7[1] = lVar6;
            *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4b54;
            lVar6 = thunk_FUN_00713820(lVar6,local_80,(long)local_70 - (long)pbVar17);
            pbVar17 = local_68;
            plVar7[3] = lVar6;
            plVar7[2] = local_90;
            pbVar14 = local_78;
            if (local_68 != (byte *)0x0) {
              local_68 = local_78;
              *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4be8;
              lVar6 = thunk_FUN_00713820(lVar6,local_60,pbVar17);
              pbVar14 = local_68;
            }
            *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4b82;
            lVar6 = thunk_FUN_00713820(lVar6,pbVar14,local_98);
            if (cVar18 != '\0') {
              *(undefined4 *)(lVar6 + -1) = s_libnss__s__d__d_so_0082e301._15_4_;
            }
            *(undefined8 *)((long)plVar10 + lVar2 + -8) = 0x6d4b9d;
            FUN_006d4700(plVar7,1);
            plVar12 = (long *)((long)plVar10 + lVar2);
          }
        }
      }
    }
  }
LAB_006d4ba0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)plVar12 + -8) = 0x6d4bf9;
    FUN_00771f60();
  }
  return;
}

