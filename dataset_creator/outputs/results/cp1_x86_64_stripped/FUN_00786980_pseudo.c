
/* WARNING: Removing unreachable block (ram,0x00786bdc) */
/* WARNING: Removing unreachable block (ram,0x00786d01) */

undefined1  [16] FUN_00786980(undefined4 param_1,int param_2,char *param_3,uint *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  int iVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_478 [8];
  undefined1 *local_470;
  undefined1 *local_468;
  undefined1 *local_460;
  undefined4 local_458;
  int local_454;
  undefined1 *local_450;
  undefined1 local_444 [10];
  undefined2 local_43a;
  long local_438 [129];
  
  puVar17 = auStack_478;
  cVar3 = *param_3;
  if (cVar3 == '\0') {
    lVar22 = 0;
  }
  else {
    iVar5 = 0;
    iVar21 = 0;
    puVar8 = local_444;
    local_458 = param_1;
    do {
      if (param_2 == 1) goto LAB_00786a9f;
      pcVar16 = param_3;
      if (cVar3 == '\0') goto LAB_00786ae2;
LAB_007869d2:
      pcVar16 = param_3;
      if (cVar3 == '%') goto LAB_00786ae2;
      while ((cVar3 != '\n' || (cVar3 = '\n', param_2 == 0))) {
        cVar3 = pcVar16[1];
        pcVar16 = pcVar16 + 1;
        if ((cVar3 == '\0') || (cVar3 == '%')) break;
      }
      if (0x3f < iVar21) {
LAB_00787038:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x787057;
        FUN_006e2220("niov < NIOVMAX","dl-printf.c",0x4d,"_dl_debug_vdprintf");
      }
      local_438[(long)iVar21 * 2 + 1] = (long)pcVar16 - (long)param_3;
      if ((long)pcVar16 - (long)param_3 != 0) {
        local_438[(long)iVar21 * 2] = (long)param_3;
        iVar21 = iVar21 + 1;
      }
      if (cVar3 != '%') {
        while( true ) {
          if (cVar3 != '\n') goto LAB_00786a3f;
          if (param_3 == pcVar16) {
            lVar22 = (long)iVar21;
            iVar21 = iVar21 + 1;
            local_438[lVar22 * 2] = (long)pcVar16;
            local_438[lVar22 * 2 + 1] = 1;
          }
          else {
            local_438[(long)(iVar21 + -1) * 2 + 1] = local_438[(long)(iVar21 + -1) * 2 + 1] + 1;
          }
          param_3 = pcVar16 + 1;
          if (pcVar16[1] == '\0') goto LAB_00786a4a;
LAB_00786a9f:
          if (iVar5 == 0) {
            *(undefined8 *)(puVar17 + -8) = 0x786ebc;
            local_450 = puVar8;
            iVar5 = FUN_00768c70();
            if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar17 + -8) = 0x787035;
              FUN_006e2220("pid >= 0 && sizeof (pid_t) <= 4","dl-printf.c",0x37,"_dl_debug_vdprintf"
                          );
            }
            *(undefined8 *)(puVar17 + -8) = 0x786eeb;
            puVar6 = (undefined1 *)FUN_00795230((long)iVar5,&local_43a,10,0);
            puVar8 = local_450;
            if (local_450 < puVar6) {
              *(undefined8 *)(puVar17 + -8) = 0x786f0a;
              puVar8 = (undefined1 *)
                       thunk_FUN_00713720(local_450,0x20,(long)puVar6 - (long)local_450);
            }
            local_43a = 0x93a;
          }
          if (0x3f < iVar21) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar17 + -8) = 0x787016;
            FUN_006e2220("niov < NIOVMAX","dl-printf.c",0x40,"_dl_debug_vdprintf");
          }
          lVar22 = (long)iVar21;
          param_2 = -1;
          iVar21 = iVar21 + 1;
          local_438[lVar22 * 2 + 1] = 0xc;
          local_438[lVar22 * 2] = (long)puVar8;
          cVar3 = *param_3;
          pcVar16 = param_3;
          if (cVar3 != '\0') break;
LAB_00786ae2:
          if (0x3f < iVar21) goto LAB_00787038;
          local_438[(long)iVar21 * 2 + 1] = 0;
          param_3 = pcVar16;
          if (cVar3 == '%') goto LAB_00786b10;
        }
        goto LAB_007869d2;
      }
