
/* WARNING: Removing unreachable block (ram,0x0077d2ac) */
/* WARNING: Removing unreachable block (ram,0x0077d3d1) */

undefined1  [16] _dl_debug_vdprintf(undefined4 param_1,int param_2,char *param_3,uint *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  __pid_t _Var5;
  undefined1 *puVar6;
  size_t sVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
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
    _Var5 = 0;
    iVar21 = 0;
    puVar8 = local_444;
    local_458 = param_1;
    do {
      if (param_2 == 1) goto LAB_0077d16f;
      pcVar16 = param_3;
      if (cVar3 == '\0') goto LAB_0077d1b2;
LAB_0077d0a2:
      pcVar16 = param_3;
      if (cVar3 == '%') goto LAB_0077d1b2;
      while ((cVar3 != '\n' || (cVar3 = '\n', param_2 == 0))) {
        cVar3 = pcVar16[1];
        pcVar16 = pcVar16 + 1;
        if ((cVar3 == '\0') || (cVar3 == '%')) break;
      }
      if (0x3f < iVar21) {
LAB_0077d708:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x77d727;
        __assert_fail("niov < NIOVMAX","dl-printf.c",0x4d,"_dl_debug_vdprintf");
      }
      local_438[(long)iVar21 * 2 + 1] = (long)pcVar16 - (long)param_3;
      if ((long)pcVar16 - (long)param_3 != 0) {
        local_438[(long)iVar21 * 2] = (long)param_3;
        iVar21 = iVar21 + 1;
      }
      if (cVar3 != '%') {
        while( true ) {
          if (cVar3 != '\n') goto LAB_0077d10f;
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
          if (pcVar16[1] == '\0') goto LAB_0077d11a;
LAB_0077d16f:
          if (_Var5 == 0) {
            *(undefined8 *)(puVar17 + -8) = 0x77d58c;
            local_450 = puVar8;
            _Var5 = getpid();
            if (_Var5 < 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar17 + -8) = &UNK_0077d705;
              __assert_fail("pid >= 0 && sizeof (pid_t) <= 4","dl-printf.c",0x37,
                            "_dl_debug_vdprintf");
            }
            *(undefined8 *)(puVar17 + -8) = 0x77d5bb;
            puVar6 = (undefined1 *)_itoa_word((long)_Var5,&local_43a,10,0);
            puVar8 = local_450;
            if (local_450 < puVar6) {
              *(undefined8 *)(puVar17 + -8) = 0x77d5da;
              puVar8 = (undefined1 *)memset(local_450,0x20,(long)puVar6 - (long)local_450);
            }
            local_43a = 0x93a;
          }
          if (0x3f < iVar21) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar17 + -8) = 0x77d6e6;
            __assert_fail("niov < NIOVMAX","dl-printf.c",0x40,"_dl_debug_vdprintf");
          }
          lVar22 = (long)iVar21;
          param_2 = -1;
          iVar21 = iVar21 + 1;
          local_438[lVar22 * 2 + 1] = 0xc;
          local_438[lVar22 * 2] = (long)puVar8;
          cVar3 = *param_3;
          pcVar16 = param_3;
          if (cVar3 != '\0') break;
LAB_0077d1b2:
          if (0x3f < iVar21) goto LAB_0077d708;
          local_438[(long)iVar21 * 2 + 1] = 0;
          param_3 = pcVar16;
          if (cVar3 == '%') goto LAB_0077d1e0;
        }
        goto LAB_0077d0a2;
      }
LAB_0077d1e0:
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
        if (pcVar16[1] != '*') goto LAB_0077d4a2;
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
        if (cVar3 == 's') goto LAB_0077d506;
        if (cVar3 < 't') {
          if (cVar3 == '%') goto LAB_0077d23a;
          if (cVar3 != 'd') goto LAB_0077d4a2;
LAB_0077d395:
          uVar4 = *param_4;
          if (uVar4 < 0x30) goto LAB_0077d3a1;
LAB_0077d479:
          puVar12 = *(ulong **)(param_4 + 2);
          *(ulong **)(param_4 + 2) = puVar12 + 1;
        }
        else {
          if (cVar3 == 'u') goto LAB_0077d395;
          if (cVar3 != 'x') goto LAB_0077d4a2;
          uVar4 = *param_4;
          if (0x2f < uVar4) goto LAB_0077d479;
LAB_0077d3a1:
          puVar12 = (ulong *)((ulong)uVar4 + *(long *)(param_4 + 4));
          *param_4 = uVar4 + 8;
        }
        cVar3 = pcVar16[1];
        uVar18 = *puVar12;
        pcVar16 = pcVar15;
        if (cVar3 != 'd') goto LAB_0077d2a4;
        bVar2 = (byte)(uVar18 >> 0x38);
