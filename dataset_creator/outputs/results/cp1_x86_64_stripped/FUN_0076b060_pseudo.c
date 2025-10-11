
/* WARNING: Removing unreachable block (ram,0x0076d417) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0076b060(ulong *******param_1,ulong ******param_2,ulong *******param_3,ulong *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  ulong *****pppppuVar3;
  ulong *******pppppppuVar4;
  ulong ****ppppuVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  ulong *******pppppppuVar15;
  ulong *****pppppuVar16;
  ulong ******ppppppuVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  long lVar20;
  code *pcVar21;
  ulong *******pppppppuVar22;
  ulong *******pppppppuVar23;
  long lVar24;
  ushort uVar25;
  uint uVar26;
  ulong ******ppppppuVar27;
  ulong ******ppppppuVar28;
  undefined1 *puVar29;
  undefined1 *puVar31;
  undefined1 *puVar32;
  ulong *******pppppppuVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long *in_FS_OFFSET;
  bool bVar39;
  byte bVar40;
  undefined1 auStack_768 [4];
  int local_764;
  long local_760;
  ulong *local_758;
  ulong *******local_750;
  int local_748;
  uint local_744;
  ulong *******local_740;
  code *local_738;
  ulong ******local_730;
  undefined8 *local_728;
  int local_720;
  char local_719;
  byte *local_718;
  ulong ******local_710;
  code *local_708;
  ulong *******local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  char local_6e2;
  char local_6e1;
  uint local_6e0;
  int local_6dc;
  ulong ******local_6d8;
  ulong *******local_6d0;
  ulong local_6c8;
  long local_6c0;
  ulong ******local_6b8;
  int local_6b0;
  ulong *******local_6a8;
  ulong *******pppppppuStack_6a0;
  ulong *******pppppppuStack_698;
  char cStack_690;
  char cStack_68f;
  undefined6 uStack_68e;
  ulong *******local_688;
  uint local_680;
  undefined8 local_668;
  ulong ******ppppppuStack_660;
  ulong ******local_658;
  ulong ******ppppppuStack_650;
  ulong ******local_648;
  ulong ******ppppppuStack_640;
  undefined1 local_638 [16];
  undefined4 local_628;
  undefined8 uStack_624;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined1 auStack_614 [12];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [8];
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  long local_590;
  long local_588;
  ulong ******local_558;
  undefined8 local_550;
  ulong *****local_548 [128];
  undefined1 local_148 [264];
  long local_40;
  undefined1 *puVar30;
  
  bVar40 = 0;
  puVar32 = auStack_768;
  puVar29 = auStack_768;
  puVar30 = auStack_768;
  puVar31 = auStack_768;
  local_40 = in_FS_OFFSET[5];
  local_6d8 = (ulong ******)0x0;
  local_758 = param_4;
  local_6f0 = param_1;
  if ((param_1 != (ulong *******)0x0) &&
     ((*(byte *)param_1 != 0x2a || (*(byte *)((long)param_1 + 1) != 0)))) {
    if ((param_2 != (ulong ******)0x0) &&
       ((*(char *)param_2 == '*' && (*(char *)((long)param_2 + 1) == '\0')))) {
      param_2 = (ulong ******)0x0;
    }
LAB_0076b0c8:
    if (param_3 == (ulong *******)0x0) {
      local_6d0 = (ulong *******)0x0;
      local_6c8 = 0;
      local_6e2 = '\0';
      param_3 = (ulong *******)&DAT_0082d7c0;
      local_6e1 = '\0';
      local_708 = (code *)CONCAT71(local_708._1_7_,local_6f0 == (ulong *******)0x0);
      FUN_007758a0(&local_6e2,&local_6e1,&local_6d0,&local_6c8);
LAB_0076b97b:
      local_719 = local_6e1;
      if (local_6e2 == '\0') {
        if (local_6e1 != '\0') {
          uVar12 = 10;
          goto LAB_0076b9a7;
        }
LAB_0076bc63:
        local_719 = '\x01';
      }
      else {
        uVar12 = 2;
        if (local_6e1 == '\0') {
LAB_0076b9a7:
          local_719 = '\x01';
          ppppppuStack_660 = param_3[1];
          local_668 = (ulong ******)CONCAT44(uVar12,(int)*param_3);
          local_658 = param_3[2];
          ppppppuStack_650 = param_3[3];
          pppppppuVar15 = param_3 + 4;
          pppppppuVar23 = param_3 + 5;
          param_3 = (ulong *******)&local_668;
          local_648 = *pppppppuVar15;
          ppppppuStack_640 = *pppppppuVar23;
        }
      }
LAB_0076b149:
      if ((param_2 == (ulong ******)0x0) || (*(char *)param_2 == '\0')) {
        uVar26 = 0;
        local_558 = local_548;
        ppppppuVar28 = param_3[1];
        local_550 = 0x400;
        puVar19 = (undefined8 *)local_5e8;
        for (lVar24 = 0x12; lVar24 != 0; lVar24 = lVar24 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + (ulong)bVar40 * -2 + 1;
        }
        local_6f8 = (ulong *******)0x0;
        if (ppppppuVar28 != (ulong ******)0x0) goto LAB_0076b1a9;
      }
      else {
        local_6b8 = param_2;
        local_6b0 = FUN_006e9510(param_2,&local_688,10);
        if (*(byte *)local_688 != 0) {
          if (((ulong)*param_3 & 0x400) != 0) goto LAB_0076c27b;
          local_6b0 = -1;
        }
        local_550 = 0x400;
        local_558 = local_548;
        ppppppuVar28 = param_3[1];
        puVar19 = (undefined8 *)local_5e8;
        for (lVar24 = 0x12; lVar24 != 0; lVar24 = lVar24 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + (ulong)bVar40 * -2 + 1;
        }
        if (ppppppuVar28 != (ulong ******)0x0) {
          local_6f8 = &local_6b8;
LAB_0076b1a9:
          local_710 = local_548;
          local_728 = (undefined8 *)local_5e8;
          if (*(uint *)(param_3 + 1) != 0) {
            pppppppuVar15 = (ulong *******)&DAT_0082d814;
            do {
              if (*(uint *)(param_3 + 1) == *(uint *)pppppppuVar15) {
                bVar9 = *(byte *)(pppppppuVar15 + 1);
                if (*(uint *)((long)param_3 + 0xc) == 0) goto LAB_0076b1e3;
                if ((bVar9 & 2) != 0) goto LAB_0076c58d;
                if (*(uint *)((long)param_3 + 0xc) == *(uint *)((long)pppppppuVar15 + 4))
                goto LAB_0076b233;
              }
              pbVar18 = (byte *)((long)pppppppuVar15 + 0x1e);
              pppppppuVar15 = (ulong *******)((long)pppppppuVar15 + 0x14);
            } while (*pbVar18 != 0);
            local_720 = -7;
            goto LAB_0076bbea;
          }
          pppppppuVar15 = (ulong *******)&DAT_0082d814;
          do {
            bVar9 = *(byte *)(pppppppuVar15 + 1);
            if (*(uint *)((long)param_3 + 0xc) == 0) goto LAB_0076b1e3;
            if ((bVar9 & 2) != 0) goto LAB_0076c58d;
            if (*(uint *)((long)param_3 + 0xc) == *(uint *)((long)pppppppuVar15 + 4))
            goto LAB_0076b233;
            pbVar18 = (byte *)((long)pppppppuVar15 + 0x1e);
            pppppppuVar15 = (ulong *******)((long)pppppppuVar15 + 0x14);
          } while (*pbVar18 != 0);
          goto LAB_0076bbe0;
        }
        if (local_6b0 < 0) {
          local_6f8 = &local_6b8;
          pppppppuVar15 = (ulong *******)&DAT_0082d800;
          goto LAB_0076ba80;
        }
        uVar26 = (uint)(ushort)((ushort)local_6b0 << 8 | (ushort)local_6b0 >> 8);
      }
      local_710 = local_548;
      local_728 = (undefined8 *)local_5e8;
      iVar11 = 0;
      puVar19 = &DAT_0082d814;
      do {
        cVar10 = *(char *)((long)puVar19 + 9);
        puVar34 = puVar19;
        while (cVar10 != '\0') {
          lVar24 = (long)iVar11;
          iVar11 = iVar11 + 1;
          lVar20 = lVar24 * 0x10;
          local_728[lVar24 * 2] = *puVar34;
          *(uint *)(local_5e8 + lVar20 + 8) = uVar26;
          local_5e8[lVar20 + 0xc] = 1;
          if (*(char *)((long)puVar34 + 0x1e) == '\0') goto LAB_0076b28f;
          cVar10 = *(char *)((long)puVar34 + 0x1d);
          puVar34 = (undefined8 *)((long)puVar34 + 0x14);
        }
        puVar19 = (undefined8 *)((long)puVar34 + 0x14);
      } while (*(char *)((long)puVar34 + 0x1e) != '\0');
      goto LAB_0076b28f;
    }
    ppppppuVar28 = *param_3;
    if (((ulong)ppppppuVar28 & 0xfffff800) != 0) {
LAB_0076ca4c:
      local_720 = -1;
      goto LAB_0076bc00;
    }
    local_708 = (code *)CONCAT71(local_708._1_7_,local_6f0 == (ulong *******)0x0);
    if ((((ulong)ppppppuVar28 & 2) != 0) && (local_6f0 == (ulong *******)0x0)) goto LAB_0076ca4c;
    local_719 = (*(uint *)((long)param_3 + 4) & 0xfffffffd) != 0 &&
                *(uint *)((long)param_3 + 4) != 10;
    if ((bool)local_719) {
      local_720 = -6;
      puVar31 = auStack_768;
      goto LAB_0076bc00;
    }
    local_6d0 = (ulong *******)0x0;
    local_6c8 = 0;
    local_6e2 = '\0';
    local_6e1 = '\0';
    if (((ulong)ppppppuVar28 & 0x20) == 0) goto LAB_0076b149;
    FUN_007758a0(&local_6e2,&local_6e1,&local_6d0,&local_6c8);
    uVar26 = *(uint *)((long)param_3 + 4);
    if (uVar26 == 0) goto LAB_0076b97b;
    local_719 = local_6e2;
    if ((uVar26 != 2) && (local_719 = local_6e1, uVar26 != 10)) goto LAB_0076bc63;
    if (local_719 != '\0') goto LAB_0076b149;
    goto LAB_0076c27b;
  }
  if ((param_2 != (ulong ******)0x0) &&
     ((local_6f0 = (ulong *******)0x0, *(char *)param_2 != '*' ||
      (*(char *)((long)param_2 + 1) != '\0')))) goto LAB_0076b0c8;
  goto LAB_0076b910;
LAB_0076b1e3:
  uVar26 = 0;
  if (local_6f8 != (ulong *******)0x0) goto LAB_0076b241;
LAB_0076b262:
  local_5e8._0_4_ = *(uint *)pppppppuVar15;
  if ((bVar9 & 2) != 0) goto LAB_0076b272;
LAB_0076c583:
  uVar14 = *(uint *)((long)pppppppuVar15 + 4);
  goto LAB_0076b278;
LAB_0076b233:
  if (local_6f8 == (ulong *******)0x0) {
    uVar26 = 0;
    local_5e8._0_4_ = *(uint *)pppppppuVar15;
    goto LAB_0076c583;
  }
LAB_0076b241:
  if ((bVar9 & 1) == 0) {
    if (-1 < (int)*(uint *)(local_6f8 + 1)) {
      uVar25 = (ushort)*(uint *)(local_6f8 + 1);
      uVar26 = (uint)(ushort)(uVar25 << 8 | uVar25 >> 8);
      goto LAB_0076b262;
    }
    if (*(byte *)((long)pppppppuVar15 + 10) == 0) {
LAB_0076ba80:
      local_710 = local_548;
      local_728 = (undefined8 *)local_5e8;
      if (*(byte *)((long)pppppppuVar15 + 0x1e) != 0) {
        pbVar18 = (byte *)((long)pppppppuVar15 + 0x1e);
        local_718 = (byte *)((ulong)local_718 & 0xffffffff00000000);
        local_700 = param_3;
        do {
          while ((((pbVar18[-2] & 1) == 0 &&
                  ((*(uint *)(local_700 + 1) == 0 ||
                   (*(uint *)(local_700 + 1) == *(uint *)(pbVar18 + -10))))) &&
                 ((*(uint *)((long)local_700 + 0xc) == 0 ||
                  (((pbVar18[-2] & 2) != 0 ||
                   (*(uint *)((long)local_700 + 0xc) == *(uint *)(pbVar18 + -6)))))))) {
            ppppppuVar28 = *local_6f8;
            do {
              iVar11 = FUN_00772c20(ppppppuVar28,pbVar18,&local_688,local_558,local_550,&local_6a8);
              if (iVar11 == 0) {
                if (local_6a8 != (ulong *******)0x0) {
                  puVar19 = local_728 + (long)(int)local_718 * 2;
                  *(undefined4 *)puVar19 = *(undefined4 *)(pbVar18 + -10);
                  if ((pbVar18[-2] & 2) == 0) {
                    uVar26 = *(uint *)(pbVar18 + -6);
                  }
                  else {
                    uVar26 = *(uint *)((long)local_700 + 0xc);
                  }
                  uVar12 = *(undefined4 *)(local_6a8 + 2);
                  local_718 = (byte *)CONCAT44(local_718._4_4_,(int)local_718 + 1);
                  *(undefined1 *)((long)puVar19 + 0xc) = 1;
                  *(ulong *)((long)puVar19 + 4) = CONCAT44(uVar12,uVar26);
                }
                goto LAB_0076bb14;
              }
              if (iVar11 != 0x22) goto LAB_0076bb14;
              cVar10 = FUN_007a2dc0(&local_558);
            } while (cVar10 != '\0');
            pbVar18 = pbVar18 + 0x14;
            if (*pbVar18 == 0) goto LAB_0076bba5;
          }
LAB_0076bb14:
          pbVar18 = pbVar18 + 0x14;
        } while (*pbVar18 != 0);
LAB_0076bba5:
        param_3 = local_700;
        if (uStack_5e0._4_1_ != '\0') goto LAB_0076b28f;
      }
      local_720 = -8;
      if (local_558 != local_710) {
        FUN_007104f0();
      }
    }
    else {
      ppppppuVar28 = *local_6f8;
      ppppppuVar17 = local_710;
      uVar35 = 0x400;
      local_700 = pppppppuVar15;
      local_6f8 = &local_558;
      do {
        iVar11 = FUN_00772c20(ppppppuVar28,(byte *)((long)pppppppuVar15 + 10),&local_688,
                              ppppppuVar17,uVar35,&local_6a8);
        auVar6 = _local_5e8;
        if (iVar11 == 0) {
          if (local_6a8 == (ulong *******)0x0) {
LAB_0076c994:
            local_720 = -8;
            iVar11 = 8;
            goto LAB_0076c9a3;
          }
          local_5e8._0_4_ = *(uint *)local_700;
          auVar7 = _local_5e8;
          if (((ulong)local_700[1] & 2) == 0) {
            uVar26 = *(uint *)((long)local_700 + 4);
          }
          else {
            uVar26 = *(uint *)((long)param_3 + 0xc);
          }
          uStack_5e0._5_3_ = auVar6._13_3_;
          _local_5e8 = auVar7._0_12_;
          uStack_5e0._4_1_ = 1;
          auVar6 = _local_5e8;
          uStack_5e0._0_4_ = *(undefined4 *)(local_6a8 + 2);
          local_5e8._4_4_ = uVar26;
          uStack_5e0._4_4_ = auVar6._12_4_;
          goto LAB_0076b28f;
        }
        if (iVar11 != 0x22) goto LAB_0076c994;
        cVar10 = FUN_007a2dc0(local_6f8);
        ppppppuVar17 = local_558;
        uVar35 = local_550;
      } while (cVar10 != '\0');
      local_720 = -10;
      iVar11 = 10;
LAB_0076c9a3:
      if (local_558 != local_710) {
        FUN_007104f0();
        local_720 = -iVar11;
      }
    }
  }
  else {
LAB_0076bbe0:
    local_720 = -8;
  }
  goto LAB_0076bbea;
LAB_0076ca2e:
  local_720 = 10;
  goto LAB_0076b572;
LAB_0076b83f:
  while( true ) {
    if (((int)local_6f0 != 10) || ((uint)local_6f8 != 2)) goto LAB_0076b890;
    if (iVar11 != -1) {
      *(undefined8 *)(puVar32 + -8) = 0x76b85f;
      FUN_0076e4b0(iVar11);
    }
    *(undefined8 *)(puVar32 + -8) = 0x76b870;
    iVar11 = FUN_00771200(2,0x80002,0);
    local_6f0 = (ulong *******)CONCAT44(local_6f0._4_4_,2);
    if (iVar11 != -1) break;
    if ((int)in_FS_OFFSET[-0xb] != 0x61) goto LAB_0076b890;
  }
  goto LAB_0076b81c;
LAB_0076c58d:
  if (local_6f8 != (ulong *******)0x0) goto LAB_0076b241;
  uVar26 = 0;
  local_5e8._0_4_ = *(uint *)pppppppuVar15;
LAB_0076b272:
  uVar14 = *(uint *)((long)param_3 + 0xc);
LAB_0076b278:
  auVar6 = _local_5e8;
  uStack_5e0._4_1_ = 1;
  auVar7 = _local_5e8;
  uStack_5e0._0_4_ = uVar26;
  local_5e8._4_4_ = uVar14;
  uStack_5e0._4_4_ = auVar7._12_4_;
  local_5e8._0_4_ = auVar6._0_4_;
LAB_0076b28f:
  uVar26 = *(uint *)param_3;
  pppppppuVar15 = (ulong *******)local_638;
  cStack_690 = '\0';
  cStack_68f = '\0';
  uStack_68e = 0;
  local_6a8 = pppppppuVar15;
  pppppppuStack_6a0 = (ulong *******)0x0;
  pppppppuStack_698 = (ulong *******)0x0;
  local_638 = (undefined1  [16])0x0;
  local_628 = 0;
  uStack_624 = 0;
  uStack_61c = 0;
  local_618 = 0;
  auStack_614 = SUB1612((undefined1  [16])0x0,4);
  local_608 = (undefined1  [16])0x0;
  local_5f8 = (undefined1  [16])0x0;
  if ((char)local_708 == '\0') {
    if ((uVar26 & 0x40) == 0) {
      local_718 = (byte *)((ulong)local_718._1_7_ << 8);
      local_700 = local_6f0;
LAB_0076b334:
      pppppppuVar15 = local_6a8;
      lVar24 = (long)local_6a8 + 0x14;
      *(undefined1 (*) [16])((long)local_6a8 + 0x14) = (undefined1  [16])0x0;
      iVar11 = FUN_00776880(local_700,lVar24);
      if (iVar11 == 0) {
        lVar20 = thunk_FUN_00712710(local_700,0x25);
        if (lVar20 == 0) {
          iVar11 = FUN_007774c0(10,local_700,lVar24);
        }
        else {
          iVar11 = FUN_00777230(10,local_700,lVar20 - (long)local_700,lVar24);
        }
        if (iVar11 < 1) {
          local_6a8 = (ulong *******)0x0;
          if (((ulong)*param_3 & 4) == 0) goto LAB_0076c2e1;
LAB_0076c5d9:
          local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
          local_720 = 2;
          goto LAB_0076b572;
        }
        uVar26 = *(uint *)((long)param_3 + 4);
        if ((uVar26 == 0) || (uVar26 == 10)) {
          uVar12 = 10;
LAB_0076c2bb:
          *(undefined4 *)(pppppppuVar15 + 2) = uVar12;
          if ((lVar20 == 0) ||
             (iVar11 = FUN_007753a0(lVar24,lVar20 + 1,(long)pppppppuVar15 + 0x24), iVar11 == 0)) {
            bVar9 = *(byte *)param_3;
            goto joined_r0x0076b39f;
          }
          local_6a8 = (ulong *******)0x0;
          local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
          local_720 = 2;
          goto LAB_0076b572;
        }
        if (uVar26 == 2) {
          local_6f8 = (ulong *******)CONCAT44(local_6f8._4_4_,*(int *)((long)pppppppuVar15 + 0x14));
          if (*(int *)((long)pppppppuVar15 + 0x14) == 0) {
            if ((*(int *)(pppppppuVar15 + 3) == 0) &&
               (*(int *)((long)pppppppuVar15 + 0x1c) == -0x10000)) {
              *(undefined4 *)((long)pppppppuVar15 + 0x14) = *(undefined4 *)(pppppppuVar15 + 4);
              uVar12 = 2;
              goto LAB_0076c2bb;
            }
            local_6a8 = (ulong *******)0x0;
            local_720 = 9;
            goto LAB_0076b572;
          }
        }
LAB_0076c170:
        local_6a8 = (ulong *******)0x0;
        local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
        local_720 = 9;
        goto joined_r0x0076b579;
      }
      if (((ulong)*param_3 & 0xfffffffd00000000) == 0) {
        uVar12 = 2;
      }
      else {
        if (((ulong)*param_3 & 0xffffffff00000008) != 0xa00000008) goto LAB_0076c170;
        uVar12 = *(undefined4 *)((long)pppppppuVar15 + 0x14);
        *(undefined4 *)((long)pppppppuVar15 + 0x1c) = 0xffff0000;
        *(undefined8 *)((long)pppppppuVar15 + 0x14) = 0;
        *(undefined4 *)(pppppppuVar15 + 4) = uVar12;
        uVar12 = 10;
      }
      *(undefined4 *)(pppppppuVar15 + 2) = uVar12;
      bVar9 = *(byte *)param_3;
joined_r0x0076b39f:
      if ((bVar9 & 2) != 0) {
        pppppppuVar15 = (ulong *******)FUN_007128a0(local_700);
        if (pppppppuVar15 != (ulong *******)0x0) {
          pppppppuStack_6a0 = pppppppuVar15;
          if (local_6a8 != (ulong *******)0x0) {
            uVar26 = *(uint *)param_3;
            goto LAB_0076b3d7;
          }
          goto LAB_0076c2e1;
        }
        local_6a8 = (ulong *******)0x0;
        local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
        local_720 = 10;
        goto LAB_0076b572;
      }
      if (local_6a8 != (ulong *******)0x0) goto LAB_0076b433;
LAB_0076c2e1:
      pppppppuVar15 = local_700;
      if (((ulong)*param_3 & 0xffffffff00000002) == 0x200000000) {
        lVar24 = *in_FS_OFFSET;
        local_6f8 = param_3;
        do {
          iVar11 = FUN_00772230(pppppppuVar15,2,&local_688,local_558,local_550,&local_6c0,
                                lVar24 + -0x18);
          param_3 = local_6f8;
          if (iVar11 != 0x22) {
            if (iVar11 != 0) {
              iVar11 = (int)in_FS_OFFSET[-3];
              if (iVar11 == -1) goto LAB_0076d200;
LAB_0076cb49:
              local_6f8 = (ulong *******)((ulong)local_6f8._4_4_ << 0x20);
              local_720 = (iVar11 != 2) + 3 + (uint)(iVar11 != 2);
              goto LAB_0076b572;
            }
            if (local_6c0 == 0) {
              local_6f8 = (ulong *******)((ulong)local_6f8._4_4_ << 0x20);
              local_720 = (uint)((int)in_FS_OFFSET[-3] == 4) * 3 + 2;
              goto LAB_0076b572;
            }
            cVar10 = FUN_007697f0(local_6f8,2,local_6c0,&local_6a8);
            if (cVar10 != '\0') {
              cStack_690 = '\x01';
              if (local_6a8 != (ulong *******)0x0) goto LAB_0076cbb8;
              goto LAB_0076c301;
            }
            break;
          }
          iVar11 = (int)in_FS_OFFSET[-3];
          if (iVar11 != -1) goto LAB_0076cb49;
          cVar10 = FUN_007a2dc0(&local_558);
        } while (cVar10 != '\0');
        goto LAB_0076c76f;
      }
LAB_0076c301:
      if (DAT_0094ad30 < 1) {
        local_6a8 = (ulong *******)0x0;
        if (DAT_0094ad30 == 0) goto LAB_0076ccf4;
LAB_0076c32c:
        local_6e0 = 0;
        local_6dc = -1;
        bVar9 = FUN_0077a770(5,&local_6c0);
        local_6f8 = (ulong *******)FUN_00778500();
        pppppppuVar15 = local_700;
        bVar9 = local_6f8 != (ulong *******)0x0 & bVar9;
        local_720 = CONCAT31(local_720._1_3_,bVar9);
        if (bVar9 == 0) {
          FUN_00778a10(local_6f8);
          if ((int)in_FS_OFFSET[-3] != -1) {
LAB_0076d11d:
            if (local_6a8 == (ulong *******)0x0) goto LAB_0076c5d9;
LAB_0076cbb8:
            uVar26 = *(uint *)param_3;
            goto LAB_0076b3d7;
          }
LAB_0076d143:
          local_720 = 0xb;
        }
        else {
          local_730 = (ulong ******)CONCAT44(local_730._4_4_,0xffffffff);
          uVar26 = 0;
          do {
            if (cStack_690 != '\0') {
              FUN_007104f0(local_6a8);
            }
            FUN_007104f0(pppppppuStack_6a0);
            FUN_007104f0(pppppppuStack_698);
            local_6a8 = (ulong *******)0x0;
            pppppppuStack_6a0 = (ulong *******)0x0;
            pppppppuStack_698 = (ulong *******)0x0;
            cStack_690 = '\0';
            cStack_68f = '\0';
            uStack_68e = 0;
            if ((char)local_708 != '\0') {
              *(undefined4 *)(in_FS_OFFSET + -3) = 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x10;
              iVar11 = local_6dc;
              break;
            }
            local_6e0 = 0;
            if ((*(uint *)((long)param_3 + 4) == 0) &&
               (local_738 = (code *)FUN_00778d90(local_6c0,"gethostbyname4_r"),
               local_738 != (code *)0x0)) {
              lVar24 = *in_FS_OFFSET;
              local_744 = 0;
              local_740 = param_3;
              while( true ) {
                FUN_0078e430(local_738);
                local_6dc = (*local_738)(pppppppuVar15,&local_6a8,local_558,local_550,
                                         *in_FS_OFFSET + -0x58,lVar24 + -0x18);
                param_3 = local_740;
                uVar26 = local_744;
                iVar11 = local_6dc;
                if (local_6dc == 1) break;
                local_6a8 = (ulong *******)0x0;
                iVar13 = (int)in_FS_OFFSET[-3];
                if (((local_6dc != -2) || ((int)in_FS_OFFSET[-0xb] != 0x22)) || (iVar13 != -1)) {
                  uVar26 = 0xfffffffd;
                  local_6e0 = uVar26;
                  if (iVar13 != 2) {
                    uVar26 = (uint)(iVar13 == 4);
                    local_6e0 = uVar26;
                  }
                  goto LAB_0076d49b;
                }
                cVar10 = FUN_007a2dc0(&local_558);
                if (cVar10 == '\0') goto LAB_0076cf79;
              }
              local_6e0 = 1;
              pppppppuVar23 = pppppppuStack_6a0;
              if ((((ulong)*local_740 & 2) != 0) && (pppppppuStack_6a0 == (ulong *******)0x0)) {
                local_738 = (code *)CONCAT44(local_738._4_4_,1);
                pppppppuVar23 = (ulong *******)FUN_007128a0(local_6a8[1]);
                iVar11 = (int)local_738;
                if (pppppppuVar23 == (ulong *******)0x0) {
LAB_0076cf79:
                  FUN_00778a10(local_6f8);
                  local_720 = 10;
                  goto LAB_0076c511;
                }
              }
              pppppppuStack_6a0 = pppppppuVar23;
              if (local_6a8 == (ulong *******)0x0) {
LAB_0076d5b4:
                uVar26 = 1;
              }
              else {
                pppppppuVar23 = local_6a8;
                pppppppuVar22 = (ulong *******)&local_6a8;
                cVar10 = (char)local_708;
                do {
                  uVar14 = *(uint *)(pppppppuVar23 + 2);
                  pppppppuVar4 = (ulong *******)*pppppppuVar23;
                  pppppppuVar33 = pppppppuVar23;
                  cVar8 = (char)local_720;
                  if ((uVar14 == 2) && (((ulong)*param_3 & 0xffffffff00000008) == 0xa00000008)) {
                    pppppppuVar23[3] = (ulong ******)0xffff000000000000;
                    pppppppuVar23[2] = (ulong ******)0xa;
                    *(undefined4 *)(pppppppuVar23 + 4) = *(undefined4 *)((long)pppppppuVar23 + 0x14)
                    ;
                  }
                  else if (*(uint *)((long)param_3 + 4) != 0) {
                    if (uVar14 == *(uint *)((long)param_3 + 4)) {
                      if (uVar14 == 10) {
                        cStack_68f = '\x01';
                      }
                    }
                    else {
                      *pppppppuVar22 = (ulong ******)pppppppuVar4;
                      pppppppuVar33 = pppppppuVar22;
                      cVar8 = cVar10;
                    }
                  }
                  cVar10 = cVar8;
                  pppppppuVar23 = pppppppuVar4;
                  pppppppuVar22 = pppppppuVar33;
                } while (pppppppuVar4 != (ulong *******)0x0);
                if (cVar10 == '\0') goto LAB_0076d5b4;
                local_6e0 = 0;
              }
LAB_0076d49b:
              bVar9 = (char)iVar11 * '\x02' + 4;
            }
            else if (((((ulong)*param_3 & 2) == 0) ||
                     (lVar24 = FUN_00778d90(local_6c0,"gethostbyname3_r"), lVar24 == 0)) &&
                    (lVar24 = FUN_00778d90(local_6c0,"gethostbyname2_r"), lVar24 == 0)) {
              bVar9 = 2;
              iVar11 = -1;
              local_6dc = -1;
              *(undefined4 *)(in_FS_OFFSET + -3) = 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x10;
            }
            else {
              uVar14 = *(uint *)((long)param_3 + 4);
              if ((uVar14 == 10) || (uVar14 == 0)) {
                iVar11 = FUN_00769a10(lVar24,10,pppppppuVar15,param_3,&local_558,&local_6a8,
                                      &local_6dc,&local_6e0);
                if (iVar11 == 0) {
                  local_730 = (ulong ******)CONCAT44(local_730._4_4_,local_6dc);
                  uVar14 = *(uint *)((long)param_3 + 4);
                  uVar26 = local_6e0;
                  goto LAB_0076c429;
                }
LAB_0076d454:
                local_720 = iVar11;
                FUN_00778a10(local_6f8);
                goto LAB_0076c511;
              }
LAB_0076c429:
              if (((uVar14 & 0xfffffffd) == 0) ||
                 ((((ulong)*param_3 & 0xffffffff00000008) == 0xa00000008 &&
                  ((((ulong)*param_3 & 0x10) != 0 || (cStack_68f == '\0')))))) {
                iVar11 = FUN_00769a10(lVar24,2,pppppppuVar15,param_3,&local_558,&local_6a8,
                                      &local_6dc,&local_6e0);
                if (iVar11 != 0) goto LAB_0076d454;
                if (*(uint *)((long)param_3 + 4) == 2) {
                  local_730 = (ulong ******)CONCAT44(local_730._4_4_,local_6dc);
                  uVar26 = local_6e0;
                }
              }
              pppppppuVar23 = pppppppuStack_698;
              if (((int)local_730 == 1) || (local_6dc == 1)) {
                pppppppuVar22 = pppppppuStack_6a0;
                if ((((ulong)*param_3 & 2) != 0) && (pppppppuStack_6a0 == (ulong *******)0x0)) {
                  pcVar21 = (code *)FUN_00778d90(local_6c0,"getcanonname_r");
                  local_688 = pppppppuVar15;
                  if (pcVar21 != (code *)0x0) {
                    local_708 = pcVar21;
                    FUN_0078e430(pcVar21);
                    if (pppppppuVar23 == (ulong *******)0x0) {
                      pppppppuVar23 = pppppppuVar15;
                    }
                    iVar11 = (*local_708)(pppppppuVar23,local_148,0x100,&local_688,
                                          *in_FS_OFFSET + -0x58,*in_FS_OFFSET + -0x18);
                    if (iVar11 != 1) {
                      local_688 = pppppppuVar15;
                    }
                  }
                  pppppppuVar22 = (ulong *******)FUN_007128a0(pppppppuVar15);
                  if (pppppppuVar22 == (ulong *******)0x0) goto LAB_0076cf79;
                }
                pppppppuStack_6a0 = pppppppuVar22;
                local_6dc = 1;
                bVar9 = 6;
                iVar11 = 1;
              }
              else if ((int)local_730 == -2) {
                iVar11 = -2;
                bVar9 = 0;
                local_6dc = -2;
              }
              else {
                iVar11 = local_6dc;
                if ((local_6dc == -1) && (iVar11 = (int)local_730, (int)local_730 == -1)) {
                  bVar9 = 2;
                  iVar11 = local_6dc;
                }
                else {
                  local_6dc = iVar11;
                  bVar9 = (char)local_6dc * '\x02' + 4;
                  iVar11 = local_6dc;
                }
              }
            }
            uVar14 = *(uint *)(local_6c0 + 8) >> (bVar9 & 0x1f) & 3;
            if (uVar14 == 1) break;
            lVar24 = local_6c0 + 0x10;
            local_708 = (code *)CONCAT71(local_708._1_7_,uVar14 == 2);
            plVar1 = (long *)(local_6c0 + 0x10);
            local_6c0 = lVar24;
          } while (*plVar1 != 0);
          local_708 = (code *)CONCAT44(local_708._4_4_,iVar11);
          FUN_00778a10(local_6f8);
          if ((0xfffffffd < (uint)local_708) && ((int)in_FS_OFFSET[-3] == -1)) goto LAB_0076d143;
          if ((local_6e0 == 0) || (uVar26 == 0)) goto LAB_0076d11d;
          if ((local_6e0 != 0xfffffffd) || (local_720 = 3, uVar26 != 0xfffffffd)) {
            local_720 = 5;
          }
        }
LAB_0076c511:
        if (cStack_690 != '\0') {
          FUN_007104f0(local_6a8);
        }
        FUN_007104f0(pppppppuStack_6a0);
        FUN_007104f0(pppppppuStack_698);
        local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
        local_6a8 = (ulong *******)0x0;
        pppppppuStack_6a0 = (ulong *******)0x0;
        pppppppuStack_698 = (ulong *******)0x0;
        cStack_690 = '\0';
        cStack_68f = '\0';
        uStack_68e = 0;
        goto LAB_0076b572;
      }
      DAT_0094ad30 = DAT_0094ad30 + 1;
      if (DAT_0094ad30 < 0x65) {
        local_6a8 = (ulong *******)0x0;
        goto LAB_0076c32c;
      }
      DAT_0094ad30 = 0;
LAB_0076ccf4:
      local_6a8 = (ulong *******)0x0;
      if (DAT_0094ac55 != '\0') goto LAB_0076c32c;
      local_688 = (ulong *******)0x0;
      iVar11 = FUN_007812b0(local_700,&local_688,*in_FS_OFFSET + -0x18);
      pppppppuVar15 = local_688;
      if (local_688 == (ulong *******)0x0) {
        if (iVar11 == 0) goto LAB_0076c5d9;
        if (DAT_0094ad30 == 0) {
          if ((int)in_FS_OFFSET[-3] == -1) {
            if ((int)in_FS_OFFSET[-0xb] == 0xc) goto LAB_0076c76f;
          }
          else if ((int)in_FS_OFFSET[-3] == 2) {
            local_6f8 = (ulong *******)((ulong)local_6f8._4_4_ << 0x20);
            local_720 = 3;
            goto LAB_0076b572;
          }
LAB_0076d200:
          local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
          local_720 = 0xb;
          goto LAB_0076b572;
        }
LAB_0076d02f:
        if (local_6a8 == (ulong *******)0x0) goto LAB_0076c32c;
        goto LAB_0076cbb8;
      }
      ppppppuVar28 = local_688[3];
      local_6f8 = (ulong *******)CONCAT44(local_6f8._4_4_,*(uint *)local_688);
      pppppppuVar23 = (ulong *******)FUN_00711600((long)(int)*(uint *)local_688,0x28);
      if (pppppppuVar23 == (ulong *******)0x0) {
        FUN_007104f0(pppppppuVar15);
        local_720 = 10;
      }
      else {
        uVar37 = (ulong)local_6f8 & 0xffffffff;
        cStack_690 = '\x01';
        if ((int)(uint)local_6f8 < 1) {
          if ((((ulong)*param_3 & 2) != 0) && (iVar11 = 0, pppppppuVar15[1] != (ulong ******)0x0))
          goto LAB_0076cfeb;
        }
        else {
          ppppppuVar17 = pppppppuVar15[2];
          lVar24 = 0;
          iVar11 = 0;
          do {
            uVar26 = (uint)*(byte *)((long)ppppppuVar17 + lVar24);
            if (*(byte *)((long)ppppppuVar17 + lVar24) == 2) {
              if (((ulong)*param_3 & 0xffffffff00000008) == 0xa00000008) {
                uVar38 = 4;
                pppppppuVar22 = pppppppuVar23 + (long)iVar11 * 5;
                *(undefined4 *)(pppppppuVar22 + 2) = 10;
                uVar12 = *(undefined4 *)ppppppuVar28;
                *(undefined4 *)((long)pppppppuVar22 + 0x1c) = 0xffff0000;
                *(undefined4 *)(pppppppuVar22 + 4) = uVar12;
              }
              else {
                if (*(uint *)((long)param_3 + 4) == 0) {
                  uVar26 = 2;
                  uVar38 = 4;
                }
                else {
                  uVar38 = 4;
                  if (*(uint *)((long)param_3 + 4) != 2) goto LAB_0076ce05;
                  uVar26 = 2;
                }
LAB_0076cda3:
                pppppppuVar22 = pppppppuVar23 + (long)iVar11 * 5;
                *(uint *)(pppppppuVar22 + 2) = uVar26;
                puVar2 = (undefined4 *)((long)pppppppuVar22 + 0x14);
                uVar26 = (uint)uVar38;
                if (uVar26 < 8) {
                  if ((uVar38 & 4) == 0) {
                    if (uVar26 != 0) {
                      *(undefined1 *)puVar2 = *(undefined1 *)ppppppuVar28;
                      goto LAB_0076cddd;
                    }
                  }
                  else {
                    *puVar2 = *(undefined4 *)ppppppuVar28;
                    *(undefined4 *)((long)pppppppuVar22 + uVar38 + 0x10) =
                         *(undefined4 *)((long)ppppppuVar28 + (uVar38 - 4));
                    ppppppuVar17 = pppppppuVar15[2];
                  }
                }
                else {
                  uVar37 = (long)pppppppuVar22 + 0x1cU & 0xfffffffffffffff8;
                  *(ulong ******)((long)pppppppuVar22 + 0x14) = *ppppppuVar28;
                  *(undefined8 *)((long)pppppppuVar22 + uVar38 + 0xc) =
                       *(undefined8 *)((long)ppppppuVar28 + (uVar38 - 8));
                  lVar20 = (long)puVar2 - uVar37;
                  uVar26 = (int)lVar20 + uVar26;
                  if (7 < (uVar26 & 0xfffffff8)) {
                    uVar14 = 0;
                    local_6f8 = (ulong *******)
                                (CONCAT44(local_6f8._4_4_,uVar26) & 0xfffffffffffffff8);
                    do {
                      uVar36 = (ulong)uVar14;
                      uVar14 = uVar14 + 8;
                      *(undefined8 *)(uVar37 + uVar36) =
                           *(undefined8 *)((long)ppppppuVar28 + (uVar36 - lVar20));
                    } while (uVar14 < (uint)local_6f8);
                  }
LAB_0076cddd:
                  ppppppuVar17 = pppppppuVar15[2];
                }
                if (*(char *)((long)ppppppuVar17 + lVar24) == '\n') {
                  cStack_68f = '\x01';
                }
                uVar37 = (ulong)*(uint *)pppppppuVar15;
              }
              lVar20 = (long)iVar11;
              iVar11 = iVar11 + 1;
              *pppppppuVar22 = (ulong ******)(pppppppuVar23 + lVar20 * 5 + 5);
            }
            else {
              if ((*(uint *)((long)param_3 + 4) == 0) || (*(uint *)((long)param_3 + 4) == uVar26)) {
                uVar38 = 0x10;
                goto LAB_0076cda3;
              }
              uVar38 = 0x10;
            }
LAB_0076ce05:
            lVar24 = lVar24 + 1;
            ppppppuVar28 = (ulong ******)((long)ppppppuVar28 + uVar38);
          } while ((int)lVar24 < (int)uVar37);
          pppppppuVar22 = pppppppuStack_6a0;
          if ((((ulong)*param_3 & 2) != 0) && (pppppppuVar15[1] != (ulong ******)0x0)) {
LAB_0076cfeb:
            pppppppuVar22 = (ulong *******)FUN_007128a0();
            pppppppuVar15 = local_688;
            if (pppppppuVar22 == (ulong *******)0x0) {
              FUN_007104f0(local_688);
              local_720 = 10;
              goto LAB_0076d164;
            }
          }
          pppppppuStack_6a0 = pppppppuVar22;
          if (iVar11 != 0) {
            pppppppuVar23[(long)iVar11 * 5 + -5] = (ulong ******)0x0;
            local_6a8 = pppppppuVar23;
            FUN_007104f0(pppppppuVar15);
            goto LAB_0076d02f;
          }
        }
        FUN_007104f0(local_688);
        local_720 = 2;
      }
LAB_0076d164:
      FUN_007104f0(pppppppuVar23);
      cStack_690 = '\0';
      local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
      if ((char)local_718 != '\0') goto LAB_0076c19c;
      goto LAB_0076b58c;
    }
    iVar11 = FUN_00775590(local_6f0,&local_688);
    if (iVar11 == 0) {
      local_700 = local_688;
      if (local_6a8 == (ulong *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("at != NULL","../sysdeps/posix/getaddrinfo.c",0x369,"text_to_binary_address");
      }
      local_718 = (byte *)CONCAT71(local_718._1_7_,1);
      goto LAB_0076b334;
    }
    local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
    local_720 = -iVar11;
    ppppppuVar28 = (ulong ******)0x0;
  }
  else {
    uVar14 = *(uint *)((long)param_3 + 4);
    if (uVar14 == 0) {
      pppppppuVar15 = (ulong *******)(auStack_614 + 4);
      local_638._8_8_ = 0;
      local_638._0_8_ = pppppppuVar15;
      local_718 = (byte *)CONCAT71(local_718._1_7_,(char)local_708);
LAB_0076c7df:
      local_628 = 10;
      if ((uVar26 & 1) == 0) {
        uStack_624 = _DAT_0082dde0;
        uStack_61c = (undefined4)_UNK_0082dde8;
        local_618 = (undefined4)((ulong)_UNK_0082dde8 >> 0x20);
      }
    }
    else {
      local_718 = (byte *)CONCAT71(local_718._1_7_,uVar14 == 2);
      if (uVar14 == 10) {
        pppppppuVar15 = (ulong *******)0x0;
        goto LAB_0076c7df;
      }
    }
    if ((char)local_718 == '\0') {
      local_700 = (ulong *******)0x0;
    }
    else {
      *(undefined4 *)(pppppppuVar15 + 2) = 2;
      if ((uVar26 & 1) == 0) {
        *(undefined4 *)((long)pppppppuVar15 + 0x14) = 0x100007f;
      }
      local_718 = (byte *)((ulong)local_718 & 0xffffffffffffff00);
      uVar26 = *(uint *)param_3;
      local_700 = (ulong *******)0x0;
    }
LAB_0076b3d7:
    pppppppuVar15 = pppppppuStack_6a0;
    if ((uVar26 & 2) == 0) {
LAB_0076b433:
      local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
      ppppppuVar28 = (ulong ******)&local_6d8;
      pppppppuVar15 = local_6a8;
      do {
        uVar26 = *(uint *)(pppppppuVar15 + 2);
        if ((short)uVar26 == 10) {
          puVar19 = local_728;
          cVar10 = uStack_5e0._4_1_;
          if ((((cStack_68f == '\0') || (((ulong)*param_3 & 0x18) != 8)) ||
              (*(int *)((long)pppppppuVar15 + 0x14) != 0)) ||
             ((*(int *)(pppppppuVar15 + 3) != 0 ||
              (*(int *)((long)pppppppuVar15 + 0x1c) != -0x10000)))) {
            while (cVar10 != '\0') {
              pppppuVar16 = (ulong *****)FUN_007101b0(0x4c);
              *ppppppuVar28 = pppppuVar16;
              if (pppppuVar16 == (ulong *****)0x0) goto LAB_0076ca2e;
              ppppuVar5 = (ulong ****)*puVar19;
              uVar14 = *(uint *)param_3;
              uVar25 = *(ushort *)(puVar19 + 1);
              *(undefined4 *)(pppppuVar16 + 2) = 0x1c;
              pppppuVar16[5] = (ulong ****)0x0;
              ppppppuVar28 = (ulong ******)(pppppuVar16 + 5);
              *(undefined4 *)((long)pppppuVar16 + 0x34) = 0;
              cVar10 = *(char *)((long)puVar19 + 0x1c);
              *pppppuVar16 = (ulong ****)(CONCAT44(uVar26,uVar14) & 0xffffffffffff);
              pppppuVar16[1] = ppppuVar5;
              *(uint *)(pppppuVar16 + 6) = (uint)uVar25 << 0x10 | 10;
              pppppuVar16[3] = (ulong ****)(pppppuVar16 + 6);
              pppppuVar16[4] = (ulong ****)pppppppuStack_6a0;
              pppppppuStack_6a0 = (ulong *******)0x0;
              ppppuVar5 = *(ulong *****)((long)pppppppuVar15 + 0x1c);
              pppppuVar16[7] = *(ulong *****)((long)pppppppuVar15 + 0x14);
              pppppuVar16[8] = ppppuVar5;
              *(undefined4 *)(pppppuVar16 + 9) = *(undefined4 *)((long)pppppppuVar15 + 0x24);
              puVar19 = puVar19 + 2;
            }
            goto LAB_0076b554;
          }
        }
        else {
          if (uStack_5e0._4_1_ != '\0') {
            local_6f0 = (ulong *******)(CONCAT44(local_6f0._4_4_,uVar26) & 0xffffffff0000ffff);
            puVar19 = local_728;
            do {
              pppppuVar16 = (ulong *****)FUN_007101b0(0x40);
              *ppppppuVar28 = pppppuVar16;
              pppppppuVar23 = pppppppuStack_6a0;
              if (pppppuVar16 == (ulong *****)0x0) goto LAB_0076ca2e;
              ppppuVar5 = (ulong ****)*puVar19;
              uVar14 = *(uint *)param_3;
              uVar25 = *(ushort *)(puVar19 + 1);
              *(undefined4 *)(pppppuVar16 + 2) = 0x10;
              pppppuVar16[5] = (ulong ****)0x0;
              ppppppuVar28 = (ulong ******)(pppppuVar16 + 5);
              cVar10 = *(char *)((long)puVar19 + 0x1c);
              *(uint *)(pppppuVar16 + 6) = uVar26 & 0xffff | (uint)uVar25 << 0x10;
              *pppppuVar16 = (ulong ****)CONCAT44((int)local_6f0,uVar14);
              pppppuVar16[1] = ppppuVar5;
              pppppppuStack_6a0 = (ulong *******)0x0;
              pppppuVar16[3] = (ulong ****)(pppppuVar16 + 6);
              pppppuVar16[4] = (ulong ****)pppppppuVar23;
              uVar12 = *(undefined4 *)((long)pppppppuVar15 + 0x14);
              pppppuVar16[7] = (ulong ****)0x0;
              *(undefined4 *)((long)pppppuVar16 + 0x34) = uVar12;
              puVar19 = puVar19 + 2;
            } while (cVar10 != '\0');
          }
LAB_0076b554:
          local_6f8 = (ulong *******)CONCAT44(local_6f8._4_4_,(uint)local_6f8 + 1);
        }
        pppppppuVar15 = (ulong *******)*pppppppuVar15;
      } while (pppppppuVar15 != (ulong *******)0x0);
LAB_0076b568:
      local_720 = 0;
    }
    else {
      if ((uVar26 & 0x80) != 0) {
        pppppppuVar23 = local_6f0;
        if (pppppppuStack_6a0 != (ulong *******)0x0) {
          pppppppuVar23 = pppppppuStack_6a0;
        }
        iVar11 = FUN_007756c0(pppppppuVar23,&local_688);
        if (iVar11 != 0) {
          if (iVar11 != -0x69) {
            local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
            local_720 = -iVar11;
            goto LAB_0076b572;
          }
          goto LAB_0076b40e;
        }
        FUN_007104f0(pppppppuVar15);
        pppppppuVar15 = local_688;
LAB_0076b41c:
        pppppppuStack_6a0 = pppppppuVar15;
        if (local_6a8 != (ulong *******)0x0) goto LAB_0076b433;
        local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
        goto LAB_0076b568;
      }
LAB_0076b40e:
      if ((pppppppuVar15 != (ulong *******)0x0) ||
         (pppppppuVar15 = (ulong *******)FUN_007128a0(local_6f0),
         pppppppuVar15 != (ulong *******)0x0)) goto LAB_0076b41c;
LAB_0076c76f:
      local_6f8 = (ulong *******)((ulong)local_6f8 & 0xffffffff00000000);
      local_720 = 10;
    }
LAB_0076b572:
joined_r0x0076b579:
    if ((char)local_718 != '\0') {
LAB_0076c19c:
      FUN_007104f0(local_700);
    }
    if (cStack_690 != '\0') {
      FUN_007104f0(local_6a8);
    }
LAB_0076b58c:
    FUN_007104f0(pppppppuStack_6a0);
    FUN_007104f0(pppppppuStack_698);
    ppppppuVar28 = local_6d8;
  }
  if (local_558 != local_710) {
    FUN_007104f0();
  }
  if (local_720 != 0) {
    local_720 = -local_720;
    while (ppppppuVar28 != (ulong ******)0x0) {
      ppppppuVar17 = (ulong ******)ppppppuVar28[5];
      FUN_007104f0(ppppppuVar28[4]);
      FUN_007104f0(ppppppuVar28);
      ppppppuVar28 = ppppppuVar17;
    }
LAB_0076bbea:
    FUN_007760a0(local_6d0);
    puVar31 = auStack_768;
    goto LAB_0076bc00;
  }
  local_744 = 0;
  uVar26 = 0;
  ppppppuVar17 = ppppppuVar28;
  if (ppppppuVar28 == (ulong ******)0x0) {
    if ((uint)local_6f8 < 2) {
LAB_0076c27b:
      FUN_007760a0(local_6d0);
LAB_0076b910:
      local_720 = -2;
      puVar31 = auStack_768;
      goto LAB_0076bc00;
    }
    uVar37 = 0;
    local_764 = DAT_0094ab44;
    FUN_0070aea0(&DAT_0094ab44,FUN_0076a390);
    lVar24 = 0;
    local_760 = 0;
LAB_0076b674:
    puVar31 = auStack_768;
    while (puVar30 != auStack_768 + -(uVar37 + 0x17 & 0xfffffffffffff000)) {
      puVar29 = puVar31 + -0x1000;
      *(undefined8 *)(puVar31 + -8) = *(undefined8 *)(puVar31 + -8);
      puVar30 = puVar31 + -0x1000;
      puVar31 = puVar31 + -0x1000;
    }
    uVar37 = (ulong)((uint)(uVar37 + 0x17) & 0xff0);
    lVar20 = -uVar37;
    if (uVar37 != 0) {
      *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
    }
    local_748 = 1;
    local_750 = (ulong *******)((ulong)(puVar29 + lVar20 + 0xf) & 0xfffffffffffffff0);
    puVar32 = puVar29 + lVar20;
LAB_0076b6d4:
    local_718 = (byte *)(lVar24 + (long)local_750);
    if (local_719 == '\0') {
      *(undefined8 *)(puVar32 + -8) = 0x76c2b1;
      FUN_007758a0(&local_6e2,&local_6e1,&local_6d0,&local_6c8);
    }
    uVar37 = local_6c8;
    pppppppuVar15 = local_6d0;
    if (local_6d0 != (ulong *******)0x0) {
      *(undefined8 *)(puVar32 + -8) = 0x76b713;
      FUN_006e8e20(pppppppuVar15,uVar37,0x18,FUN_00769500);
    }
    if (ppppppuVar28 == (ulong ******)0x0) {
      local_710 = (ulong ******)0x0;
    }
    else {
      ppppppuVar17 = (ulong ******)0x0;
      local_6f0 = (ulong *******)((ulong)local_6f0 & 0xffffffff00000000);
      local_708 = (code *)0x0;
      iVar11 = -1;
      local_710 = (ulong ******)0x0;
      pppppppuVar15 = local_750 + 1;
      local_740 = (ulong *******)&local_688;
      local_700 = (ulong *******)(local_5e8 + 8);
      do {
        pppppppuVar15[-1] = ppppppuVar28;
        *(uint *)((long)pppppppuVar15 + 0x24) = 0xffffffff;
        *(code **)(local_718 + (long)local_708 * 8) = local_708;
        if ((ppppppuVar17 == (ulong ******)0x0) ||
           (iVar13 = *(int *)(ppppppuVar28 + 2), *(int *)(ppppppuVar17 + 2) != iVar13)) {
LAB_0076b7a8:
          puVar19 = local_728;
          *(byte *)((long)pppppppuVar15 + 0x1d) = 0;
          ((byte *)((long)pppppppuVar15 + 0x1e))[0] = 0;
          ((byte *)((long)pppppppuVar15 + 0x1e))[1] = 0;
          *(uint *)(pppppppuVar15 + 4) = 0xffffffff;
          if (iVar11 != -1) {
            if (((int)local_6f0 != 2) || (*(int *)((long)ppppppuVar28 + 4) != 10)) {
              _local_5e8 = (undefined1  [16])0x0;
              *(undefined8 *)(puVar32 + -8) = 0x76b7fa;
              FUN_00770f00(iVar11,puVar19,0x10);
              goto LAB_0076b7fa;
            }
            *(undefined8 *)(puVar32 + -8) = 0x76bc78;
            FUN_0076e4b0(iVar11);
          }
          uVar12 = *(undefined4 *)((long)ppppppuVar28 + 4);
          local_6f0 = (ulong *******)CONCAT44(local_6f0._4_4_,uVar12);
          *(undefined8 *)(puVar32 + -8) = 0x76bc90;
          iVar11 = FUN_00771200(uVar12,0x80002,0);
LAB_0076b7fa:
          uVar12 = *(undefined4 *)(ppppppuVar28 + 2);
          pppppuVar16 = ppppppuVar28[3];
          local_688 = (ulong *******)CONCAT44(local_688._4_4_,0x1c);
          local_6f8 = (ulong *******)
                      CONCAT44(local_6f8._4_4_,*(undefined4 *)((long)ppppppuVar28 + 4));
          if (iVar11 == -1) goto LAB_0076b832;
LAB_0076b81c:
          *(undefined8 *)(puVar32 + -8) = 0x76b82a;
          iVar13 = FUN_00770f00(iVar11,pppppuVar16,uVar12);
          pppppppuVar23 = local_740;
          if (iVar13 == 0) {
            *(undefined8 *)(puVar32 + -8) = 0x76bd22;
            iVar13 = FUN_00770fa0(iVar11,pppppppuVar15,pppppppuVar23);
            if (iVar13 != 0) goto LAB_0076b832;
            *(byte *)((long)pppppppuVar15 + 0x1c) = 0x1c;
            local_719 = *(int *)((long)ppppppuVar28 + 4) == 2;
            *(byte *)((long)pppppppuVar15 + 0x1d) = 1;
            local_6f8 = local_6d0;
            if (local_6d0 != (ulong *******)0x0) {
              if (((int)local_6f0 == 2) && ((bool)local_719)) {
                uVar26 = *(uint *)((long)pppppppuVar15 + 4);
                uStack_5e0 = (ulong ******)0x0;
                if ((char)uVar26 == '\x7f') {
                  uVar26 = 0x100007f;
                }
                local_5d8 = (ulong ******)CONCAT44(uVar26,0xffff0000);
              }
              else {
                uStack_5e0 = pppppppuVar15[1];
                local_5d8 = pppppppuVar15[2];
              }
              uVar37 = 0;
              local_738 = (code *)CONCAT44(local_738._4_4_,iVar11);
              uVar38 = local_6c8;
              local_730 = ppppppuVar28;
              while (uVar36 = uVar38, uVar37 < uVar36) {
                while( true ) {
                  pppppppuVar22 = local_700;
                  uVar38 = uVar36 + uVar37 >> 1;
                  pppppppuVar23 = local_6f8 + (uVar36 + uVar37 & 0xfffffffffffffffe) + uVar38;
                  *(undefined8 *)(puVar32 + -8) = 0x76be3e;
                  iVar11 = thunk_FUN_00713570(pppppppuVar22,pppppppuVar23 + 1,0x10);
                  if (iVar11 < 0) break;
                  if (iVar11 == 0) {
                    *(undefined2 *)((long)pppppppuVar15 + 0x1e) = *(undefined2 *)pppppppuVar23;
                    *(uint *)(pppppppuVar15 + 4) = *(uint *)((long)pppppppuVar23 + 4);
                    ppppppuVar28 = local_730;
                    iVar11 = (int)local_738;
                    goto LAB_0076bd53;
                  }
                  uVar37 = uVar38 + 1;
                  if (uVar36 <= uVar37) goto LAB_0076be4d;
                }
              }
LAB_0076be4d:
              ppppppuVar28 = local_730;
              iVar11 = (int)local_738;
            }
LAB_0076bd53:
            ppppppuVar17 = ppppppuVar28;
            if (((int)local_6f0 == 10) && (local_719 != '\0')) {
              if ((*(uint *)(pppppppuVar15 + 1) != 0) ||
                 ((*(uint *)((long)pppppppuVar15 + 0xc) != 0 ||
                  (*(uint *)(pppppppuVar15 + 2) != 0xffff0000)))) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar32 + -8) = 0x76d1ef;
                FUN_006e2220("IN6_IS_ADDR_V4MAPPED (sin6->sin6_addr.s6_addr32)",
                             "../sysdeps/posix/getaddrinfo.c",0x9fa,"getaddrinfo");
              }
              *(byte *)((long)pppppppuVar15 + 0x1c) = 0x10;
              *(undefined2 *)pppppppuVar15 = 2;
              *(uint *)((long)pppppppuVar15 + 4) = *(uint *)((long)pppppppuVar15 + 0x14);
              local_6f0 = (ulong *******)CONCAT44(local_6f0._4_4_,10);
            }
          }
          else {
LAB_0076b832:
            if ((int)in_FS_OFFSET[-0xb] == 0x61) goto LAB_0076b83f;
LAB_0076b890:
            *(byte *)((long)pppppppuVar15 + 0x1c) = 0;
            ppppppuVar17 = ppppppuVar28;
          }
          goto LAB_0076b895;
        }
        pppppuVar16 = ppppppuVar17[3];
        pppppuVar3 = ppppppuVar28[3];
        *(undefined8 *)(puVar32 + -8) = 0x76bcb3;
        iVar13 = thunk_FUN_00713570(pppppuVar16,pppppuVar3,iVar13);
        if (iVar13 != 0) goto LAB_0076b7a8;
        bVar9 = *(byte *)((long)pppppppuVar15 + -0x14);
        uVar37 = (ulong)bVar9;
        pppppppuVar23 = pppppppuVar15 + -6;
        if (bVar9 < 8) {
          if ((bVar9 & 4) == 0) {
            if ((bVar9 != 0) && (*(byte *)pppppppuVar15 = *(byte *)pppppppuVar23, (bVar9 & 2) != 0))
            {
              *(undefined2 *)((long)pppppppuVar15 + (uVar37 - 2)) =
                   *(undefined2 *)((uVar37 - 2) + (long)pppppppuVar23);
            }
          }
          else {
            *(uint *)pppppppuVar15 = *(uint *)pppppppuVar23;
            *(undefined4 *)((long)pppppppuVar15 + (uVar37 - 4)) =
                 *(undefined4 *)((uVar37 - 4) + (long)pppppppuVar23);
          }
        }
        else {
          *pppppppuVar15 = pppppppuVar15[-6];
          *(undefined8 *)((long)pppppppuVar15 + (uVar37 - 8)) =
               *(undefined8 *)((uVar37 - 8) + (long)pppppppuVar23);
          lVar24 = (long)pppppppuVar15 - (long)((ulong)(pppppppuVar15 + 1) & 0xfffffffffffffff8);
          puVar19 = (undefined8 *)((long)pppppppuVar23 - lVar24);
          puVar34 = (undefined8 *)((ulong)(pppppppuVar15 + 1) & 0xfffffffffffffff8);
          for (uVar37 = (ulong)((uint)bVar9 + (int)lVar24 >> 3); uVar37 != 0; uVar37 = uVar37 - 1) {
            *puVar34 = *puVar19;
            puVar19 = puVar19 + (ulong)bVar40 * -2 + 1;
            puVar34 = puVar34 + (ulong)bVar40 * -2 + 1;
          }
        }
        *(byte *)((long)pppppppuVar15 + 0x1c) = bVar9;
        *(byte *)((long)pppppppuVar15 + 0x1d) = *(byte *)((long)pppppppuVar15 + -0x13);
        *(undefined2 *)((long)pppppppuVar15 + 0x1e) = *(undefined2 *)((long)pppppppuVar15 + -0x12);
        *(uint *)(pppppppuVar15 + 4) = *(uint *)(pppppppuVar15 + -2);
        ppppppuVar17 = ppppppuVar28;
LAB_0076b895:
        ppppppuVar28 = (ulong ******)ppppppuVar17[4];
        if (ppppppuVar28 != (ulong ******)0x0) {
          if (local_710 != (ulong ******)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar32 + -8) = 0x76cfbb;
            FUN_006e2220("canonname == NULL","../sysdeps/posix/getaddrinfo.c",0xa11,"getaddrinfo");
          }
          ppppppuVar17[4] = (ulong *****)0x0;
          local_710 = ppppppuVar28;
        }
        ppppppuVar28 = (ulong ******)ppppppuVar17[5];
        local_708 = local_708 + 1;
        pppppppuVar15 = pppppppuVar15 + 6;
      } while (ppppppuVar28 != (ulong ******)0x0);
      if (iVar11 != -1) {
        *(undefined8 *)(puVar32 + -8) = 0x76bf97;
        FUN_0076e4b0(iVar11);
      }
    }
    pbVar18 = local_718;
    lVar24 = local_760;
    local_688 = local_750;
    local_680 = local_744;
    if (DAT_0094ab60 == 0) {
      *(undefined8 *)(puVar32 + -8) = 0x76bfe5;
      FUN_006e8a40(pbVar18,lVar24,8,FUN_00769c90,&local_688);
    }
    else {
      LOCK();
      bVar39 = DAT_0094ab40 == 0;
      if (bVar39) {
        DAT_0094ab40 = 1;
      }
      UNLOCK();
      if (!bVar39) {
        *(undefined8 *)(puVar32 + -8) = 0x76d054;
        FUN_00709590(&DAT_0094ab40);
      }
      puVar19 = local_728;
      if ((local_764 != 0) && (DAT_0094ab64 != 0)) {
        *(undefined8 *)(puVar32 + -8) = 0x76d0a8;
        iVar11 = FUN_0076d7d0("/etc/gai.conf",puVar19);
        if ((iVar11 != 0) || ((local_590 != DAT_0094ab50 || (local_588 != DAT_0094ab58)))) {
          *(undefined8 *)(puVar32 + -8) = 0x76d0c1;
          FUN_0076a390();
        }
      }
      pbVar18 = local_718;
      lVar24 = local_760;
      *(undefined8 *)(puVar32 + -8) = 0x76c877;
      FUN_006e8a40(pbVar18,lVar24,8,FUN_00769c90,&local_688);
      iVar11 = DAT_0094ab40;
      LOCK();
      DAT_0094ab40 = 0;
      UNLOCK();
      if (1 < iVar11) {
        *(undefined8 *)(puVar32 + -8) = 0x76c894;
        FUN_00709660(&DAT_0094ab40);
      }
    }
    pppppppuVar15 = local_750;
    ppppppuVar28 = local_750[*(long *)local_718 * 6];
    ppppppuVar17 = ppppppuVar28;
    if (1 < (int)local_744) {
      pbVar18 = local_718 + 8;
      ppppppuVar27 = ppppppuVar28;
      do {
        lVar24 = *(long *)pbVar18;
        pbVar18 = pbVar18 + 8;
        ppppppuVar17 = local_750[lVar24 * 6];
        ppppppuVar27[5] = (ulong *****)ppppppuVar17;
        ppppppuVar27 = ppppppuVar17;
      } while (pbVar18 != local_718 + (ulong)(local_744 - 2) * 8 + 0x10);
    }
    ppppppuVar17[5] = (ulong *****)0x0;
    ppppppuVar28[4] = (ulong *****)local_710;
    local_6d8 = ppppppuVar28;
    if (local_748 == 0) {
      *(undefined8 *)(puVar32 + -8) = 0x76c078;
      FUN_007104f0(pppppppuVar15);
    }
  }
  else {
    do {
      ppppppuVar27 = ppppppuVar17 + 5;
      uVar26 = uVar26 + 1;
      ppppppuVar17 = (ulong ******)*ppppppuVar27;
    } while ((ulong ******)*ppppppuVar27 != (ulong ******)0x0);
    local_744 = uVar26;
    if (1 < (uint)local_6f8) {
      local_764 = DAT_0094ab44;
      FUN_0070aea0(&DAT_0094ab44,FUN_0076a390);
      local_760 = (long)(int)uVar26;
      uVar37 = local_760 * 0x38;
      iVar11 = FUN_007094d0(uVar37);
      if ((uVar37 < 0x1001) || (iVar11 != 0)) {
        lVar24 = local_760 * 0x30;
        goto LAB_0076b674;
      }
      local_750 = (ulong *******)FUN_007101b0(uVar37);
      if (local_750 == (ulong *******)0x0) {
        FUN_007760a0(local_6d0);
        local_720 = -10;
        puVar31 = auStack_768;
        goto LAB_0076bc00;
      }
      local_748 = 0;
      lVar24 = local_760 * 0x30;
      puVar32 = auStack_768;
      goto LAB_0076b6d4;
    }
  }
  pppppppuVar15 = local_6d0;
  *(undefined8 *)(puVar32 + -8) = 0x76c084;
  FUN_007760a0(pppppppuVar15);
  *local_758 = (ulong)ppppppuVar28;
  puVar31 = puVar32;
LAB_0076bc00:
  if (local_40 == in_FS_OFFSET[5]) {
    return local_720;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar31 + -8) = 0x76d21e;
  FUN_00771f60();
}

