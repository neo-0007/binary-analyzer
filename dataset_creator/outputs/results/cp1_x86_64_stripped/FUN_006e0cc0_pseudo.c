
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ***** FUN_006e0cc0(uint param_1,long *****param_2,long *****param_3)

{
  long ****pppplVar1;
  int iVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long ***ppplVar7;
  long lVar8;
  uint uVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  uint uVar15;
  ulong uVar16;
  long *****ppppplVar17;
  long in_FS_OFFSET;
  long ****pppplVar18;
  long ****local_278;
  char *local_270;
  char *local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  char *local_220;
  char *local_218;
  long ****local_210;
  long ****local_208;
  long ****local_200;
  long ****local_1f8;
  long ****local_1f0;
  long ****local_1e8;
  long ****local_1e0;
  long ****local_1d8;
  long ****local_1d0;
  long ****local_1c8;
  long ****pppplStack_1c0;
  long ****local_1b8;
  long ****local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long ****local_198 [14];
  long ***local_128 [4];
  long ***local_108;
  long ***ppplStack_100;
  long ***local_f8;
  long ***ppplStack_f0;
  long ***local_e8;
  long ***ppplStack_e0;
  long ***local_d8;
  long ***ppplStack_d0;
  long ***local_c8;
  long ***ppplStack_c0;
  long ***local_b8;
  long ***ppplStack_b0;
  long ***local_a8 [13];
  long local_40;
  
  ppppplVar11 = &local_278;
  ppppplVar14 = &local_278;
  ppppplVar13 = &local_278;
  local_1b0 = (long ****)CONCAT44(local_1b0._4_4_,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0x40) {
    ppppplVar12 = &local_278;
    if ((param_1 & 0xffffe040) == 0) goto LAB_006e0d11;
LAB_006e1379:
    ppuVar3 = (undefined **)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    goto LAB_006e0f12;
  }
  local_1b0 = (long ****)CONCAT44(local_1b0._4_4_,0x1fbf);
LAB_006e0d11:
  ppppplVar12 = &local_278;
  if (param_2 == (long *****)0x0) goto LAB_006e1379;
  if (param_3 == (long *****)&PTR_PTR_00939c40) {
    param_3 = (long *****)0x0;
LAB_006e0f43:
    ppuVar3 = &PTR_PTR_00939c40;
    ppppplVar12 = &local_278;
    if (((uint)local_1b0 == 0) ||
       ((*(char *)param_2 == 'C' && (ppppplVar12 = &local_278, *(char *)((long)param_2 + 1) == '\0')
        ))) goto LAB_006e0f12;
    if (param_3 == (long *****)0x0) {
      local_128[0] = (long ***)PTR_PTR_00939c40;
      local_128[1] = (long ***)PTR_PTR_00939c48;
      local_128[2] = (long ***)PTR_PTR_00939c50;
      local_128[3] = (long ***)PTR_PTR_00939c58;
      local_108 = (long ***)PTR_PTR_00939c60;
      ppplStack_100 = (long ***)PTR_PTR_00939c68;
      local_f8 = (long ***)_DAT_00939c70;
      ppplStack_f0 = (long ***)_UNK_00939c78;
      local_e8 = (long ***)PTR_PTR_00939c80;
      ppplStack_e0 = (long ***)PTR_PTR_00939c88;
      local_d8 = (long ***)PTR_PTR_00939c90;
      ppplStack_d0 = (long ***)PTR_PTR_00939c98;
      local_c8 = (long ***)PTR_PTR_00939ca0;
      ppplStack_c0 = (long ***)PTR_DAT_00939ca8;
      local_a8[0xc] = (long ***)PTR_s_C_00939d20;
      local_b8 = (long ***)PTR_DAT_00939cb0;
      ppplStack_b0 = (long ***)PTR_DAT_00939cb8;
      local_a8[0] = (long ***)PTR_s_C_00939cc0;
      local_a8[1] = (long ***)PTR_s_C_00939cc8;
      local_a8[2] = (long ***)PTR_s_C_00939cd0;
      local_a8[3] = (long ***)PTR_s_C_00939cd8;
      local_a8[4] = (long ***)PTR_s_C_00939ce0;
      local_a8[5] = (long ***)PTR_s_C_00939ce8;
      local_a8[6] = (long ***)PTR_s_C_00939cf0;
      local_a8[7] = (long ***)PTR_s_C_00939cf8;
      local_a8[8] = (long ***)PTR_s_C_00939d00;
      local_a8[9] = (long ***)PTR_s_C_00939d08;
      local_a8[10] = (long ***)PTR_s_C_00939d10;
      local_a8[0xb] = (long ***)PTR_s_C_00939d18;
    }
    else {
      local_128[0] = (long ***)*param_3;
      local_128[1] = (long ***)param_3[1];
      local_128[2] = (long ***)param_3[2];
      local_128[3] = (long ***)param_3[3];
      local_108 = (long ***)param_3[4];
      ppplStack_100 = (long ***)param_3[5];
      local_c8 = (long ***)param_3[0xc];
      ppplStack_c0 = (long ***)param_3[0xd];
      local_f8 = (long ***)param_3[6];
      ppplStack_f0 = (long ***)param_3[7];
      local_b8 = (long ***)param_3[0xe];
      ppplStack_b0 = (long ***)param_3[0xf];
      local_e8 = (long ***)param_3[8];
      ppplStack_e0 = (long ***)param_3[9];
      local_a8[0] = (long ***)param_3[0x10];
      local_a8[1] = (long ***)param_3[0x11];
      local_d8 = (long ***)param_3[10];
      ppplStack_d0 = (long ***)param_3[0xb];
      local_a8[2] = (long ***)param_3[0x12];
      local_a8[3] = (long ***)param_3[0x13];
      local_a8[0xc] = (long ***)param_3[0x1c];
      local_a8[4] = (long ***)param_3[0x14];
      local_a8[5] = (long ***)param_3[0x15];
      local_a8[6] = (long ***)param_3[0x16];
      local_a8[7] = (long ***)param_3[0x17];
      local_a8[8] = (long ***)param_3[0x18];
      local_a8[9] = (long ***)param_3[0x19];
      local_a8[10] = (long ***)param_3[0x1a];
      local_a8[0xb] = (long ***)param_3[0x1b];
    }
LAB_006e1039:
    local_1a8 = 0;
    local_1a0 = 0;
    local_1c8 = (long ****)param_2;
    pppplStack_1c0 = (long ****)param_2;
    pcVar4 = (char *)FUN_006e8e30("LOCPATH");
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      iVar2 = FUN_007142a0(pcVar4,0x3a,&local_1a8,&local_1a0);
      ppppplVar12 = &local_278;
      if ((iVar2 != 0) ||
         (iVar2 = FUN_00714380(&local_1a8,&local_1a0,"/usr/lib/locale",0x3a),
         ppppplVar12 = &local_278, iVar2 != 0)) goto LAB_006e13fc;
    }
    local_198[0] = local_1c8;
    local_198[1] = pppplStack_1c0;
    local_198[2] = local_1c8;
    local_198[3] = pppplStack_1c0;
    local_198[4] = local_1c8;
    local_198[5] = pppplStack_1c0;
    local_198[7] = local_1c8;
    local_198[8] = pppplStack_1c0;
    local_198[9] = local_1c8;
    local_198[10] = pppplStack_1c0;
    local_198[0xb] = local_1c8;
    local_198[0xc] = pppplStack_1c0;
    lVar5 = thunk_FUN_00712710(param_2,0x3b);
    if (lVar5 == 0) {
LAB_006e142c:
      uVar16 = 0;
      *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e1441;
      FUN_0070b2d0(&DAT_00946120);
      ppppplVar14 = local_198;
      iVar2 = 1;
      lVar5 = 0;
      local_1d0 = (long ****)param_3;
      local_1b8 = (long ****)ppppplVar14;
      do {
        if (((uint)local_1b0 >> ((uint)uVar16 & 0x1f) & 1) == 0) {
          if (uVar16 != 6) {
            ppppplVar12 = (long *****)local_1d0;
            if (local_a8[uVar16] != (long ***)0x80f919) goto LAB_006e148a;
            goto joined_r0x006e1498;
          }
        }
        else {
          local_1c8 = (long ****)CONCAT44(local_1c8._4_4_,(uint)uVar16);
          *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e14d2;
          ppplVar7 = (long ***)FUN_006df4c0(local_1a8,local_1a0,uVar16 & 0xffffffff,ppppplVar14);
          local_128[uVar16] = ppplVar7;
          if (ppplVar7 == (long ***)0x0) {
            iVar2 = (int)local_1c8 + -1;
            if ((int)local_1c8 != 0) goto LAB_006e196c;
            goto LAB_006e19a5;
          }
          ppppplVar12 = (long *****)local_1d0;
          if (*ppppplVar14 != (long ****)0x80f919) {
LAB_006e148a:
            *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e148f;
            lVar8 = thunk_FUN_007129d0();
            lVar5 = lVar5 + 1 + lVar8;
            ppppplVar12 = (long *****)local_1d0;
          }
joined_r0x006e1498:
          local_1d0 = (long ****)ppppplVar12;
          if (iVar2 == 0xd) goto LAB_006e14fa;
        }
        uVar16 = uVar16 + 1;
        iVar2 = iVar2 + 1;
        ppppplVar14 = ppppplVar14 + 1;
      } while( true );
    }
    lVar5 = thunk_FUN_007129d0(param_2);
    ppppplVar13 = &local_278;
    while (ppppplVar11 != (long *****)((long)&local_278 - (lVar5 + 0x18U & 0xfffffffffffff000))) {
      ppppplVar14 = (long *****)((long)ppppplVar13 + -0x1000);
      *(undefined8 *)((long)ppppplVar13 + -8) = *(undefined8 *)((long)ppppplVar13 + -8);
      ppppplVar11 = (long *****)((long)ppppplVar13 + -0x1000);
      ppppplVar13 = (long *****)((long)ppppplVar13 + -0x1000);
    }
    uVar16 = (ulong)((uint)(lVar5 + 0x18U) & 0xff0);
    lVar8 = -uVar16;
    ppppplVar13 = (long *****)((long)ppppplVar14 + lVar8);
    if (uVar16 != 0) {
      *(undefined8 *)((long)ppppplVar14 + -8) = *(undefined8 *)((long)ppppplVar14 + -8);
    }
    uVar15 = 0;
    *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e111b;
    puVar6 = (undefined1 *)
             thunk_FUN_00713a50((ulong)((long)ppppplVar14 + lVar8 + 0xf) & 0xfffffffffffffff0,
                                param_2,lVar5 + 1);
    ppppplVar10 = (long *****)(ulong)DAT_00823a08;
    local_218 = "LC_COLLATE" + DAT_00823a20;
    local_1c8 = (long ****)(ulong)DAT_00823a09;
    local_220 = "LC_COLLATE" + DAT_00823a21;
    local_1b8 = (long ****)(ulong)DAT_00823a0a;
    local_228 = "LC_COLLATE" + DAT_00823a22;
    local_1d0 = (long ****)(ulong)DAT_00823a0b;
    local_230 = "LC_COLLATE" + DAT_00823a23;
    local_1d8 = (long ****)(ulong)DAT_00823a0c;
    local_238 = "LC_COLLATE" + DAT_00823a24;
    local_1e0 = (long ****)(ulong)DAT_00823a0d;
    local_240 = "LC_COLLATE" + DAT_00823a25;
    local_1e8 = (long ****)(ulong)DAT_00823a0f;
    local_248 = "LC_COLLATE" + DAT_00823a27;
    local_1f0 = (long ****)(ulong)DAT_00823a10;
    local_250 = "LC_COLLATE" + DAT_00823a28;
    local_1f8 = (long ****)(ulong)DAT_00823a11;
    local_258 = "LC_COLLATE" + DAT_00823a29;
    local_200 = (long ****)(ulong)DAT_00823a12;
    local_260 = "LC_COLLATE" + DAT_00823a2a;
    local_208 = (long ****)(ulong)DAT_00823a13;
    local_268 = "LC_COLLATE" + DAT_00823a2b;
    local_210 = (long ****)(ulong)DAT_00823a14;
    local_270 = "LC_COLLATE" + DAT_00823a2c;
    local_278 = (long ****)param_3;
    while( true ) {
      *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e12b5;
      lVar5 = thunk_FUN_00712710(puVar6,0x3d);
      if (lVar5 == 0) break;
      ppppplVar17 = (long *****)(lVar5 - (long)puVar6);
      if (ppppplVar17 == ppppplVar10) {
        *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e1602;
        iVar2 = thunk_FUN_00713570(puVar6,local_218,ppppplVar10);
        if (iVar2 != 0) goto LAB_006e12d0;
        uVar9 = 1;
        iVar2 = 0;
      }
      else {
LAB_006e12d0:
        if (ppppplVar17 == (long *****)local_1c8) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e162e;
          iVar2 = thunk_FUN_00713570(puVar6,local_220,local_1c8);
          if (iVar2 == 0) {
            uVar9 = 2;
            iVar2 = 1;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_1b8) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e165e;
          iVar2 = thunk_FUN_00713570(puVar6,local_228,local_1b8);
          if (iVar2 == 0) {
            uVar9 = 4;
            iVar2 = 2;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_1d0) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e168e;
          iVar2 = thunk_FUN_00713570(puVar6,local_230,local_1d0);
          if (iVar2 == 0) {
            uVar9 = 8;
            iVar2 = 3;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_1d8) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e16e6;
          iVar2 = thunk_FUN_00713570(puVar6,local_238,local_1d8);
          if (iVar2 == 0) {
            uVar9 = 0x10;
            iVar2 = 4;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_1e0) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e1716;
          iVar2 = thunk_FUN_00713570(puVar6,local_240,local_1e0);
          if (iVar2 == 0) {
            uVar9 = 0x20;
            iVar2 = 5;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_1e8) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e1746;
          iVar2 = thunk_FUN_00713570(puVar6,local_248,local_1e8);
          if (iVar2 == 0) {
            uVar9 = 0x80;
            iVar2 = 7;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_1f0) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e1776;
          iVar2 = thunk_FUN_00713570(puVar6,local_250,local_1f0);
          if (iVar2 == 0) {
            uVar9 = 0x100;
            iVar2 = 8;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_1f8) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e17a6;
          iVar2 = thunk_FUN_00713570(puVar6,local_258,local_1f8);
          if (iVar2 == 0) {
            uVar9 = 0x200;
            iVar2 = 9;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_200) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e17d6;
          iVar2 = thunk_FUN_00713570(puVar6,local_260,local_200);
          if (iVar2 == 0) {
            uVar9 = 0x400;
            iVar2 = 10;
            goto LAB_006e16a0;
          }
        }
        if (ppppplVar17 == (long *****)local_208) {
          *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e1806;
          iVar2 = thunk_FUN_00713570(puVar6,local_268,local_208);
          if (iVar2 == 0) {
            uVar9 = 0x800;
            iVar2 = 0xb;
            goto LAB_006e16a0;
          }
        }
        ppppplVar12 = (long *****)((long)ppppplVar14 + lVar8);
        if (ppppplVar17 != (long *****)local_210) goto LAB_006e1379;
        *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e1371;
        iVar2 = thunk_FUN_00713570(puVar6,local_270,local_210);
        ppppplVar12 = (long *****)((long)ppppplVar14 + lVar8);
        if (iVar2 != 0) goto LAB_006e1379;
        uVar9 = 0x1000;
        iVar2 = 0xc;
      }
LAB_006e16a0:
      uVar15 = uVar15 | uVar9;
      local_198[iVar2] = (long ****)(lVar5 + 1);
      *(undefined8 *)((long)ppppplVar14 + lVar8 + -8) = 0x6e16bb;
      puVar6 = (undefined1 *)thunk_FUN_00712710((long ****)(lVar5 + 1),0x3b);
      if (puVar6 == (undefined1 *)0x0) break;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    ppppplVar12 = (long *****)((long)ppppplVar14 + lVar8);
    param_3 = (long *****)local_278;
    if (((uint)local_1b0 & ~uVar15) == 0) goto LAB_006e142c;
    goto LAB_006e1379;
  }
  if ((param_3 == (long *****)0x0) || ((uint)local_1b0 == 0x1fbf)) goto LAB_006e0f43;
  local_128[0] = (long ***)*param_3;
  local_128[1] = (long ***)param_3[1];
  local_128[2] = (long ***)param_3[2];
  local_128[3] = (long ***)param_3[3];
  local_108 = (long ***)param_3[4];
  ppplStack_100 = (long ***)param_3[5];
  local_f8 = (long ***)param_3[6];
  ppplStack_f0 = (long ***)param_3[7];
  local_e8 = (long ***)param_3[8];
  ppplStack_e0 = (long ***)param_3[9];
  local_d8 = (long ***)param_3[10];
  ppplStack_d0 = (long ***)param_3[0xb];
  local_a8[0xc] = (long ***)param_3[0x1c];
  local_c8 = (long ***)param_3[0xc];
  ppplStack_c0 = (long ***)param_3[0xd];
  local_a8[8] = (long ***)param_3[0x18];
  local_a8[9] = (long ***)param_3[0x19];
  local_b8 = (long ***)param_3[0xe];
  ppplStack_b0 = (long ***)param_3[0xf];
  local_a8[0] = (long ***)param_3[0x10];
  local_a8[1] = (long ***)param_3[0x11];
  local_a8[2] = (long ***)param_3[0x12];
  local_a8[3] = (long ***)param_3[0x13];
  local_a8[4] = (long ***)param_3[0x14];
  local_a8[5] = (long ***)param_3[0x15];
  local_a8[6] = (long ***)param_3[0x16];
  local_a8[7] = (long ***)param_3[0x17];
  local_a8[10] = (long ***)param_3[0x1a];
  local_a8[0xb] = (long ***)param_3[0x1b];
  if ((uint)local_1b0 != 0) goto LAB_006e1039;
  ppuVar3 = (undefined **)FUN_007101b0(0xe8);
  ppppplVar12 = &local_278;
  if ((long *****)ppuVar3 == (long *****)0x0) goto LAB_006e13fc;
  *ppuVar3 = (undefined *)local_128[0];
  ((long *****)ppuVar3)[1] = (long ****)local_128[1];
  ((long *****)ppuVar3)[2] = (long ****)local_128[2];
  ((long *****)ppuVar3)[3] = (long ****)local_128[3];
  ((long *****)ppuVar3)[4] = (long ****)local_108;
  ((long *****)ppuVar3)[5] = (long ****)ppplStack_100;
  ((long *****)ppuVar3)[6] = (long ****)local_f8;
  ((long *****)ppuVar3)[7] = (long ****)ppplStack_f0;
  ((long *****)ppuVar3)[8] = (long ****)local_e8;
  ((long *****)ppuVar3)[9] = (long ****)ppplStack_e0;
  ((long *****)ppuVar3)[10] = (long ****)local_d8;
  ((long *****)ppuVar3)[0xb] = (long ****)ppplStack_d0;
  ((long *****)ppuVar3)[0xc] = (long ****)local_c8;
  ((long *****)ppuVar3)[0xd] = (long ****)ppplStack_c0;
  ((long *****)ppuVar3)[0xe] = (long ****)local_b8;
  ((long *****)ppuVar3)[0xf] = (long ****)ppplStack_b0;
  ((long *****)ppuVar3)[0x10] = (long ****)local_a8[0];
  ((long *****)ppuVar3)[0x11] = (long ****)local_a8[1];
  ((long *****)ppuVar3)[0x12] = (long ****)local_a8[2];
  ((long *****)ppuVar3)[0x13] = (long ****)local_a8[3];
  ((long *****)ppuVar3)[0x14] = (long ****)local_a8[4];
  ((long *****)ppuVar3)[0x15] = (long ****)local_a8[5];
  ((long *****)ppuVar3)[0x16] = (long ****)local_a8[6];
  ((long *****)ppuVar3)[0x17] = (long ****)local_a8[7];
  ((long *****)ppuVar3)[0x18] = (long ****)local_a8[8];
  ((long *****)ppuVar3)[0x19] = (long ****)local_a8[9];
  ((long *****)ppuVar3)[0x1a] = (long ****)local_a8[10];
  ((long *****)ppuVar3)[0x1b] = (long ****)local_a8[0xb];
  ((long *****)ppuVar3)[0x1c] = (long ****)local_a8[0xc];
  ppppplVar13 = &local_278;
  goto LAB_006e0ee5;