LAB_0077d3c9:
        local_468 = (undefined1 *)CONCAT71(local_468._1_7_,bVar2 >> 7);
        local_460 = (undefined1 *)CONCAT44(local_460._4_4_,uVar19);
        local_454 = CONCAT31(local_454._1_3_,uVar20);
        *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
        local_450 = (undefined1 *)(((ulong)(puVar17 + -0x21) & 0xfffffffffffffff0) + 0x19);
        *(undefined8 *)(puVar17 + -0x38) = 0x77d42c;
        local_470 = puVar8;
        puVar6 = (undefined1 *)_itoa_word(uVar18,local_450,10,0);
        lVar22 = (long)(int)local_460;
        pcVar15 = pcVar16;
        puVar8 = local_470;
        cVar3 = (char)local_468;
        if (((int)local_460 == -1) ||
           (uVar20 = (undefined1)local_454, lVar22 <= (long)local_450 - (long)puVar6))
        goto joined_r0x0077d456;
        goto LAB_0077d688;
      }
      pcVar15 = pcVar16;
      if (cVar3 == 's') {
LAB_0077d506:
        uVar4 = *param_4;
        if (uVar4 < 0x30) {
          puVar9 = (undefined8 *)((ulong)uVar4 + *(long *)(param_4 + 4));
          *param_4 = uVar4 + 8;
        }
        else {
          puVar9 = *(undefined8 **)(param_4 + 2);
          *(undefined8 **)(param_4 + 2) = puVar9 + 1;
        }
        pcVar16 = (char *)*puVar9;
        local_450 = (undefined1 *)((long)iVar21 * 0x10);
        local_438[(long)iVar21 * 2] = (long)pcVar16;
        *(undefined8 *)(puVar17 + -8) = 0x77d549;
        local_460 = puVar8;
        local_454 = iVar10;
        sVar7 = strlen(pcVar16);
        uVar18 = (long)local_454;
        if (sVar7 < (ulong)(long)local_454) {
          uVar18 = sVar7;
        }
        if (local_454 != -1) {
          sVar7 = uVar18;
        }
        *(size_t *)(local_450 + (long)(local_438 + 1)) = sVar7;
        puVar8 = local_460;
        goto LAB_0077d259;
      }
      if (cVar3 < 't') {
        if (cVar3 == '%') {
LAB_0077d23a:
          local_438[(long)iVar21 * 2] = (long)pcVar15;
          local_438[(long)iVar21 * 2 + 1] = 1;
          goto LAB_0077d259;
        }
        if (cVar3 != 'd') {
LAB_0077d4a2:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar17 + -8) = &UNK_0077d4c1;
          __assert_fail("! \"invalid format specifier\"","dl-printf.c",200,"_dl_debug_vdprintf");
        }
LAB_0077d27c:
        uVar4 = *param_4;
        if (uVar4 < 0x30) goto LAB_0077d288;
LAB_0077d36b:
        puVar1 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar1 + 2;
        uVar4 = *puVar1;
        cVar3 = *pcVar16;
      }
      else {
        if (cVar3 == 'u') goto LAB_0077d27c;
        if (cVar3 != 'x') goto LAB_0077d4a2;
        uVar4 = *param_4;
        if (0x2f < uVar4) goto LAB_0077d36b;
LAB_0077d288:
        *param_4 = uVar4 + 8;
        uVar4 = *(uint *)((ulong)uVar4 + *(long *)(param_4 + 4));
        cVar3 = *pcVar16;
      }
      uVar18 = (ulong)uVar4;
      if (cVar3 == 'd') {
        bVar2 = (byte)(uVar4 >> 0x18);
        goto LAB_0077d3c9;
      }
LAB_0077d2a4:
      local_460 = (undefined1 *)CONCAT44(local_460._4_4_,uVar19);
      local_454 = CONCAT31(local_454._1_3_,uVar20);
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      local_450 = (undefined1 *)(((ulong)(puVar17 + -0x21) & 0xfffffffffffffff0) + 0x19);
      uVar11 = 0x10;
      if (cVar3 != 'x') {
        uVar11 = 10;
      }
      *(undefined8 *)(puVar17 + -0x38) = 0x77d30a;
      local_468 = puVar8;
      puVar6 = (undefined1 *)_itoa_word(uVar18,local_450,uVar11,0);
      lVar22 = (long)(int)local_460;
      pcVar15 = pcVar16;
      puVar8 = local_468;
      if ((int)local_460 == -1) goto LAB_0077d32c;
      cVar3 = '\0';
      uVar20 = (undefined1)local_454;
      if ((long)local_450 - (long)puVar6 < lVar22) {
LAB_0077d688:
        do {
          puVar6 = puVar6 + -1;
          *puVar6 = uVar20;
        } while ((long)local_450 - (long)puVar6 < lVar22);
joined_r0x0077d456:
        if (cVar3 != '\0') {
          puVar6[-1] = 0x2d;
          puVar6 = puVar6 + -1;
        }
      }
LAB_0077d32c:
      puVar17 = puVar17 + -0x30;
      local_438[(long)iVar21 * 2] = (long)puVar6;
      local_438[(long)iVar21 * 2 + 1] = (long)local_450 - (long)puVar6;
LAB_0077d259:
      iVar21 = iVar21 + 1;
      pcVar16 = pcVar15 + 1;
LAB_0077d10f:
      cVar3 = *pcVar16;
      param_3 = pcVar16;
    } while (cVar3 != '\0');
LAB_0077d11a:
    lVar22 = (long)iVar21;
  }
  syscall();
  auVar23._8_8_ = lVar22;
  auVar23._0_8_ = 0x14;
  return auVar23;
}