LAB_00786b10:
      cVar3 = pcVar16[1];
      if (cVar3 == '0') {
        cVar3 = pcVar16[2];
        pcVar16 = pcVar16 + 2;
        uVar20 = 0x30;
      }
      else {
        pcVar16 = pcVar16 + 1;
        uVar20 = 0x20;
      }
      uVar19 = 0xffffffff;
      if (cVar3 == '*') {
        uVar4 = *param_4;
        if (uVar4 < 0x30) {
          puVar13 = (undefined4 *)((ulong)uVar4 + *(long *)(param_4 + 4));
          *param_4 = uVar4 + 8;
        }
        else {
          puVar13 = *(undefined4 **)(param_4 + 2);
          *(undefined4 **)(param_4 + 2) = puVar13 + 2;
        }
        cVar3 = pcVar16[1];
        uVar19 = *puVar13;
        pcVar16 = pcVar16 + 1;
      }
      iVar10 = -1;
      if (cVar3 == '.') {
        if (pcVar16[1] != '*') goto LAB_00786dd2;
        uVar4 = *param_4;
        if (uVar4 < 0x30) {
          piVar14 = (int *)((ulong)uVar4 + *(long *)(param_4 + 4));
          *param_4 = uVar4 + 8;
        }
        else {
          piVar14 = *(int **)(param_4 + 2);
          *(int **)(param_4 + 2) = piVar14 + 2;
        }
        cVar3 = pcVar16[2];
        iVar10 = *piVar14;
        pcVar16 = pcVar16 + 2;
      }
      if ((cVar3 == 'l') || (cVar3 == 'Z')) {
        cVar3 = pcVar16[1];
        pcVar15 = pcVar16 + 1;
        if (cVar3 == 's') goto LAB_00786e36;
        if (cVar3 < 't') {
          if (cVar3 == '%') goto LAB_00786b6a;
          if (cVar3 != 'd') goto LAB_00786dd2;
LAB_00786cc5:
          uVar4 = *param_4;
          if (uVar4 < 0x30) goto LAB_00786cd1;
LAB_00786da9:
          puVar12 = *(ulong **)(param_4 + 2);
          *(ulong **)(param_4 + 2) = puVar12 + 1;
        }
        else {
          if (cVar3 == 'u') goto LAB_00786cc5;
          if (cVar3 != 'x') goto LAB_00786dd2;
          uVar4 = *param_4;
          if (0x2f < uVar4) goto LAB_00786da9;
LAB_00786cd1:
          puVar12 = (ulong *)((ulong)uVar4 + *(long *)(param_4 + 4));
          *param_4 = uVar4 + 8;
        }
        cVar3 = pcVar16[1];
        uVar7 = *puVar12;
        pcVar16 = pcVar15;
        if (cVar3 != 'd') goto LAB_00786bd4;
        bVar2 = (byte)(uVar7 >> 0x38);
LAB_00786cf9:
        local_468 = (undefined1 *)CONCAT71(local_468._1_7_,bVar2 >> 7);
        local_460 = (undefined1 *)CONCAT44(local_460._4_4_,uVar19);
        local_454 = CONCAT31(local_454._1_3_,uVar20);
        *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
        local_450 = (undefined1 *)(((ulong)(puVar17 + -0x21) & 0xfffffffffffffff0) + 0x19);
        *(undefined8 *)(puVar17 + -0x38) = 0x786d5c;
        local_470 = puVar8;
        puVar6 = (undefined1 *)FUN_00795230(uVar7,local_450,10,0);
        lVar22 = (long)(int)local_460;
        pcVar15 = pcVar16;
        puVar8 = local_470;
        cVar3 = (char)local_468;
        if (((int)local_460 == -1) ||
           (uVar20 = (undefined1)local_454, lVar22 <= (long)local_450 - (long)puVar6))
        goto joined_r0x00786d86;
        goto LAB_00786fb8;
      }
      pcVar15 = pcVar16;
      if (cVar3 == 's') {
LAB_00786e36:
        uVar4 = *param_4;
        if (uVar4 < 0x30) {
          plVar9 = (long *)((ulong)uVar4 + *(long *)(param_4 + 4));
          *param_4 = uVar4 + 8;
        }
        else {
          plVar9 = *(long **)(param_4 + 2);
          *(long **)(param_4 + 2) = plVar9 + 1;
        }
        local_450 = (undefined1 *)((long)iVar21 * 0x10);
        local_438[(long)iVar21 * 2] = *plVar9;
        *(undefined8 *)(puVar17 + -8) = 0x786e79;
        local_460 = puVar8;
        local_454 = iVar10;
        uVar7 = thunk_FUN_007129d0();
        uVar18 = (long)local_454;
        if (uVar7 < (ulong)(long)local_454) {
          uVar18 = uVar7;
        }
        if (local_454 != -1) {
          uVar7 = uVar18;
        }
        *(ulong *)(local_450 + (long)(local_438 + 1)) = uVar7;
        puVar8 = local_460;
        goto LAB_00786b89;
      }
      if (cVar3 < 't') {
        if (cVar3 == '%') {
LAB_00786b6a:
          local_438[(long)iVar21 * 2] = (long)pcVar15;
          local_438[(long)iVar21 * 2 + 1] = 1;
          goto LAB_00786b89;
        }
        if (cVar3 != 'd') {
LAB_00786dd2:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar17 + -8) = 0x786df1;
          FUN_006e2220("! \"invalid format specifier\"","dl-printf.c",200,"_dl_debug_vdprintf");
        }