LAB_006e14fa:
  *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e1510;
  ppuVar3 = (undefined **)FUN_007101b0(lVar5 + 0xe8);
  pppplVar1 = local_1b8;
  if ((long *****)ppuVar3 == (long *****)0x0) {
    iVar2 = 0xc;
LAB_006e196c:
    uVar15 = (uint)local_1b0;
    uVar16 = (ulong)iVar2;
    do {
      if (((uVar15 >> ((uint)uVar16 & 0x1f) & 1) != 0) && (*(int *)(local_128[uVar16] + 6) != -1)) {
        *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e1998;
        FUN_006dfd70(uVar16 & 0xffffffff);
      }
      uVar16 = uVar16 - 1;
    } while (0 < (int)uVar16 + 1);
LAB_006e19a5:
    *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e19b1;
    FUN_0070b100(&DAT_00946120);
    ppppplVar12 = ppppplVar13;
LAB_006e13fc:
    ppuVar3 = (undefined **)0x0;
    goto LAB_006e0f12;
  }
  ppppplVar14 = (long *****)ppuVar3 + 0x1d;
  uVar15 = (uint)local_1b0;
  if (ppppplVar12 != (long *****)0x0) {
    ppppplVar10 = (long *****)ppuVar3 + 0x10;
    uVar16 = 0;
    local_1c8 = (long ****)ppuVar3;
    local_1b0 = (long ****)ppppplVar12;
    do {
      if ((uVar15 >> ((uint)uVar16 & 0x1f) & 1) == 0) {
        if (uVar16 != 6) {
          ppplVar7 = local_a8[uVar16];
          ppppplVar10[-0x10] = (long ****)local_128[uVar16];
          if (ppplVar7 != (long ***)0x80f919) goto LAB_006e1595;
LAB_006e15e1:
          *ppppplVar10 = (long ****)0x80f919;
          goto LAB_006e15a4;
        }
      }
      else {
        if (*(int *)(local_1b0[uVar16] + 6) != -1) {
          *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e1576;
          FUN_006dfd70(uVar16 & 0xffffffff);
        }
        ppppplVar10[-0x10] = (long ****)local_128[uVar16];
        if ((long ****)local_1b8[uVar16] == (long ****)0x80f919) goto LAB_006e15e1;
LAB_006e1595:
        *ppppplVar10 = (long ****)ppppplVar14;
        *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e15a0;
        lVar5 = thunk_FUN_00713930(ppppplVar14);
        ppppplVar14 = (long *****)(lVar5 + 1);
LAB_006e15a4:
        ppuVar3 = (undefined **)local_1c8;
        if (uVar16 == 0xc) goto LAB_006e181d;
      }
      uVar16 = uVar16 + 1;
      ppppplVar10 = ppppplVar10 + 1;
    } while( true );
  }
  lVar5 = 0;
  do {
    if (((uVar15 >> ((uint)lVar5 & 0x1f) & 1) != 0) &&
       ((long ****)pppplVar1[lVar5] != (long ****)0x80f919)) {
      local_a8[lVar5] = (long ***)ppppplVar14;
      *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e188b;
      lVar8 = thunk_FUN_00713930();
      ppppplVar14 = (long *****)(lVar8 + 1);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xd);
  *ppuVar3 = (undefined *)local_128[0];
  ((long *****)ppuVar3)[1] = (long ****)local_128[1];
  ((long *****)ppuVar3)[2] = (long ****)local_128[2];
  ((long *****)ppuVar3)[3] = (long ****)local_128[3];
  ((long *****)ppuVar3)[4] = (long ****)local_108;
  ((long *****)ppuVar3)[5] = (long ****)ppplStack_100;
  ((long *****)ppuVar3)[6] = (long ****)local_f8;
  ((long *****)ppuVar3)[7] = (long ****)ppplStack_f0;
  ((long *****)ppuVar3)[8] = (long ****)local_e8;
  ((long *****)ppuVar3)[9] = (long ****)ppplStack_e0;
  ((long *****)ppuVar3)[10] = (long ****)local_d8;
  ((long *****)ppuVar3)[0xb] = (long ****)ppplStack_d0;
  ((long *****)ppuVar3)[0xc] = (long ****)local_c8;
  ((long *****)ppuVar3)[0xd] = (long ****)ppplStack_c0;
  ((long *****)ppuVar3)[0xe] = (long ****)local_b8;
  ((long *****)ppuVar3)[0xf] = (long ****)ppplStack_b0;
  ((long *****)ppuVar3)[0x1c] = (long ****)local_a8[0xc];
  ((long *****)ppuVar3)[0x10] = (long ****)local_a8[0];
  ((long *****)ppuVar3)[0x11] = (long ****)local_a8[1];
  ((long *****)ppuVar3)[0x12] = (long ****)local_a8[2];
  ((long *****)ppuVar3)[0x13] = (long ****)local_a8[3];
  ((long *****)ppuVar3)[0x14] = (long ****)local_a8[4];
  ((long *****)ppuVar3)[0x15] = (long ****)local_a8[5];
  ((long *****)ppuVar3)[0x16] = (long ****)local_a8[6];
  ((long *****)ppuVar3)[0x17] = (long ****)local_a8[7];
  ((long *****)ppuVar3)[0x18] = (long ****)local_a8[8];
  ((long *****)ppuVar3)[0x19] = (long ****)local_a8[9];
  ((long *****)ppuVar3)[0x1a] = (long ****)local_a8[10];
  ((long *****)ppuVar3)[0x1b] = (long ****)local_a8[0xb];
  goto LAB_006e1830;
LAB_006e181d:
  *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e1830;
  FUN_007104f0(local_1b0);
LAB_006e1830:
  *(undefined8 *)((long)ppppplVar13 + -8) = 0x6e183c;
  FUN_0070b100(&DAT_00946120);
LAB_006e0ee5:
  pppplVar1 = (long ****)*ppuVar3;
  pppplVar18 = (long ****)((long)pppplVar1[0xb] + _UNK_00824348);
  ((long *****)ppuVar3)[0xd] = (long ****)((long)pppplVar1[8] + _DAT_00824340);
  ((long *****)ppuVar3)[0xe] = pppplVar18;
  ((long *****)ppuVar3)[0xf] = (long ****)(pppplVar1[9] + 0x40);
  ppppplVar12 = ppppplVar13;
LAB_006e0f12:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long *****)ppuVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppppplVar12 + -8) = &UNK_006e1a91;
  FUN_00771f60();
}

