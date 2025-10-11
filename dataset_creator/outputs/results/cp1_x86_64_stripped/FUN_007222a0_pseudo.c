
char * FUN_007222a0(undefined8 *param_1,undefined8 *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char *pcVar20;
  int extraout_EDX;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  ulong uVar35;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcVar36;
  long in_FS_OFFSET;
  
  if (param_4 < param_3) {
    pcVar20 = "buffer overflow detected";
    FUN_00771f80();
    if (extraout_EDX < 1) {
      pcVar36 = (char *)0x0;
    }
    else {
      uVar21 = *param_4;
      if ((uVar21 & 0x8000) == 0) {
        lVar24 = *(long *)(in_FS_OFFSET + 0x10);
        piVar33 = *(int **)(param_4 + 0x22);
        if (*(long *)(piVar33 + 2) != lVar24) {
          LOCK();
          iVar1 = *piVar33;
          if (iVar1 == 0) {
            *piVar33 = 1;
          }
          UNLOCK();
          if (iVar1 != 0) {
            FUN_00709590();
          }
          piVar33 = *(int **)(param_4 + 0x22);
          uVar21 = *param_4;
          *(long *)(piVar33 + 2) = lVar24;
        }
        piVar33[1] = piVar33[1] + 1;
      }
      *param_4 = uVar21 & 0xffffffdf;
      puVar30 = (undefined8 *)((long)extraout_EDX + -1);
      if (param_2 < (undefined8 *)((long)extraout_EDX + -1)) {
        puVar30 = param_2;
      }
      puVar30 = (undefined8 *)FUN_006fe490(param_4,pcVar20,puVar30,10,1);
      uVar22 = *param_4;
      if (puVar30 == (undefined8 *)0x0) {
        pcVar36 = (char *)0x0;
      }
      else if (((uVar22 & 0x20) == 0) ||
              (pcVar36 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
        if (param_2 <= puVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_00771d30();
        }
        pcVar20[(long)puVar30] = '\0';
        uVar22 = *param_4;
        pcVar36 = pcVar20;
      }
      *param_4 = uVar21 & 0x20 | uVar22;
      if ((uVar22 & 0x8000) == 0) {
        piVar33 = *(int **)(param_4 + 0x22);
        iVar1 = piVar33[1];
        piVar33[1] = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          piVar33[2] = 0;
          piVar33[3] = 0;
          LOCK();
          iVar1 = *piVar33;
          *piVar33 = 0;
          UNLOCK();
          if (1 < iVar1) {
            FUN_00709660();
          }
        }
      }
    }
    return pcVar36;
  }
  pcVar20 = (char *)((long)param_1 + (long)param_3);
  if (param_3 < (uint *)0x50) {
    lVar24 = (long)param_2 + (long)param_3;
    lVar28 = (long)param_1 + (long)param_3;
    switch(param_3) {
    case (uint *)0x1:
      *(undefined1 *)(lVar28 + -1) = *(undefined1 *)(lVar24 + -1);
      return pcVar20;
    case (uint *)0x2:
      *(undefined2 *)(lVar28 + -2) = *(undefined2 *)(lVar24 + -2);
      return pcVar20;
    case (uint *)0x3:
      uVar3 = *(undefined2 *)(lVar24 + -2);
      *(undefined2 *)(lVar28 + -3) = *(undefined2 *)(lVar24 + -3);
      *(undefined2 *)(lVar28 + -2) = uVar3;
      return pcVar20;
    case (uint *)0x4:
      *(undefined4 *)(lVar28 + -4) = *(undefined4 *)(lVar24 + -4);
      return pcVar20;
    case (uint *)0x5:
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined4 *)(lVar28 + -5) = *(undefined4 *)(lVar24 + -5);
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x6:
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined4 *)(lVar28 + -6) = *(undefined4 *)(lVar24 + -6);
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x7:
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined4 *)(lVar28 + -7) = *(undefined4 *)(lVar24 + -7);
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x8:
      *(undefined8 *)(lVar28 + -8) = *(undefined8 *)(lVar24 + -8);
      break;
    case (uint *)0x9:
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -9) = *(undefined8 *)(lVar24 + -9);
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0xa:
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -10) = *(undefined8 *)(lVar24 + -10);
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0xb:
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0xb) = *(undefined8 *)(lVar24 + -0xb);
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0xc:
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0xc) = *(undefined8 *)(lVar24 + -0xc);
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0xd:
      uVar5 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0xd) = *(undefined8 *)(lVar24 + -0xd);
      *(undefined8 *)(lVar28 + -8) = uVar5;
      return pcVar20;
    case (uint *)0xe:
      uVar5 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0xe) = *(undefined8 *)(lVar24 + -0xe);
      *(undefined8 *)(lVar28 + -8) = uVar5;
      return pcVar20;
    case (uint *)0xf:
      uVar5 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0xf) = *(undefined8 *)(lVar24 + -0xf);
      *(undefined8 *)(lVar28 + -8) = uVar5;
      return pcVar20;
    case (uint *)0x10:
      uVar5 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar24 + -0x10);
      *(undefined8 *)(lVar28 + -8) = uVar5;
      return pcVar20;
    case (uint *)0x11:
      uVar5 = *(undefined8 *)(lVar24 + -9);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x11) = *(undefined8 *)(lVar24 + -0x11);
      *(undefined8 *)(lVar28 + -9) = uVar5;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x12:
      uVar5 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x12) = *(undefined8 *)(lVar24 + -0x12);
      *(undefined8 *)(lVar28 + -10) = uVar5;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x13:
      uVar5 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x13) = *(undefined8 *)(lVar24 + -0x13);
      *(undefined8 *)(lVar28 + -0xb) = uVar5;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x14:
      uVar5 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x14) = *(undefined8 *)(lVar24 + -0x14);
      *(undefined8 *)(lVar28 + -0xc) = uVar5;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x15:
      uVar5 = *(undefined8 *)(lVar24 + -0xd);
      uVar6 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x15) = *(undefined8 *)(lVar24 + -0x15);
      *(undefined8 *)(lVar28 + -0xd) = uVar5;
      *(undefined8 *)(lVar28 + -8) = uVar6;
      return pcVar20;
    case (uint *)0x16:
      uVar5 = *(undefined8 *)(lVar24 + -0xe);
      uVar6 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x16) = *(undefined8 *)(lVar24 + -0x16);
      *(undefined8 *)(lVar28 + -0xe) = uVar5;
      *(undefined8 *)(lVar28 + -8) = uVar6;
      return pcVar20;
    case (uint *)0x17:
      uVar5 = *(undefined8 *)(lVar24 + -0xf);
      uVar6 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x17) = *(undefined8 *)(lVar24 + -0x17);
      *(undefined8 *)(lVar28 + -0xf) = uVar5;
      *(undefined8 *)(lVar28 + -8) = uVar6;
      return pcVar20;
    case (uint *)0x18:
      uVar5 = *(undefined8 *)(lVar24 + -0x10);
      uVar6 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x18) = *(undefined8 *)(lVar24 + -0x18);
      *(undefined8 *)(lVar28 + -0x10) = uVar5;
      *(undefined8 *)(lVar28 + -8) = uVar6;
      return pcVar20;
    case (uint *)0x19:
      uVar5 = *(undefined8 *)(lVar24 + -0x11);
      uVar6 = *(undefined8 *)(lVar24 + -9);
      uVar2 = *(undefined1 *)(lVar24 + -1);
      *(undefined8 *)(lVar28 + -0x19) = *(undefined8 *)(lVar24 + -0x19);
      *(undefined8 *)(lVar28 + -0x11) = uVar5;
      *(undefined8 *)(lVar28 + -9) = uVar6;
      *(undefined1 *)(lVar28 + -1) = uVar2;
      return pcVar20;
    case (uint *)0x1a:
      uVar5 = *(undefined8 *)(lVar24 + -0x12);
      uVar6 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x1a) = *(undefined8 *)(lVar24 + -0x1a);
      *(undefined8 *)(lVar28 + -0x12) = uVar5;
      *(undefined8 *)(lVar28 + -10) = uVar6;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x1b:
      uVar5 = *(undefined8 *)(lVar24 + -0x13);
      uVar6 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x1b) = *(undefined8 *)(lVar24 + -0x1b);
      *(undefined8 *)(lVar28 + -0x13) = uVar5;
      *(undefined8 *)(lVar28 + -0xb) = uVar6;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x1c:
      uVar5 = *(undefined8 *)(lVar24 + -0x14);
      uVar6 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x1c) = *(undefined8 *)(lVar24 + -0x1c);
      *(undefined8 *)(lVar28 + -0x14) = uVar5;
      *(undefined8 *)(lVar28 + -0xc) = uVar6;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x1d:
      uVar5 = *(undefined8 *)(lVar24 + -0x15);
      uVar6 = *(undefined8 *)(lVar24 + -0xd);
      uVar7 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x1d) = *(undefined8 *)(lVar24 + -0x1d);
      *(undefined8 *)(lVar28 + -0x15) = uVar5;
      *(undefined8 *)(lVar28 + -0xd) = uVar6;
      *(undefined8 *)(lVar28 + -8) = uVar7;
      return pcVar20;
    case (uint *)0x1e:
      uVar5 = *(undefined8 *)(lVar24 + -0x16);
      uVar6 = *(undefined8 *)(lVar24 + -0xe);
      uVar7 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x1e) = *(undefined8 *)(lVar24 + -0x1e);
      *(undefined8 *)(lVar28 + -0x16) = uVar5;
      *(undefined8 *)(lVar28 + -0xe) = uVar6;
      *(undefined8 *)(lVar28 + -8) = uVar7;
      return pcVar20;
    case (uint *)0x1f:
      uVar5 = *(undefined8 *)(lVar24 + -0x17);
      uVar6 = *(undefined8 *)(lVar24 + -0xf);
      uVar7 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x1f) = *(undefined8 *)(lVar24 + -0x1f);
      *(undefined8 *)(lVar28 + -0x17) = uVar5;
      *(undefined8 *)(lVar28 + -0xf) = uVar6;
      *(undefined8 *)(lVar28 + -8) = uVar7;
      return pcVar20;
    case (uint *)0x20:
      uVar5 = *(undefined8 *)(lVar24 + -0x18);
      uVar6 = *(undefined8 *)(lVar24 + -0x10);
      uVar7 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x20) = *(undefined8 *)(lVar24 + -0x20);
      *(undefined8 *)(lVar28 + -0x18) = uVar5;
      *(undefined8 *)(lVar28 + -0x10) = uVar6;
      *(undefined8 *)(lVar28 + -8) = uVar7;
      return pcVar20;
    case (uint *)0x21:
      uVar5 = *(undefined8 *)(lVar24 + -0x19);
      uVar6 = *(undefined8 *)(lVar24 + -0x11);
      uVar7 = *(undefined8 *)(lVar24 + -9);
      uVar2 = *(undefined1 *)(lVar24 + -1);
      *(undefined8 *)(lVar28 + -0x21) = *(undefined8 *)(lVar24 + -0x21);
      *(undefined8 *)(lVar28 + -0x19) = uVar5;
      *(undefined8 *)(lVar28 + -0x11) = uVar6;
      *(undefined8 *)(lVar28 + -9) = uVar7;
      *(undefined1 *)(lVar28 + -1) = uVar2;
      return pcVar20;
    case (uint *)0x22:
      uVar5 = *(undefined8 *)(lVar24 + -0x1a);
      uVar6 = *(undefined8 *)(lVar24 + -0x12);
      uVar7 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x22) = *(undefined8 *)(lVar24 + -0x22);
      *(undefined8 *)(lVar28 + -0x1a) = uVar5;
      *(undefined8 *)(lVar28 + -0x12) = uVar6;
      *(undefined8 *)(lVar28 + -10) = uVar7;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x23:
      uVar5 = *(undefined8 *)(lVar24 + -0x1b);
      uVar6 = *(undefined8 *)(lVar24 + -0x13);
      uVar7 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x23) = *(undefined8 *)(lVar24 + -0x23);
      *(undefined8 *)(lVar28 + -0x1b) = uVar5;
      *(undefined8 *)(lVar28 + -0x13) = uVar6;
      *(undefined8 *)(lVar28 + -0xb) = uVar7;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x24:
      uVar5 = *(undefined8 *)(lVar24 + -0x1c);
      uVar6 = *(undefined8 *)(lVar24 + -0x14);
      uVar7 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x24) = *(undefined8 *)(lVar24 + -0x24);
      *(undefined8 *)(lVar28 + -0x1c) = uVar5;
      *(undefined8 *)(lVar28 + -0x14) = uVar6;
      *(undefined8 *)(lVar28 + -0xc) = uVar7;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x25:
      uVar5 = *(undefined8 *)(lVar24 + -0x1d);
      uVar6 = *(undefined8 *)(lVar24 + -0x15);
      uVar7 = *(undefined8 *)(lVar24 + -0xd);
      uVar8 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x25) = *(undefined8 *)(lVar24 + -0x25);
      *(undefined8 *)(lVar28 + -0x1d) = uVar5;
      *(undefined8 *)(lVar28 + -0x15) = uVar6;
      *(undefined8 *)(lVar28 + -0xd) = uVar7;
      *(undefined8 *)(lVar28 + -8) = uVar8;
      return pcVar20;
    case (uint *)0x26:
      uVar5 = *(undefined8 *)(lVar24 + -0x1e);
      uVar6 = *(undefined8 *)(lVar24 + -0x16);
      uVar7 = *(undefined8 *)(lVar24 + -0xe);
      uVar8 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x26) = *(undefined8 *)(lVar24 + -0x26);
      *(undefined8 *)(lVar28 + -0x1e) = uVar5;
      *(undefined8 *)(lVar28 + -0x16) = uVar6;
      *(undefined8 *)(lVar28 + -0xe) = uVar7;
      *(undefined8 *)(lVar28 + -8) = uVar8;
      return pcVar20;
    case (uint *)0x27:
      uVar5 = *(undefined8 *)(lVar24 + -0x1f);
      uVar6 = *(undefined8 *)(lVar24 + -0x17);
      uVar7 = *(undefined8 *)(lVar24 + -0xf);
      uVar8 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x27) = *(undefined8 *)(lVar24 + -0x27);
      *(undefined8 *)(lVar28 + -0x1f) = uVar5;
      *(undefined8 *)(lVar28 + -0x17) = uVar6;
      *(undefined8 *)(lVar28 + -0xf) = uVar7;
      *(undefined8 *)(lVar28 + -8) = uVar8;
      return pcVar20;
    case (uint *)0x28:
      uVar5 = *(undefined8 *)(lVar24 + -0x20);
      uVar6 = *(undefined8 *)(lVar24 + -0x18);
      uVar7 = *(undefined8 *)(lVar24 + -0x10);
      uVar8 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x28) = *(undefined8 *)(lVar24 + -0x28);
      *(undefined8 *)(lVar28 + -0x20) = uVar5;
      *(undefined8 *)(lVar28 + -0x18) = uVar6;
      *(undefined8 *)(lVar28 + -0x10) = uVar7;
      *(undefined8 *)(lVar28 + -8) = uVar8;
      return pcVar20;
    case (uint *)0x29:
      uVar5 = *(undefined8 *)(lVar24 + -0x21);
      uVar6 = *(undefined8 *)(lVar24 + -0x19);
      uVar7 = *(undefined8 *)(lVar24 + -0x11);
      uVar8 = *(undefined8 *)(lVar24 + -9);
      uVar2 = *(undefined1 *)(lVar24 + -1);
      *(undefined8 *)(lVar28 + -0x29) = *(undefined8 *)(lVar24 + -0x29);
      *(undefined8 *)(lVar28 + -0x21) = uVar5;
      *(undefined8 *)(lVar28 + -0x19) = uVar6;
      *(undefined8 *)(lVar28 + -0x11) = uVar7;
      *(undefined8 *)(lVar28 + -9) = uVar8;
      *(undefined1 *)(lVar28 + -1) = uVar2;
      return pcVar20;
    case (uint *)0x2a:
      uVar5 = *(undefined8 *)(lVar24 + -0x22);
      uVar6 = *(undefined8 *)(lVar24 + -0x1a);
      uVar7 = *(undefined8 *)(lVar24 + -0x12);
      uVar8 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x2a) = *(undefined8 *)(lVar24 + -0x2a);
      *(undefined8 *)(lVar28 + -0x22) = uVar5;
      *(undefined8 *)(lVar28 + -0x1a) = uVar6;
      *(undefined8 *)(lVar28 + -0x12) = uVar7;
      *(undefined8 *)(lVar28 + -10) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x2b:
      uVar5 = *(undefined8 *)(lVar24 + -0x23);
      uVar6 = *(undefined8 *)(lVar24 + -0x1b);
      uVar7 = *(undefined8 *)(lVar24 + -0x13);
      uVar8 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x2b) = *(undefined8 *)(lVar24 + -0x2b);
      *(undefined8 *)(lVar28 + -0x23) = uVar5;
      *(undefined8 *)(lVar28 + -0x1b) = uVar6;
      *(undefined8 *)(lVar28 + -0x13) = uVar7;
      *(undefined8 *)(lVar28 + -0xb) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x2c:
      uVar5 = *(undefined8 *)(lVar24 + -0x24);
      uVar6 = *(undefined8 *)(lVar24 + -0x1c);
      uVar7 = *(undefined8 *)(lVar24 + -0x14);
      uVar8 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x2c) = *(undefined8 *)(lVar24 + -0x2c);
      *(undefined8 *)(lVar28 + -0x24) = uVar5;
      *(undefined8 *)(lVar28 + -0x1c) = uVar6;
      *(undefined8 *)(lVar28 + -0x14) = uVar7;
      *(undefined8 *)(lVar28 + -0xc) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x2d:
      uVar5 = *(undefined8 *)(lVar24 + -0x25);
      uVar6 = *(undefined8 *)(lVar24 + -0x1d);
      uVar7 = *(undefined8 *)(lVar24 + -0x15);
      uVar8 = *(undefined8 *)(lVar24 + -0xd);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x2d) = *(undefined8 *)(lVar24 + -0x2d);
      *(undefined8 *)(lVar28 + -0x25) = uVar5;
      *(undefined8 *)(lVar28 + -0x1d) = uVar6;
      *(undefined8 *)(lVar28 + -0x15) = uVar7;
      *(undefined8 *)(lVar28 + -0xd) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x2e:
      uVar5 = *(undefined8 *)(lVar24 + -0x26);
      uVar6 = *(undefined8 *)(lVar24 + -0x1e);
      uVar7 = *(undefined8 *)(lVar24 + -0x16);
      uVar8 = *(undefined8 *)(lVar24 + -0xe);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x2e) = *(undefined8 *)(lVar24 + -0x2e);
      *(undefined8 *)(lVar28 + -0x26) = uVar5;
      *(undefined8 *)(lVar28 + -0x1e) = uVar6;
      *(undefined8 *)(lVar28 + -0x16) = uVar7;
      *(undefined8 *)(lVar28 + -0xe) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x2f:
      uVar5 = *(undefined8 *)(lVar24 + -0x27);
      uVar6 = *(undefined8 *)(lVar24 + -0x1f);
      uVar7 = *(undefined8 *)(lVar24 + -0x17);
      uVar8 = *(undefined8 *)(lVar24 + -0xf);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x2f) = *(undefined8 *)(lVar24 + -0x2f);
      *(undefined8 *)(lVar28 + -0x27) = uVar5;
      *(undefined8 *)(lVar28 + -0x1f) = uVar6;
      *(undefined8 *)(lVar28 + -0x17) = uVar7;
      *(undefined8 *)(lVar28 + -0xf) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x30:
      uVar5 = *(undefined8 *)(lVar24 + -0x28);
      uVar6 = *(undefined8 *)(lVar24 + -0x20);
      uVar7 = *(undefined8 *)(lVar24 + -0x18);
      uVar8 = *(undefined8 *)(lVar24 + -0x10);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x30) = *(undefined8 *)(lVar24 + -0x30);
      *(undefined8 *)(lVar28 + -0x28) = uVar5;
      *(undefined8 *)(lVar28 + -0x20) = uVar6;
      *(undefined8 *)(lVar28 + -0x18) = uVar7;
      *(undefined8 *)(lVar28 + -0x10) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x31:
      uVar9 = *(undefined8 *)(lVar24 + -0x29);
      uVar5 = *(undefined8 *)(lVar24 + -0x21);
      uVar6 = *(undefined8 *)(lVar24 + -0x19);
      uVar7 = *(undefined8 *)(lVar24 + -0x11);
      uVar8 = *(undefined8 *)(lVar24 + -9);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x31) = *(undefined8 *)(lVar24 + -0x31);
      *(undefined8 *)(lVar28 + -0x29) = uVar9;
      *(undefined8 *)(lVar28 + -0x21) = uVar5;
      *(undefined8 *)(lVar28 + -0x19) = uVar6;
      *(undefined8 *)(lVar28 + -0x11) = uVar7;
      *(undefined8 *)(lVar28 + -9) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x32:
      uVar9 = *(undefined8 *)(lVar24 + -0x2a);
      uVar5 = *(undefined8 *)(lVar24 + -0x22);
      uVar6 = *(undefined8 *)(lVar24 + -0x1a);
      uVar7 = *(undefined8 *)(lVar24 + -0x12);
      uVar8 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x32) = *(undefined8 *)(lVar24 + -0x32);
      *(undefined8 *)(lVar28 + -0x2a) = uVar9;
      *(undefined8 *)(lVar28 + -0x22) = uVar5;
      *(undefined8 *)(lVar28 + -0x1a) = uVar6;
      *(undefined8 *)(lVar28 + -0x12) = uVar7;
      *(undefined8 *)(lVar28 + -10) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x33:
      uVar9 = *(undefined8 *)(lVar24 + -0x2b);
      uVar5 = *(undefined8 *)(lVar24 + -0x23);
      uVar6 = *(undefined8 *)(lVar24 + -0x1b);
      uVar7 = *(undefined8 *)(lVar24 + -0x13);
      uVar8 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x33) = *(undefined8 *)(lVar24 + -0x33);
      *(undefined8 *)(lVar28 + -0x2b) = uVar9;
      *(undefined8 *)(lVar28 + -0x23) = uVar5;
      *(undefined8 *)(lVar28 + -0x1b) = uVar6;
      *(undefined8 *)(lVar28 + -0x13) = uVar7;
      *(undefined8 *)(lVar28 + -0xb) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x34:
      uVar9 = *(undefined8 *)(lVar24 + -0x2c);
      uVar5 = *(undefined8 *)(lVar24 + -0x24);
      uVar6 = *(undefined8 *)(lVar24 + -0x1c);
      uVar7 = *(undefined8 *)(lVar24 + -0x14);
      uVar8 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x34) = *(undefined8 *)(lVar24 + -0x34);
      *(undefined8 *)(lVar28 + -0x2c) = uVar9;
      *(undefined8 *)(lVar28 + -0x24) = uVar5;
      *(undefined8 *)(lVar28 + -0x1c) = uVar6;
      *(undefined8 *)(lVar28 + -0x14) = uVar7;
      *(undefined8 *)(lVar28 + -0xc) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x35:
      uVar10 = *(undefined8 *)(lVar24 + -0x2d);
      uVar5 = *(undefined8 *)(lVar24 + -0x25);
      uVar6 = *(undefined8 *)(lVar24 + -0x1d);
      uVar7 = *(undefined8 *)(lVar24 + -0x15);
      uVar8 = *(undefined8 *)(lVar24 + -0xd);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x35) = *(undefined8 *)(lVar24 + -0x35);
      *(undefined8 *)(lVar28 + -0x2d) = uVar10;
      *(undefined8 *)(lVar28 + -0x25) = uVar5;
      *(undefined8 *)(lVar28 + -0x1d) = uVar6;
      *(undefined8 *)(lVar28 + -0x15) = uVar7;
      *(undefined8 *)(lVar28 + -0xd) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x36:
      uVar10 = *(undefined8 *)(lVar24 + -0x2e);
      uVar5 = *(undefined8 *)(lVar24 + -0x26);
      uVar6 = *(undefined8 *)(lVar24 + -0x1e);
      uVar7 = *(undefined8 *)(lVar24 + -0x16);
      uVar8 = *(undefined8 *)(lVar24 + -0xe);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x36) = *(undefined8 *)(lVar24 + -0x36);
      *(undefined8 *)(lVar28 + -0x2e) = uVar10;
      *(undefined8 *)(lVar28 + -0x26) = uVar5;
      *(undefined8 *)(lVar28 + -0x1e) = uVar6;
      *(undefined8 *)(lVar28 + -0x16) = uVar7;
      *(undefined8 *)(lVar28 + -0xe) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x37:
      uVar10 = *(undefined8 *)(lVar24 + -0x2f);
      uVar5 = *(undefined8 *)(lVar24 + -0x27);
      uVar6 = *(undefined8 *)(lVar24 + -0x1f);
      uVar7 = *(undefined8 *)(lVar24 + -0x17);
      uVar8 = *(undefined8 *)(lVar24 + -0xf);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x37) = *(undefined8 *)(lVar24 + -0x37);
      *(undefined8 *)(lVar28 + -0x2f) = uVar10;
      *(undefined8 *)(lVar28 + -0x27) = uVar5;
      *(undefined8 *)(lVar28 + -0x1f) = uVar6;
      *(undefined8 *)(lVar28 + -0x17) = uVar7;
      *(undefined8 *)(lVar28 + -0xf) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x38:
      uVar10 = *(undefined8 *)(lVar24 + -0x30);
      uVar5 = *(undefined8 *)(lVar24 + -0x28);
      uVar6 = *(undefined8 *)(lVar24 + -0x20);
      uVar7 = *(undefined8 *)(lVar24 + -0x18);
      uVar8 = *(undefined8 *)(lVar24 + -0x10);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x38) = *(undefined8 *)(lVar24 + -0x38);
      *(undefined8 *)(lVar28 + -0x30) = uVar10;
      *(undefined8 *)(lVar28 + -0x28) = uVar5;
      *(undefined8 *)(lVar28 + -0x20) = uVar6;
      *(undefined8 *)(lVar28 + -0x18) = uVar7;
      *(undefined8 *)(lVar28 + -0x10) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x39:
      uVar10 = *(undefined8 *)(lVar24 + -0x31);
      uVar5 = *(undefined8 *)(lVar24 + -0x29);
      uVar6 = *(undefined8 *)(lVar24 + -0x21);
      uVar7 = *(undefined8 *)(lVar24 + -0x19);
      uVar8 = *(undefined8 *)(lVar24 + -0x11);
      uVar9 = *(undefined8 *)(lVar24 + -9);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x39) = *(undefined8 *)(lVar24 + -0x39);
      *(undefined8 *)(lVar28 + -0x31) = uVar10;
      *(undefined8 *)(lVar28 + -0x29) = uVar5;
      *(undefined8 *)(lVar28 + -0x21) = uVar6;
      *(undefined8 *)(lVar28 + -0x19) = uVar7;
      *(undefined8 *)(lVar28 + -0x11) = uVar8;
      *(undefined8 *)(lVar28 + -9) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x3a:
      uVar10 = *(undefined8 *)(lVar24 + -0x32);
      uVar5 = *(undefined8 *)(lVar24 + -0x2a);
      uVar6 = *(undefined8 *)(lVar24 + -0x22);
      uVar7 = *(undefined8 *)(lVar24 + -0x1a);
      uVar8 = *(undefined8 *)(lVar24 + -0x12);
      uVar9 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x3a) = *(undefined8 *)(lVar24 + -0x3a);
      *(undefined8 *)(lVar28 + -0x32) = uVar10;
      *(undefined8 *)(lVar28 + -0x2a) = uVar5;
      *(undefined8 *)(lVar28 + -0x22) = uVar6;
      *(undefined8 *)(lVar28 + -0x1a) = uVar7;
      *(undefined8 *)(lVar28 + -0x12) = uVar8;
      *(undefined8 *)(lVar28 + -10) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x3b:
      uVar10 = *(undefined8 *)(lVar24 + -0x33);
      uVar5 = *(undefined8 *)(lVar24 + -0x2b);
      uVar6 = *(undefined8 *)(lVar24 + -0x23);
      uVar7 = *(undefined8 *)(lVar24 + -0x1b);
      uVar8 = *(undefined8 *)(lVar24 + -0x13);
      uVar9 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x3b) = *(undefined8 *)(lVar24 + -0x3b);
      *(undefined8 *)(lVar28 + -0x33) = uVar10;
      *(undefined8 *)(lVar28 + -0x2b) = uVar5;
      *(undefined8 *)(lVar28 + -0x23) = uVar6;
      *(undefined8 *)(lVar28 + -0x1b) = uVar7;
      *(undefined8 *)(lVar28 + -0x13) = uVar8;
      *(undefined8 *)(lVar28 + -0xb) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x3c:
      uVar10 = *(undefined8 *)(lVar24 + -0x34);
      uVar5 = *(undefined8 *)(lVar24 + -0x2c);
      uVar6 = *(undefined8 *)(lVar24 + -0x24);
      uVar7 = *(undefined8 *)(lVar24 + -0x1c);
      uVar8 = *(undefined8 *)(lVar24 + -0x14);
      uVar9 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x3c) = *(undefined8 *)(lVar24 + -0x3c);
      *(undefined8 *)(lVar28 + -0x34) = uVar10;
      *(undefined8 *)(lVar28 + -0x2c) = uVar5;
      *(undefined8 *)(lVar28 + -0x24) = uVar6;
      *(undefined8 *)(lVar28 + -0x1c) = uVar7;
      *(undefined8 *)(lVar28 + -0x14) = uVar8;
      *(undefined8 *)(lVar28 + -0xc) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x3d:
      uVar11 = *(undefined8 *)(lVar24 + -0x35);
      uVar5 = *(undefined8 *)(lVar24 + -0x2d);
      uVar6 = *(undefined8 *)(lVar24 + -0x25);
      uVar7 = *(undefined8 *)(lVar24 + -0x1d);
      uVar8 = *(undefined8 *)(lVar24 + -0x15);
      uVar9 = *(undefined8 *)(lVar24 + -0xd);
      uVar10 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x3d) = *(undefined8 *)(lVar24 + -0x3d);
      *(undefined8 *)(lVar28 + -0x35) = uVar11;
      *(undefined8 *)(lVar28 + -0x2d) = uVar5;
      *(undefined8 *)(lVar28 + -0x25) = uVar6;
      *(undefined8 *)(lVar28 + -0x1d) = uVar7;
      *(undefined8 *)(lVar28 + -0x15) = uVar8;
      *(undefined8 *)(lVar28 + -0xd) = uVar9;
      *(undefined8 *)(lVar28 + -8) = uVar10;
      return pcVar20;
    case (uint *)0x3e:
      uVar11 = *(undefined8 *)(lVar24 + -0x36);
      uVar5 = *(undefined8 *)(lVar24 + -0x2e);
      uVar6 = *(undefined8 *)(lVar24 + -0x26);
      uVar7 = *(undefined8 *)(lVar24 + -0x1e);
      uVar8 = *(undefined8 *)(lVar24 + -0x16);
      uVar9 = *(undefined8 *)(lVar24 + -0xe);
      uVar10 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x3e) = *(undefined8 *)(lVar24 + -0x3e);
      *(undefined8 *)(lVar28 + -0x36) = uVar11;
      *(undefined8 *)(lVar28 + -0x2e) = uVar5;
      *(undefined8 *)(lVar28 + -0x26) = uVar6;
      *(undefined8 *)(lVar28 + -0x1e) = uVar7;
      *(undefined8 *)(lVar28 + -0x16) = uVar8;
      *(undefined8 *)(lVar28 + -0xe) = uVar9;
      *(undefined8 *)(lVar28 + -8) = uVar10;
      return pcVar20;
    case (uint *)0x3f:
      uVar11 = *(undefined8 *)(lVar24 + -0x37);
      uVar5 = *(undefined8 *)(lVar24 + -0x2f);
      uVar6 = *(undefined8 *)(lVar24 + -0x27);
      uVar7 = *(undefined8 *)(lVar24 + -0x1f);
      uVar8 = *(undefined8 *)(lVar24 + -0x17);
      uVar9 = *(undefined8 *)(lVar24 + -0xf);
      uVar10 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x3f) = *(undefined8 *)(lVar24 + -0x3f);
      *(undefined8 *)(lVar28 + -0x37) = uVar11;
      *(undefined8 *)(lVar28 + -0x2f) = uVar5;
      *(undefined8 *)(lVar28 + -0x27) = uVar6;
      *(undefined8 *)(lVar28 + -0x1f) = uVar7;
      *(undefined8 *)(lVar28 + -0x17) = uVar8;
      *(undefined8 *)(lVar28 + -0xf) = uVar9;
      *(undefined8 *)(lVar28 + -8) = uVar10;
      return pcVar20;
    case (uint *)0x40:
      uVar11 = *(undefined8 *)(lVar24 + -0x38);
      uVar5 = *(undefined8 *)(lVar24 + -0x30);
      uVar6 = *(undefined8 *)(lVar24 + -0x28);
      uVar7 = *(undefined8 *)(lVar24 + -0x20);
      uVar8 = *(undefined8 *)(lVar24 + -0x18);
      uVar9 = *(undefined8 *)(lVar24 + -0x10);
      uVar10 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x40) = *(undefined8 *)(lVar24 + -0x40);
      *(undefined8 *)(lVar28 + -0x38) = uVar11;
      *(undefined8 *)(lVar28 + -0x30) = uVar5;
      *(undefined8 *)(lVar28 + -0x28) = uVar6;
      *(undefined8 *)(lVar28 + -0x20) = uVar7;
      *(undefined8 *)(lVar28 + -0x18) = uVar8;
      *(undefined8 *)(lVar28 + -0x10) = uVar9;
      *(undefined8 *)(lVar28 + -8) = uVar10;
      return pcVar20;
    case (uint *)0x41:
      uVar9 = *(undefined8 *)(lVar24 + -0x39);
      uVar10 = *(undefined8 *)(lVar24 + -0x31);
      uVar11 = *(undefined8 *)(lVar24 + -0x29);
      uVar5 = *(undefined8 *)(lVar24 + -0x21);
      uVar6 = *(undefined8 *)(lVar24 + -0x19);
      uVar7 = *(undefined8 *)(lVar24 + -0x11);
      uVar8 = *(undefined8 *)(lVar24 + -9);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x41) = *(undefined8 *)(lVar24 + -0x41);
      *(undefined8 *)(lVar28 + -0x39) = uVar9;
      *(undefined8 *)(lVar28 + -0x31) = uVar10;
      *(undefined8 *)(lVar28 + -0x29) = uVar11;
      *(undefined8 *)(lVar28 + -0x21) = uVar5;
      *(undefined8 *)(lVar28 + -0x19) = uVar6;
      *(undefined8 *)(lVar28 + -0x11) = uVar7;
      *(undefined8 *)(lVar28 + -9) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x42:
      uVar10 = *(undefined8 *)(lVar24 + -0x3a);
      uVar11 = *(undefined8 *)(lVar24 + -0x32);
      uVar12 = *(undefined8 *)(lVar24 + -0x2a);
      uVar5 = *(undefined8 *)(lVar24 + -0x2a);
      uVar6 = *(undefined8 *)(lVar24 + -0x22);
      uVar7 = *(undefined8 *)(lVar24 + -0x1a);
      uVar8 = *(undefined8 *)(lVar24 + -0x12);
      uVar9 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x42) = *(undefined8 *)(lVar24 + -0x42);
      *(undefined8 *)(lVar28 + -0x3a) = uVar10;
      *(undefined8 *)(lVar28 + -0x32) = uVar11;
      *(undefined8 *)(lVar28 + -0x2a) = uVar12;
      *(undefined8 *)(lVar28 + -0x2a) = uVar5;
      *(undefined8 *)(lVar28 + -0x22) = uVar6;
      *(undefined8 *)(lVar28 + -0x1a) = uVar7;
      *(undefined8 *)(lVar28 + -0x12) = uVar8;
      *(undefined8 *)(lVar28 + -10) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x43:
      uVar10 = *(undefined8 *)(lVar24 + -0x3b);
      uVar11 = *(undefined8 *)(lVar24 + -0x3b);
      uVar12 = *(undefined8 *)(lVar24 + -0x33);
      uVar5 = *(undefined8 *)(lVar24 + -0x2b);
      uVar6 = *(undefined8 *)(lVar24 + -0x23);
      uVar7 = *(undefined8 *)(lVar24 + -0x1b);
      uVar8 = *(undefined8 *)(lVar24 + -0x13);
      uVar9 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x43) = *(undefined8 *)(lVar24 + -0x43);
      *(undefined8 *)(lVar28 + -0x3b) = uVar10;
      *(undefined8 *)(lVar28 + -0x3b) = uVar11;
      *(undefined8 *)(lVar28 + -0x33) = uVar12;
      *(undefined8 *)(lVar28 + -0x2b) = uVar5;
      *(undefined8 *)(lVar28 + -0x23) = uVar6;
      *(undefined8 *)(lVar28 + -0x1b) = uVar7;
      *(undefined8 *)(lVar28 + -0x13) = uVar8;
      *(undefined8 *)(lVar28 + -0xb) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x44:
      uVar9 = *(undefined8 *)(lVar24 + -0x3c);
      uVar10 = *(undefined8 *)(lVar24 + -0x34);
      uVar11 = *(undefined8 *)(lVar24 + -0x2c);
      uVar5 = *(undefined8 *)(lVar24 + -0x24);
      uVar6 = *(undefined8 *)(lVar24 + -0x1c);
      uVar7 = *(undefined8 *)(lVar24 + -0x14);
      uVar8 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x44) = *(undefined8 *)(lVar24 + -0x44);
      *(undefined8 *)(lVar28 + -0x3c) = uVar9;
      *(undefined8 *)(lVar28 + -0x34) = uVar10;
      *(undefined8 *)(lVar28 + -0x2c) = uVar11;
      *(undefined8 *)(lVar28 + -0x24) = uVar5;
      *(undefined8 *)(lVar28 + -0x1c) = uVar6;
      *(undefined8 *)(lVar28 + -0x14) = uVar7;
      *(undefined8 *)(lVar28 + -0xc) = uVar8;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x45:
      uVar10 = *(undefined8 *)(lVar24 + -0x3d);
      uVar11 = *(undefined8 *)(lVar24 + -0x35);
      uVar12 = *(undefined8 *)(lVar24 + -0x2d);
      uVar5 = *(undefined8 *)(lVar24 + -0x25);
      uVar6 = *(undefined8 *)(lVar24 + -0x1d);
      uVar7 = *(undefined8 *)(lVar24 + -0x15);
      uVar8 = *(undefined8 *)(lVar24 + -0xd);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x45) = *(undefined8 *)(lVar24 + -0x45);
      *(undefined8 *)(lVar28 + -0x3d) = uVar10;
      *(undefined8 *)(lVar28 + -0x35) = uVar11;
      *(undefined8 *)(lVar28 + -0x2d) = uVar12;
      *(undefined8 *)(lVar28 + -0x25) = uVar5;
      *(undefined8 *)(lVar28 + -0x1d) = uVar6;
      *(undefined8 *)(lVar28 + -0x15) = uVar7;
      *(undefined8 *)(lVar28 + -0xd) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x46:
      uVar10 = *(undefined8 *)(lVar24 + -0x3e);
      uVar11 = *(undefined8 *)(lVar24 + -0x36);
      uVar12 = *(undefined8 *)(lVar24 + -0x2e);
      uVar5 = *(undefined8 *)(lVar24 + -0x26);
      uVar6 = *(undefined8 *)(lVar24 + -0x1e);
      uVar7 = *(undefined8 *)(lVar24 + -0x16);
      uVar8 = *(undefined8 *)(lVar24 + -0xe);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x46) = *(undefined8 *)(lVar24 + -0x46);
      *(undefined8 *)(lVar28 + -0x3e) = uVar10;
      *(undefined8 *)(lVar28 + -0x36) = uVar11;
      *(undefined8 *)(lVar28 + -0x2e) = uVar12;
      *(undefined8 *)(lVar28 + -0x26) = uVar5;
      *(undefined8 *)(lVar28 + -0x1e) = uVar6;
      *(undefined8 *)(lVar28 + -0x16) = uVar7;
      *(undefined8 *)(lVar28 + -0xe) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x47:
      uVar10 = *(undefined8 *)(lVar24 + -0x3f);
      uVar11 = *(undefined8 *)(lVar24 + -0x37);
      uVar12 = *(undefined8 *)(lVar24 + -0x2f);
      uVar5 = *(undefined8 *)(lVar24 + -0x27);
      uVar6 = *(undefined8 *)(lVar24 + -0x1f);
      uVar7 = *(undefined8 *)(lVar24 + -0x17);
      uVar8 = *(undefined8 *)(lVar24 + -0xf);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x47) = *(undefined8 *)(lVar24 + -0x47);
      *(undefined8 *)(lVar28 + -0x3f) = uVar10;
      *(undefined8 *)(lVar28 + -0x37) = uVar11;
      *(undefined8 *)(lVar28 + -0x2f) = uVar12;
      *(undefined8 *)(lVar28 + -0x27) = uVar5;
      *(undefined8 *)(lVar28 + -0x1f) = uVar6;
      *(undefined8 *)(lVar28 + -0x17) = uVar7;
      *(undefined8 *)(lVar28 + -0xf) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x48:
      uVar10 = *(undefined8 *)(lVar24 + -0x40);
      uVar11 = *(undefined8 *)(lVar24 + -0x38);
      uVar12 = *(undefined8 *)(lVar24 + -0x30);
      uVar5 = *(undefined8 *)(lVar24 + -0x28);
      uVar6 = *(undefined8 *)(lVar24 + -0x20);
      uVar7 = *(undefined8 *)(lVar24 + -0x18);
      uVar8 = *(undefined8 *)(lVar24 + -0x10);
      uVar9 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x48) = *(undefined8 *)(lVar24 + -0x48);
      *(undefined8 *)(lVar28 + -0x40) = uVar10;
      *(undefined8 *)(lVar28 + -0x38) = uVar11;
      *(undefined8 *)(lVar28 + -0x30) = uVar12;
      *(undefined8 *)(lVar28 + -0x28) = uVar5;
      *(undefined8 *)(lVar28 + -0x20) = uVar6;
      *(undefined8 *)(lVar28 + -0x18) = uVar7;
      *(undefined8 *)(lVar28 + -0x10) = uVar8;
      *(undefined8 *)(lVar28 + -8) = uVar9;
      return pcVar20;
    case (uint *)0x49:
      uVar10 = *(undefined8 *)(lVar24 + -0x41);
      uVar11 = *(undefined8 *)(lVar24 + -0x39);
      uVar12 = *(undefined8 *)(lVar24 + -0x31);
      uVar5 = *(undefined8 *)(lVar24 + -0x29);
      uVar6 = *(undefined8 *)(lVar24 + -0x21);
      uVar7 = *(undefined8 *)(lVar24 + -0x19);
      uVar8 = *(undefined8 *)(lVar24 + -0x11);
      uVar9 = *(undefined8 *)(lVar24 + -9);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x49) = *(undefined8 *)(lVar24 + -0x49);
      *(undefined8 *)(lVar28 + -0x41) = uVar10;
      *(undefined8 *)(lVar28 + -0x39) = uVar11;
      *(undefined8 *)(lVar28 + -0x31) = uVar12;
      *(undefined8 *)(lVar28 + -0x29) = uVar5;
      *(undefined8 *)(lVar28 + -0x21) = uVar6;
      *(undefined8 *)(lVar28 + -0x19) = uVar7;
      *(undefined8 *)(lVar28 + -0x11) = uVar8;
      *(undefined8 *)(lVar28 + -9) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x4a:
      uVar10 = *(undefined8 *)(lVar24 + -0x42);
      uVar11 = *(undefined8 *)(lVar24 + -0x3a);
      uVar12 = *(undefined8 *)(lVar24 + -0x32);
      uVar5 = *(undefined8 *)(lVar24 + -0x2a);
      uVar6 = *(undefined8 *)(lVar24 + -0x22);
      uVar7 = *(undefined8 *)(lVar24 + -0x1a);
      uVar8 = *(undefined8 *)(lVar24 + -0x12);
      uVar9 = *(undefined8 *)(lVar24 + -10);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x4a) = *(undefined8 *)(lVar24 + -0x4a);
      *(undefined8 *)(lVar28 + -0x42) = uVar10;
      *(undefined8 *)(lVar28 + -0x3a) = uVar11;
      *(undefined8 *)(lVar28 + -0x32) = uVar12;
      *(undefined8 *)(lVar28 + -0x2a) = uVar5;
      *(undefined8 *)(lVar28 + -0x22) = uVar6;
      *(undefined8 *)(lVar28 + -0x1a) = uVar7;
      *(undefined8 *)(lVar28 + -0x12) = uVar8;
      *(undefined8 *)(lVar28 + -10) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x4b:
      uVar10 = *(undefined8 *)(lVar24 + -0x43);
      uVar11 = *(undefined8 *)(lVar24 + -0x3b);
      uVar12 = *(undefined8 *)(lVar24 + -0x33);
      uVar5 = *(undefined8 *)(lVar24 + -0x2b);
      uVar6 = *(undefined8 *)(lVar24 + -0x23);
      uVar7 = *(undefined8 *)(lVar24 + -0x1b);
      uVar8 = *(undefined8 *)(lVar24 + -0x13);
      uVar9 = *(undefined8 *)(lVar24 + -0xb);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x4b) = *(undefined8 *)(lVar24 + -0x4b);
      *(undefined8 *)(lVar28 + -0x43) = uVar10;
      *(undefined8 *)(lVar28 + -0x3b) = uVar11;
      *(undefined8 *)(lVar28 + -0x33) = uVar12;
      *(undefined8 *)(lVar28 + -0x2b) = uVar5;
      *(undefined8 *)(lVar28 + -0x23) = uVar6;
      *(undefined8 *)(lVar28 + -0x1b) = uVar7;
      *(undefined8 *)(lVar28 + -0x13) = uVar8;
      *(undefined8 *)(lVar28 + -0xb) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x4c:
      uVar10 = *(undefined8 *)(lVar24 + -0x44);
      uVar11 = *(undefined8 *)(lVar24 + -0x3c);
      uVar12 = *(undefined8 *)(lVar24 + -0x34);
      uVar5 = *(undefined8 *)(lVar24 + -0x2c);
      uVar6 = *(undefined8 *)(lVar24 + -0x24);
      uVar7 = *(undefined8 *)(lVar24 + -0x1c);
      uVar8 = *(undefined8 *)(lVar24 + -0x14);
      uVar9 = *(undefined8 *)(lVar24 + -0xc);
      uVar4 = *(undefined4 *)(lVar24 + -4);
      *(undefined8 *)(lVar28 + -0x4c) = *(undefined8 *)(lVar24 + -0x4c);
      *(undefined8 *)(lVar28 + -0x44) = uVar10;
      *(undefined8 *)(lVar28 + -0x3c) = uVar11;
      *(undefined8 *)(lVar28 + -0x34) = uVar12;
      *(undefined8 *)(lVar28 + -0x2c) = uVar5;
      *(undefined8 *)(lVar28 + -0x24) = uVar6;
      *(undefined8 *)(lVar28 + -0x1c) = uVar7;
      *(undefined8 *)(lVar28 + -0x14) = uVar8;
      *(undefined8 *)(lVar28 + -0xc) = uVar9;
      *(undefined4 *)(lVar28 + -4) = uVar4;
      return pcVar20;
    case (uint *)0x4d:
      uVar11 = *(undefined8 *)(lVar24 + -0x45);
      uVar12 = *(undefined8 *)(lVar24 + -0x3d);
      uVar13 = *(undefined8 *)(lVar24 + -0x35);
      uVar5 = *(undefined8 *)(lVar24 + -0x2d);
      uVar6 = *(undefined8 *)(lVar24 + -0x25);
      uVar7 = *(undefined8 *)(lVar24 + -0x1d);
      uVar8 = *(undefined8 *)(lVar24 + -0x15);
      uVar9 = *(undefined8 *)(lVar24 + -0xd);
      uVar10 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x4d) = *(undefined8 *)(lVar24 + -0x4d);
      *(undefined8 *)(lVar28 + -0x45) = uVar11;
      *(undefined8 *)(lVar28 + -0x3d) = uVar12;
      *(undefined8 *)(lVar28 + -0x35) = uVar13;
      *(undefined8 *)(lVar28 + -0x2d) = uVar5;
      *(undefined8 *)(lVar28 + -0x25) = uVar6;
      *(undefined8 *)(lVar28 + -0x1d) = uVar7;
      *(undefined8 *)(lVar28 + -0x15) = uVar8;
      *(undefined8 *)(lVar28 + -0xd) = uVar9;
      *(undefined8 *)(lVar28 + -8) = uVar10;
      return pcVar20;
    case (uint *)0x4e:
      uVar11 = *(undefined8 *)(lVar24 + -0x46);
      uVar12 = *(undefined8 *)(lVar24 + -0x3e);
      uVar13 = *(undefined8 *)(lVar24 + -0x36);
      uVar5 = *(undefined8 *)(lVar24 + -0x2e);
      uVar6 = *(undefined8 *)(lVar24 + -0x26);
      uVar7 = *(undefined8 *)(lVar24 + -0x1e);
      uVar8 = *(undefined8 *)(lVar24 + -0x16);
      uVar9 = *(undefined8 *)(lVar24 + -0xe);
      uVar10 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x4e) = *(undefined8 *)(lVar24 + -0x4e);
      *(undefined8 *)(lVar28 + -0x46) = uVar11;
      *(undefined8 *)(lVar28 + -0x3e) = uVar12;
      *(undefined8 *)(lVar28 + -0x36) = uVar13;
      *(undefined8 *)(lVar28 + -0x2e) = uVar5;
      *(undefined8 *)(lVar28 + -0x26) = uVar6;
      *(undefined8 *)(lVar28 + -0x1e) = uVar7;
      *(undefined8 *)(lVar28 + -0x16) = uVar8;
      *(undefined8 *)(lVar28 + -0xe) = uVar9;
      *(undefined8 *)(lVar28 + -8) = uVar10;
      return pcVar20;
    case (uint *)0x4f:
      uVar11 = *(undefined8 *)(lVar24 + -0x47);
      uVar12 = *(undefined8 *)(lVar24 + -0x3f);
      uVar13 = *(undefined8 *)(lVar24 + -0x37);
      uVar5 = *(undefined8 *)(lVar24 + -0x2f);
      uVar6 = *(undefined8 *)(lVar24 + -0x27);
      uVar7 = *(undefined8 *)(lVar24 + -0x1f);
      uVar8 = *(undefined8 *)(lVar24 + -0x17);
      uVar9 = *(undefined8 *)(lVar24 + -0xf);
      uVar10 = *(undefined8 *)(lVar24 + -8);
      *(undefined8 *)(lVar28 + -0x4f) = *(undefined8 *)(lVar24 + -0x4f);
      *(undefined8 *)(lVar28 + -0x47) = uVar11;
      *(undefined8 *)(lVar28 + -0x3f) = uVar12;
      *(undefined8 *)(lVar28 + -0x37) = uVar13;
      *(undefined8 *)(lVar28 + -0x2f) = uVar5;
      *(undefined8 *)(lVar28 + -0x27) = uVar6;
      *(undefined8 *)(lVar28 + -0x1f) = uVar7;
      *(undefined8 *)(lVar28 + -0x17) = uVar8;
      *(undefined8 *)(lVar28 + -0xf) = uVar9;
      *(undefined8 *)(lVar28 + -8) = uVar10;
      return pcVar20;
    }
    return pcVar20;
  }
  if ((char)param_2 <= (char)param_1) {
    uVar5 = *(undefined8 *)((long)(param_2 + -2) + (long)param_3);
    uVar6 = ((undefined8 *)((long)(param_2 + -2) + (long)param_3))[1];
    puVar30 = (undefined8 *)((long)(param_1 + -2) + (long)param_3);
    uVar23 = (long)param_1 + (long)param_3 & 0xf;
    uVar34 = (long)param_1 + (long)param_3 ^ uVar23;
    uVar29 = (long)param_3 - uVar23;
    uVar23 = ((long)param_2 + (long)param_3) - uVar23;
    if (DAT_0093d708 < uVar29) {
      uVar7 = *(undefined8 *)(uVar23 - 0x10);
      uVar8 = *(undefined8 *)(uVar23 - 8);
      *puVar30 = uVar5;
      puVar30[1] = uVar6;
      *(undefined8 *)(uVar34 - 0x10) = uVar7;
      *(undefined8 *)(uVar34 - 8) = uVar8;
      uVar29 = uVar29 - 0x90;
      lVar24 = uVar23 - 0x10;
      lVar28 = uVar34 - 0x10;
      do {
        lVar32 = lVar28;
        lVar27 = lVar24;
        uVar23 = uVar29;
        uVar5 = *(undefined8 *)(lVar27 + -8);
        uVar6 = *(undefined8 *)(lVar27 + -0x20);
        uVar7 = *(undefined8 *)(lVar27 + -0x18);
        uVar8 = *(undefined8 *)(lVar27 + -0x30);
        uVar9 = *(undefined8 *)(lVar27 + -0x28);
        uVar10 = *(undefined8 *)(lVar27 + -0x40);
        uVar11 = *(undefined8 *)(lVar27 + -0x38);
        uVar12 = *(undefined8 *)(lVar27 + -0x50);
        uVar13 = *(undefined8 *)(lVar27 + -0x48);
        uVar14 = *(undefined8 *)(lVar27 + -0x60);
        uVar15 = *(undefined8 *)(lVar27 + -0x58);
        uVar16 = *(undefined8 *)(lVar27 + -0x70);
        uVar17 = *(undefined8 *)(lVar27 + -0x68);
        uVar18 = *(undefined8 *)(lVar27 + -0x80);
        uVar19 = *(undefined8 *)(lVar27 + -0x78);
        lVar24 = lVar27 + -0x80;
        *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar27 + -0x10);
        *(undefined8 *)(lVar32 + -8) = uVar5;
        *(undefined8 *)(lVar32 + -0x20) = uVar6;
        *(undefined8 *)(lVar32 + -0x18) = uVar7;
        *(undefined8 *)(lVar32 + -0x30) = uVar8;
        *(undefined8 *)(lVar32 + -0x28) = uVar9;
        *(undefined8 *)(lVar32 + -0x40) = uVar10;
        *(undefined8 *)(lVar32 + -0x38) = uVar11;
        *(undefined8 *)(lVar32 + -0x50) = uVar12;
        *(undefined8 *)(lVar32 + -0x48) = uVar13;
        *(undefined8 *)(lVar32 + -0x60) = uVar14;
        *(undefined8 *)(lVar32 + -0x58) = uVar15;
        *(undefined8 *)(lVar32 + -0x70) = uVar16;
        *(undefined8 *)(lVar32 + -0x68) = uVar17;
        *(undefined8 *)(lVar32 + -0x80) = uVar18;
        *(undefined8 *)(lVar32 + -0x78) = uVar19;
        lVar28 = lVar32 + -0x80;
        uVar29 = uVar23 - 0x80;
      } while (0x7f < uVar23);
      if (-0x41 < (long)(uVar23 - 0x80)) {
        uVar5 = *(undefined8 *)(lVar27 + -0x88);
        uVar6 = *(undefined8 *)(lVar27 + -0xa0);
        uVar7 = *(undefined8 *)(lVar27 + -0x98);
        uVar8 = *(undefined8 *)(lVar27 + -0xb0);
        uVar9 = *(undefined8 *)(lVar27 + -0xa8);
        uVar10 = *(undefined8 *)(lVar27 + -0xc0);
        uVar11 = *(undefined8 *)(lVar27 + -0xb8);
        lVar24 = lVar27 + -0xc0;
        *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar27 + -0x90);
        *(undefined8 *)(lVar32 + -0x88) = uVar5;
        *(undefined8 *)(lVar32 + -0xa0) = uVar6;
        *(undefined8 *)(lVar32 + -0x98) = uVar7;
        *(undefined8 *)(lVar32 + -0xb0) = uVar8;
        *(undefined8 *)(lVar32 + -0xa8) = uVar9;
        *(undefined8 *)(lVar32 + -0xc0) = uVar10;
        *(undefined8 *)(lVar32 + -0xb8) = uVar11;
        lVar28 = lVar32 + -0xc0;
        uVar23 = uVar23 - 0x40;
      }
                    /* WARNING: Could not recover jumptable at 0x00724c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                  (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar23]))
                                  (lVar28,lVar24,
                                   (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                           (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                      [uVar23]));
      return pcVar20;
    }
    uVar35 = uVar23 & 0xf;
    if (uVar35 != 0) {
      lVar24 = (long)*(int *)(&DAT_0082aff0 + uVar35 * 4);
      switch(uVar35) {
      case 1:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007228db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 2:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 3:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 4:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 5:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 6:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
        break;
      case 7:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007230bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 8:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072320b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 9:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072335b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 10:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007234ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 0xb:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007235fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 0xc:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072374b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 0xd:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072389b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 0xe:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007239eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      case 0xf:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar24);
        if (DAT_0093d718 <= uVar29) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar24 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00723b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      }
                    /* WARNING: Could not recover jumptable at 0x00722f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (uVar34,uVar23,uVar29 - 0x40,DAT_0093d718,puVar30,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    }
    uVar35 = uVar29 - 0x10;
    uVar7 = *(undefined8 *)(uVar23 - 8);
    lVar24 = uVar23 - 0x10;
    *(undefined8 *)(uVar34 - 0x10) = *(undefined8 *)(uVar23 - 0x10);
    *(undefined8 *)(uVar34 - 8) = uVar7;
    lVar28 = uVar34 - 0x10;
    *puVar30 = uVar5;
    puVar30[1] = uVar6;
    if (uVar35 < 0x81) {
      if (0x3f < uVar35) {
        uVar5 = *(undefined8 *)(uVar23 - 0x18);
        uVar6 = *(undefined8 *)(uVar23 - 0x30);
        uVar7 = *(undefined8 *)(uVar23 - 0x28);
        uVar8 = *(undefined8 *)(uVar23 - 0x40);
        uVar9 = *(undefined8 *)(uVar23 - 0x38);
        uVar10 = *(undefined8 *)(uVar23 - 0x50);
        uVar11 = *(undefined8 *)(uVar23 - 0x48);
        *(undefined8 *)(uVar34 - 0x20) = *(undefined8 *)(uVar23 - 0x20);
        *(undefined8 *)(uVar34 - 0x18) = uVar5;
        *(undefined8 *)(uVar34 - 0x30) = uVar6;
        *(undefined8 *)(uVar34 - 0x28) = uVar7;
        *(undefined8 *)(uVar34 - 0x40) = uVar8;
        *(undefined8 *)(uVar34 - 0x38) = uVar9;
        *(undefined8 *)(uVar34 - 0x50) = uVar10;
        *(undefined8 *)(uVar34 - 0x48) = uVar11;
        uVar35 = uVar29 - 0x50;
        lVar24 = uVar23 - 0x50;
        lVar28 = uVar34 - 0x50;
      }
                    /* WARNING: Could not recover jumptable at 0x00722655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                  (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar35]))
                                  (lVar28,lVar24,
                                   (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                           (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                      [uVar35]));
      return pcVar20;
    }
    uVar23 = uVar29 - 0x90;
    if (DAT_0093d718 <= uVar35) {
      do {
        lVar32 = lVar28;
        lVar27 = lVar24;
        uVar29 = uVar23;
        uVar5 = *(undefined8 *)(lVar27 + -8);
        uVar6 = *(undefined8 *)(lVar27 + -0x20);
        uVar7 = *(undefined8 *)(lVar27 + -0x18);
        uVar8 = *(undefined8 *)(lVar27 + -0x30);
        uVar9 = *(undefined8 *)(lVar27 + -0x28);
        uVar10 = *(undefined8 *)(lVar27 + -0x40);
        uVar11 = *(undefined8 *)(lVar27 + -0x38);
        uVar12 = *(undefined8 *)(lVar27 + -0x50);
        uVar13 = *(undefined8 *)(lVar27 + -0x48);
        uVar14 = *(undefined8 *)(lVar27 + -0x60);
        uVar15 = *(undefined8 *)(lVar27 + -0x58);
        uVar16 = *(undefined8 *)(lVar27 + -0x70);
        uVar17 = *(undefined8 *)(lVar27 + -0x68);
        uVar18 = *(undefined8 *)(lVar27 + -0x80);
        uVar19 = *(undefined8 *)(lVar27 + -0x78);
        lVar24 = lVar27 + -0x80;
        *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar27 + -0x10);
        *(undefined8 *)(lVar32 + -8) = uVar5;
        *(undefined8 *)(lVar32 + -0x20) = uVar6;
        *(undefined8 *)(lVar32 + -0x18) = uVar7;
        *(undefined8 *)(lVar32 + -0x30) = uVar8;
        *(undefined8 *)(lVar32 + -0x28) = uVar9;
        *(undefined8 *)(lVar32 + -0x40) = uVar10;
        *(undefined8 *)(lVar32 + -0x38) = uVar11;
        *(undefined8 *)(lVar32 + -0x50) = uVar12;
        *(undefined8 *)(lVar32 + -0x48) = uVar13;
        *(undefined8 *)(lVar32 + -0x60) = uVar14;
        *(undefined8 *)(lVar32 + -0x58) = uVar15;
        *(undefined8 *)(lVar32 + -0x70) = uVar16;
        *(undefined8 *)(lVar32 + -0x68) = uVar17;
        *(undefined8 *)(lVar32 + -0x80) = uVar18;
        *(undefined8 *)(lVar32 + -0x78) = uVar19;
        lVar28 = lVar32 + -0x80;
        uVar23 = uVar29 - 0x80;
      } while (0x7f < uVar29);
      if (-0x41 < (long)(uVar29 - 0x80)) {
        uVar5 = *(undefined8 *)(lVar27 + -0x88);
        uVar29 = uVar29 - 0x40;
        uVar6 = *(undefined8 *)(lVar27 + -0xa0);
        uVar7 = *(undefined8 *)(lVar27 + -0x98);
        *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar27 + -0x90);
        *(undefined8 *)(lVar32 + -0x88) = uVar5;
        *(undefined8 *)(lVar32 + -0xa0) = uVar6;
        *(undefined8 *)(lVar32 + -0x98) = uVar7;
        uVar5 = *(undefined8 *)(lVar27 + -0xa8);
        uVar6 = *(undefined8 *)(lVar27 + -0xc0);
        uVar7 = *(undefined8 *)(lVar27 + -0xb8);
        lVar24 = lVar27 + -0xc0;
        *(undefined8 *)(lVar32 + -0xb0) = *(undefined8 *)(lVar27 + -0xb0);
        *(undefined8 *)(lVar32 + -0xa8) = uVar5;
        *(undefined8 *)(lVar32 + -0xc0) = uVar6;
        *(undefined8 *)(lVar32 + -0xb8) = uVar7;
        lVar28 = lVar32 + -0xc0;
      }
      if (0x1f < uVar29) {
        puVar30 = (undefined8 *)(lVar24 + -0x10);
        uVar5 = *(undefined8 *)(lVar24 + -8);
        uVar29 = uVar29 - 0x20;
        uVar6 = *(undefined8 *)(lVar24 + -0x20);
        uVar7 = *(undefined8 *)(lVar24 + -0x18);
        lVar24 = lVar24 + -0x20;
        *(undefined8 *)(lVar28 + -0x10) = *puVar30;
        *(undefined8 *)(lVar28 + -8) = uVar5;
        *(undefined8 *)(lVar28 + -0x20) = uVar6;
        *(undefined8 *)(lVar28 + -0x18) = uVar7;
        lVar28 = lVar28 + -0x20;
      }
                    /* WARNING: Could not recover jumptable at 0x00722805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                  (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar29]))
                                  (lVar28,lVar24,
                                   (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                           (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                      [uVar29]));
      return pcVar20;
    }
    do {
      lVar32 = lVar28;
      lVar27 = lVar24;
      uVar29 = uVar23;
      uVar5 = *(undefined8 *)(lVar27 + -8);
      uVar6 = *(undefined8 *)(lVar27 + -0x20);
      uVar7 = *(undefined8 *)(lVar27 + -0x18);
      uVar8 = *(undefined8 *)(lVar27 + -0x30);
      uVar9 = *(undefined8 *)(lVar27 + -0x28);
      uVar10 = *(undefined8 *)(lVar27 + -0x40);
      uVar11 = *(undefined8 *)(lVar27 + -0x38);
      *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar27 + -0x10);
      *(undefined8 *)(lVar32 + -8) = uVar5;
      *(undefined8 *)(lVar32 + -0x20) = uVar6;
      *(undefined8 *)(lVar32 + -0x18) = uVar7;
      *(undefined8 *)(lVar32 + -0x30) = uVar8;
      *(undefined8 *)(lVar32 + -0x28) = uVar9;
      *(undefined8 *)(lVar32 + -0x40) = uVar10;
      *(undefined8 *)(lVar32 + -0x38) = uVar11;
      uVar5 = *(undefined8 *)(lVar27 + -0x48);
      uVar6 = *(undefined8 *)(lVar27 + -0x60);
      uVar7 = *(undefined8 *)(lVar27 + -0x58);
      uVar8 = *(undefined8 *)(lVar27 + -0x70);
      uVar9 = *(undefined8 *)(lVar27 + -0x68);
      uVar10 = *(undefined8 *)(lVar27 + -0x80);
      uVar11 = *(undefined8 *)(lVar27 + -0x78);
      lVar24 = lVar27 + -0x80;
      *(undefined8 *)(lVar32 + -0x50) = *(undefined8 *)(lVar27 + -0x50);
      *(undefined8 *)(lVar32 + -0x48) = uVar5;
      *(undefined8 *)(lVar32 + -0x60) = uVar6;
      *(undefined8 *)(lVar32 + -0x58) = uVar7;
      *(undefined8 *)(lVar32 + -0x70) = uVar8;
      *(undefined8 *)(lVar32 + -0x68) = uVar9;
      *(undefined8 *)(lVar32 + -0x80) = uVar10;
      *(undefined8 *)(lVar32 + -0x78) = uVar11;
      lVar28 = lVar32 + -0x80;
      uVar23 = uVar29 - 0x80;
    } while (0x7f < uVar29);
    if (-0x41 < (long)(uVar29 - 0x80)) {
      uVar5 = *(undefined8 *)(lVar27 + -0x88);
      uVar29 = uVar29 - 0x40;
      uVar6 = *(undefined8 *)(lVar27 + -0xa0);
      uVar7 = *(undefined8 *)(lVar27 + -0x98);
      *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar27 + -0x90);
      *(undefined8 *)(lVar32 + -0x88) = uVar5;
      *(undefined8 *)(lVar32 + -0xa0) = uVar6;
      *(undefined8 *)(lVar32 + -0x98) = uVar7;
      uVar5 = *(undefined8 *)(lVar27 + -0xa8);
      uVar6 = *(undefined8 *)(lVar27 + -0xc0);
      uVar7 = *(undefined8 *)(lVar27 + -0xb8);
      lVar24 = lVar27 + -0xc0;
      *(undefined8 *)(lVar32 + -0xb0) = *(undefined8 *)(lVar27 + -0xb0);
      *(undefined8 *)(lVar32 + -0xa8) = uVar5;
      *(undefined8 *)(lVar32 + -0xc0) = uVar6;
      *(undefined8 *)(lVar32 + -0xb8) = uVar7;
      lVar28 = lVar32 + -0xc0;
    }
                    /* WARNING: Could not recover jumptable at 0x00722714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar29]))
                                (lVar28,lVar24,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar29]));
    return pcVar20;
  }
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar29 = (ulong)param_1 & 0xfffffffffffffff0;
  puVar30 = (undefined8 *)(uVar29 + 0x10);
  uVar23 = (long)param_3 + ((long)param_1 - (long)puVar30);
  param_2 = (undefined8 *)((long)param_2 - ((long)param_1 - (long)puVar30));
  if (DAT_0093d708 < uVar23) {
    uVar7 = *param_2;
    uVar8 = param_2[1];
    *param_1 = uVar5;
    param_1[1] = uVar6;
    *puVar30 = uVar7;
    *(undefined8 *)(uVar29 + 0x18) = uVar8;
    uVar23 = uVar23 - 0x90;
    puVar30 = param_2 + 2;
    puVar26 = (undefined8 *)(uVar29 + 0x20);
    do {
      puVar31 = puVar26;
      puVar25 = puVar30;
      uVar29 = uVar23;
      uVar5 = puVar25[1];
      uVar6 = puVar25[2];
      uVar7 = puVar25[3];
      uVar8 = puVar25[4];
      uVar9 = puVar25[5];
      uVar10 = puVar25[6];
      uVar11 = puVar25[7];
      uVar12 = puVar25[8];
      uVar13 = puVar25[9];
      uVar14 = puVar25[10];
      uVar15 = puVar25[0xb];
      uVar16 = puVar25[0xc];
      uVar17 = puVar25[0xd];
      uVar18 = puVar25[0xe];
      uVar19 = puVar25[0xf];
      puVar30 = puVar25 + 0x10;
      *puVar31 = *puVar25;
      puVar31[1] = uVar5;
      puVar31[2] = uVar6;
      puVar31[3] = uVar7;
      puVar31[4] = uVar8;
      puVar31[5] = uVar9;
      puVar31[6] = uVar10;
      puVar31[7] = uVar11;
      puVar31[8] = uVar12;
      puVar31[9] = uVar13;
      puVar31[10] = uVar14;
      puVar31[0xb] = uVar15;
      puVar31[0xc] = uVar16;
      puVar31[0xd] = uVar17;
      puVar31[0xe] = uVar18;
      puVar31[0xf] = uVar19;
      puVar26 = puVar31 + 0x10;
      uVar23 = uVar29 - 0x80;
    } while (0x7f < uVar29);
    if (-0x41 < (long)(uVar29 - 0x80)) {
      uVar5 = *puVar30;
      uVar6 = puVar25[0x11];
      uVar7 = puVar25[0x12];
      uVar8 = puVar25[0x13];
      uVar9 = puVar25[0x14];
      uVar10 = puVar25[0x15];
      uVar11 = puVar25[0x16];
      uVar12 = puVar25[0x17];
      puVar30 = puVar25 + 0x18;
      *puVar26 = uVar5;
      puVar31[0x11] = uVar6;
      puVar31[0x12] = uVar7;
      puVar31[0x13] = uVar8;
      puVar31[0x14] = uVar9;
      puVar31[0x15] = uVar10;
      puVar31[0x16] = uVar11;
      puVar31[0x17] = uVar12;
      puVar26 = puVar31 + 0x18;
      uVar29 = uVar29 - 0x40;
    }
                    /* WARNING: Could not recover jumptable at 0x00724bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar29]))
                                ((long)puVar26 + uVar29,(long)puVar30 + uVar29,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar29]));
    return pcVar20;
  }
  uVar34 = (ulong)param_2 & 0xf;
  if (uVar34 != 0) {
    lVar24 = (long)*(int *)(&DAT_0082afb0 + uVar34 * 4);
    switch(uVar34) {
    case 1:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072282b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 2:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072297b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 3:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00722acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 4:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
      break;
    case 5:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00722d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 6:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00722ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 7:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072300b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 8:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd4 + lVar24 + 2);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afcc + lVar24 + 3);
      }
                    /* WARNING: Could not recover jumptable at 0x0072315b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 9:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007232ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 10:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007233fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xb:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072354b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xc:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072369b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xd:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007237eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xe:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072393b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xf:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar24);
      if (DAT_0093d718 <= uVar23) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar24 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00723a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    }
                    /* WARNING: Could not recover jumptable at 0x00722c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                (puVar30,param_2,uVar23 - 0x40,DAT_0093d718,param_1,
                                 UNRECOVERED_JUMPTABLE_00);
    return pcVar20;
  }
  uVar34 = uVar23 - 0x10;
  uVar7 = param_2[1];
  puVar26 = param_2 + 2;
  *puVar30 = *param_2;
  *(undefined8 *)(uVar29 + 0x18) = uVar7;
  puVar30 = (undefined8 *)(uVar29 + 0x20);
  *param_1 = uVar5;
  param_1[1] = uVar6;
  if (uVar34 < 0x81) {
    if (0x3f < uVar34) {
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      uVar10 = param_2[8];
      uVar11 = param_2[9];
      *puVar30 = *puVar26;
      *(undefined8 *)(uVar29 + 0x28) = uVar5;
      *(undefined8 *)(uVar29 + 0x30) = uVar6;
      *(undefined8 *)(uVar29 + 0x38) = uVar7;
      *(undefined8 *)(uVar29 + 0x40) = uVar8;
      *(undefined8 *)(uVar29 + 0x48) = uVar9;
      *(undefined8 *)(uVar29 + 0x50) = uVar10;
      *(undefined8 *)(uVar29 + 0x58) = uVar11;
      uVar34 = uVar23 - 0x50;
      puVar26 = param_2 + 10;
      puVar30 = (undefined8 *)(uVar29 + 0x60);
    }
                    /* WARNING: Could not recover jumptable at 0x00722427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar34]))
                                ((long)puVar30 + uVar34,(long)puVar26 + uVar34,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar34]));
    return pcVar20;
  }
  uVar29 = uVar23 - 0x90;
  uVar23 = uVar23 - 0x90;
  if (DAT_0093d718 <= uVar34) {
    do {
      puVar31 = puVar30;
      puVar25 = puVar26;
      uVar23 = uVar29;
      uVar5 = puVar25[1];
      uVar6 = puVar25[2];
      uVar7 = puVar25[3];
      uVar8 = puVar25[4];
      uVar9 = puVar25[5];
      uVar10 = puVar25[6];
      uVar11 = puVar25[7];
      uVar12 = puVar25[8];
      uVar13 = puVar25[9];
      uVar14 = puVar25[10];
      uVar15 = puVar25[0xb];
      uVar16 = puVar25[0xc];
      uVar17 = puVar25[0xd];
      uVar18 = puVar25[0xe];
      uVar19 = puVar25[0xf];
      puVar26 = puVar25 + 0x10;
      *puVar31 = *puVar25;
      puVar31[1] = uVar5;
      puVar31[2] = uVar6;
      puVar31[3] = uVar7;
      puVar31[4] = uVar8;
      puVar31[5] = uVar9;
      puVar31[6] = uVar10;
      puVar31[7] = uVar11;
      puVar31[8] = uVar12;
      puVar31[9] = uVar13;
      puVar31[10] = uVar14;
      puVar31[0xb] = uVar15;
      puVar31[0xc] = uVar16;
      puVar31[0xd] = uVar17;
      puVar31[0xe] = uVar18;
      puVar31[0xf] = uVar19;
      puVar30 = puVar31 + 0x10;
      uVar29 = uVar23 - 0x80;
    } while (0x7f < uVar23);
    if (-0x41 < (long)(uVar23 - 0x80)) {
      uVar5 = puVar25[0x11];
      uVar23 = uVar23 - 0x40;
      uVar6 = puVar25[0x12];
      uVar7 = puVar25[0x13];
      *puVar30 = *puVar26;
      puVar31[0x11] = uVar5;
      puVar31[0x12] = uVar6;
      puVar31[0x13] = uVar7;
      uVar5 = puVar25[0x15];
      uVar6 = puVar25[0x16];
      uVar7 = puVar25[0x17];
      puVar26 = puVar25 + 0x18;
      puVar31[0x14] = puVar25[0x14];
      puVar31[0x15] = uVar5;
      puVar31[0x16] = uVar6;
      puVar31[0x17] = uVar7;
      puVar30 = puVar31 + 0x18;
    }
    if (0x1f < uVar23) {
      uVar5 = *puVar26;
      uVar6 = puVar26[1];
      uVar23 = uVar23 - 0x20;
      uVar7 = puVar26[2];
      uVar8 = puVar26[3];
      puVar26 = puVar26 + 4;
      *puVar30 = uVar5;
      puVar30[1] = uVar6;
      puVar30[2] = uVar7;
      puVar30[3] = uVar8;
      puVar30 = puVar30 + 4;
    }
                    /* WARNING: Could not recover jumptable at 0x007225eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar23]))
                                ((long)puVar30 + uVar23,(long)puVar26 + uVar23,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar23]));
    return pcVar20;
  }
  do {
    puVar31 = puVar30;
    puVar25 = puVar26;
    uVar29 = uVar23;
    uVar5 = puVar25[1];
    uVar6 = puVar25[2];
    uVar7 = puVar25[3];
    uVar8 = puVar25[4];
    uVar9 = puVar25[5];
    uVar10 = puVar25[6];
    uVar11 = puVar25[7];
    *puVar31 = *puVar25;
    puVar31[1] = uVar5;
    puVar31[2] = uVar6;
    puVar31[3] = uVar7;
    puVar31[4] = uVar8;
    puVar31[5] = uVar9;
    puVar31[6] = uVar10;
    puVar31[7] = uVar11;
    uVar5 = puVar25[9];
    uVar6 = puVar25[10];
    uVar7 = puVar25[0xb];
    uVar8 = puVar25[0xc];
    uVar9 = puVar25[0xd];
    uVar10 = puVar25[0xe];
    uVar11 = puVar25[0xf];
    puVar26 = puVar25 + 0x10;
    puVar31[8] = puVar25[8];
    puVar31[9] = uVar5;
    puVar31[10] = uVar6;
    puVar31[0xb] = uVar7;
    puVar31[0xc] = uVar8;
    puVar31[0xd] = uVar9;
    puVar31[0xe] = uVar10;
    puVar31[0xf] = uVar11;
    puVar30 = puVar31 + 0x10;
    uVar23 = uVar29 - 0x80;
  } while (0x7f < uVar29);
  if (-0x41 < (long)(uVar29 - 0x80)) {
    uVar5 = puVar25[0x11];
    uVar29 = uVar29 - 0x40;
    uVar6 = puVar25[0x12];
    uVar7 = puVar25[0x13];
    *puVar30 = *puVar26;
    puVar31[0x11] = uVar5;
    puVar31[0x12] = uVar6;
    puVar31[0x13] = uVar7;
    uVar5 = puVar25[0x15];
    uVar6 = puVar25[0x16];
    uVar7 = puVar25[0x17];
    puVar26 = puVar25 + 0x18;
    puVar31[0x14] = puVar25[0x14];
    puVar31[0x15] = uVar5;
    puVar31[0x16] = uVar6;
    puVar31[0x17] = uVar7;
    puVar30 = puVar31 + 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x007224ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar20 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                              (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar29]))
                              ((long)puVar30 + uVar29,(long)puVar26 + uVar29,
                               (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                       (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar29])
                              );
  return pcVar20;
}