LAB_00786bac:
        uVar4 = *param_4;
        if (uVar4 < 0x30) goto LAB_00786bb8;
LAB_00786c9b:
        puVar1 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar1 + 2;
        uVar4 = *puVar1;
        cVar3 = *pcVar16;
      }
      else {
        if (cVar3 == 'u') goto LAB_00786bac;
        if (cVar3 != 'x') goto LAB_00786dd2;
        uVar4 = *param_4;
        if (0x2f < uVar4) goto LAB_00786c9b;
LAB_00786bb8:
        *param_4 = uVar4 + 8;
        uVar4 = *(uint *)((ulong)uVar4 + *(long *)(param_4 + 4));
        cVar3 = *pcVar16;
      }
      uVar7 = (ulong)uVar4;
      if (cVar3 == 'd') {
        bVar2 = (byte)(uVar4 >> 0x18);
        goto LAB_00786cf9;
      }
LAB_00786bd4:
      local_460 = (undefined1 *)CONCAT44(local_460._4_4_,uVar19);
      local_454 = CONCAT31(local_454._1_3_,uVar20);
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      local_450 = (undefined1 *)(((ulong)(puVar17 + -0x21) & 0xfffffffffffffff0) + 0x19);
      uVar11 = 0x10;
      if (cVar3 != 'x') {
        uVar11 = 10;
      }
      *(undefined8 *)(puVar17 + -0x38) = 0x786c3a;
      local_468 = puVar8;
      puVar6 = (undefined1 *)FUN_00795230(uVar7,local_450,uVar11,0);
      lVar22 = (long)(int)local_460;
      pcVar15 = pcVar16;
      puVar8 = local_468;
      if ((int)local_460 == -1) goto LAB_00786c5c;
      cVar3 = '\0';
      uVar20 = (undefined1)local_454;
      if ((long)local_450 - (long)puVar6 < lVar22) {
LAB_00786fb8:
        do {
          puVar6 = puVar6 + -1;
          *puVar6 = uVar20;
        } while ((long)local_450 - (long)puVar6 < lVar22);
joined_r0x00786d86:
        if (cVar3 != '\0') {
          puVar6[-1] = 0x2d;
          puVar6 = puVar6 + -1;
        }
      }
LAB_00786c5c:
      puVar17 = puVar17 + -0x30;
      local_438[(long)iVar21 * 2] = (long)puVar6;
      local_438[(long)iVar21 * 2 + 1] = (long)local_450 - (long)puVar6;
LAB_00786b89:
      iVar21 = iVar21 + 1;
      pcVar16 = pcVar15 + 1;
LAB_00786a3f:
      cVar3 = *pcVar16;
      param_3 = pcVar16;
    } while (cVar3 != '\0');
LAB_00786a4a:
    lVar22 = (long)iVar21;
  }
  syscall();
  auVar23._8_8_ = lVar22;
  auVar23._0_8_ = 0x14;
  return auVar23;
}

