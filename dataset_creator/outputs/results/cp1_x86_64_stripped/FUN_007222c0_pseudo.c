
char * FUN_007222c0(char *param_1,undefined8 *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  char cVar2;
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
  int extraout_EDX;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  char *pcVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  ulong uVar35;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcVar36;
  long in_FS_OFFSET;
  
  if (param_4 < param_3) {
    pcVar27 = "buffer overflow detected";
    FUN_00771f80();
    if (extraout_EDX < 1) {
      pcVar36 = (char *)0x0;
    }
    else {
      uVar20 = *param_4;
      if ((uVar20 & 0x8000) == 0) {
        lVar23 = *(long *)(in_FS_OFFSET + 0x10);
        piVar33 = *(int **)(param_4 + 0x22);
        if (*(long *)(piVar33 + 2) != lVar23) {
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
          uVar20 = *param_4;
          *(long *)(piVar33 + 2) = lVar23;
        }
        piVar33[1] = piVar33[1] + 1;
      }
      *param_4 = uVar20 & 0xffffffdf;
      puVar29 = (undefined8 *)((long)extraout_EDX + -1);
      if (param_2 < (undefined8 *)((long)extraout_EDX + -1)) {
        puVar29 = param_2;
      }
      puVar29 = (undefined8 *)FUN_006fe490(param_4,pcVar27,puVar29,10,1);
      uVar21 = *param_4;
      if (puVar29 == (undefined8 *)0x0) {
        pcVar36 = (char *)0x0;
      }
      else if (((uVar21 & 0x20) == 0) ||
              (pcVar36 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
        if (param_2 <= puVar29) {
                    /* WARNING: Subroutine does not return */
          FUN_00771d30();
        }
        pcVar27[(long)puVar29] = '\0';
        uVar21 = *param_4;
        pcVar36 = pcVar27;
      }
      *param_4 = uVar20 & 0x20 | uVar21;
      if ((uVar21 & 0x8000) == 0) {
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
  if (param_3 < (uint *)0x50) {
    lVar23 = (long)param_2 + (long)param_3;
    pcVar27 = param_1 + (long)param_3;
    switch(param_3) {
    case (uint *)0x1:
      pcVar27[-1] = *(char *)(lVar23 + -1);
      return param_1;
    case (uint *)0x2:
      *(undefined2 *)(pcVar27 + -2) = *(undefined2 *)(lVar23 + -2);
      return param_1;
    case (uint *)0x3:
      uVar3 = *(undefined2 *)(lVar23 + -2);
      *(undefined2 *)(pcVar27 + -3) = *(undefined2 *)(lVar23 + -3);
      *(undefined2 *)(pcVar27 + -2) = uVar3;
      return param_1;
    case (uint *)0x4:
      *(undefined4 *)(pcVar27 + -4) = *(undefined4 *)(lVar23 + -4);
      return param_1;
    case (uint *)0x5:
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined4 *)(pcVar27 + -5) = *(undefined4 *)(lVar23 + -5);
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x6:
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined4 *)(pcVar27 + -6) = *(undefined4 *)(lVar23 + -6);
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x7:
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined4 *)(pcVar27 + -7) = *(undefined4 *)(lVar23 + -7);
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x8:
      *(undefined8 *)(pcVar27 + -8) = *(undefined8 *)(lVar23 + -8);
      break;
    case (uint *)0x9:
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -9) = *(undefined8 *)(lVar23 + -9);
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0xa:
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -10) = *(undefined8 *)(lVar23 + -10);
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0xb:
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0xb) = *(undefined8 *)(lVar23 + -0xb);
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0xc:
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0xc) = *(undefined8 *)(lVar23 + -0xc);
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0xd:
      uVar5 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0xd) = *(undefined8 *)(lVar23 + -0xd);
      *(undefined8 *)(pcVar27 + -8) = uVar5;
      return param_1;
    case (uint *)0xe:
      uVar5 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0xe) = *(undefined8 *)(lVar23 + -0xe);
      *(undefined8 *)(pcVar27 + -8) = uVar5;
      return param_1;
    case (uint *)0xf:
      uVar5 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0xf) = *(undefined8 *)(lVar23 + -0xf);
      *(undefined8 *)(pcVar27 + -8) = uVar5;
      return param_1;
    case (uint *)0x10:
      uVar5 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x10) = *(undefined8 *)(lVar23 + -0x10);
      *(undefined8 *)(pcVar27 + -8) = uVar5;
      return param_1;
    case (uint *)0x11:
      uVar5 = *(undefined8 *)(lVar23 + -9);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x11) = *(undefined8 *)(lVar23 + -0x11);
      *(undefined8 *)(pcVar27 + -9) = uVar5;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x12:
      uVar5 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x12) = *(undefined8 *)(lVar23 + -0x12);
      *(undefined8 *)(pcVar27 + -10) = uVar5;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x13:
      uVar5 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x13) = *(undefined8 *)(lVar23 + -0x13);
      *(undefined8 *)(pcVar27 + -0xb) = uVar5;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x14:
      uVar5 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x14) = *(undefined8 *)(lVar23 + -0x14);
      *(undefined8 *)(pcVar27 + -0xc) = uVar5;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x15:
      uVar5 = *(undefined8 *)(lVar23 + -0xd);
      uVar6 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x15) = *(undefined8 *)(lVar23 + -0x15);
      *(undefined8 *)(pcVar27 + -0xd) = uVar5;
      *(undefined8 *)(pcVar27 + -8) = uVar6;
      return param_1;
    case (uint *)0x16:
      uVar5 = *(undefined8 *)(lVar23 + -0xe);
      uVar6 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x16) = *(undefined8 *)(lVar23 + -0x16);
      *(undefined8 *)(pcVar27 + -0xe) = uVar5;
      *(undefined8 *)(pcVar27 + -8) = uVar6;
      return param_1;
    case (uint *)0x17:
      uVar5 = *(undefined8 *)(lVar23 + -0xf);
      uVar6 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x17) = *(undefined8 *)(lVar23 + -0x17);
      *(undefined8 *)(pcVar27 + -0xf) = uVar5;
      *(undefined8 *)(pcVar27 + -8) = uVar6;
      return param_1;
    case (uint *)0x18:
      uVar5 = *(undefined8 *)(lVar23 + -0x10);
      uVar6 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x18) = *(undefined8 *)(lVar23 + -0x18);
      *(undefined8 *)(pcVar27 + -0x10) = uVar5;
      *(undefined8 *)(pcVar27 + -8) = uVar6;
      return param_1;
    case (uint *)0x19:
      uVar5 = *(undefined8 *)(lVar23 + -0x11);
      uVar6 = *(undefined8 *)(lVar23 + -9);
      cVar2 = *(char *)(lVar23 + -1);
      *(undefined8 *)(pcVar27 + -0x19) = *(undefined8 *)(lVar23 + -0x19);
      *(undefined8 *)(pcVar27 + -0x11) = uVar5;
      *(undefined8 *)(pcVar27 + -9) = uVar6;
      pcVar27[-1] = cVar2;
      return param_1;
    case (uint *)0x1a:
      uVar5 = *(undefined8 *)(lVar23 + -0x12);
      uVar6 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x1a) = *(undefined8 *)(lVar23 + -0x1a);
      *(undefined8 *)(pcVar27 + -0x12) = uVar5;
      *(undefined8 *)(pcVar27 + -10) = uVar6;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x1b:
      uVar5 = *(undefined8 *)(lVar23 + -0x13);
      uVar6 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x1b) = *(undefined8 *)(lVar23 + -0x1b);
      *(undefined8 *)(pcVar27 + -0x13) = uVar5;
      *(undefined8 *)(pcVar27 + -0xb) = uVar6;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x1c:
      uVar5 = *(undefined8 *)(lVar23 + -0x14);
      uVar6 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x1c) = *(undefined8 *)(lVar23 + -0x1c);
      *(undefined8 *)(pcVar27 + -0x14) = uVar5;
      *(undefined8 *)(pcVar27 + -0xc) = uVar6;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x1d:
      uVar5 = *(undefined8 *)(lVar23 + -0x15);
      uVar6 = *(undefined8 *)(lVar23 + -0xd);
      uVar7 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x1d) = *(undefined8 *)(lVar23 + -0x1d);
      *(undefined8 *)(pcVar27 + -0x15) = uVar5;
      *(undefined8 *)(pcVar27 + -0xd) = uVar6;
      *(undefined8 *)(pcVar27 + -8) = uVar7;
      return param_1;
    case (uint *)0x1e:
      uVar5 = *(undefined8 *)(lVar23 + -0x16);
      uVar6 = *(undefined8 *)(lVar23 + -0xe);
      uVar7 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x1e) = *(undefined8 *)(lVar23 + -0x1e);
      *(undefined8 *)(pcVar27 + -0x16) = uVar5;
      *(undefined8 *)(pcVar27 + -0xe) = uVar6;
      *(undefined8 *)(pcVar27 + -8) = uVar7;
      return param_1;
    case (uint *)0x1f:
      uVar5 = *(undefined8 *)(lVar23 + -0x17);
      uVar6 = *(undefined8 *)(lVar23 + -0xf);
      uVar7 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x1f) = *(undefined8 *)(lVar23 + -0x1f);
      *(undefined8 *)(pcVar27 + -0x17) = uVar5;
      *(undefined8 *)(pcVar27 + -0xf) = uVar6;
      *(undefined8 *)(pcVar27 + -8) = uVar7;
      return param_1;
    case (uint *)0x20:
      uVar5 = *(undefined8 *)(lVar23 + -0x18);
      uVar6 = *(undefined8 *)(lVar23 + -0x10);
      uVar7 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x20) = *(undefined8 *)(lVar23 + -0x20);
      *(undefined8 *)(pcVar27 + -0x18) = uVar5;
      *(undefined8 *)(pcVar27 + -0x10) = uVar6;
      *(undefined8 *)(pcVar27 + -8) = uVar7;
      return param_1;
    case (uint *)0x21:
      uVar5 = *(undefined8 *)(lVar23 + -0x19);
      uVar6 = *(undefined8 *)(lVar23 + -0x11);
      uVar7 = *(undefined8 *)(lVar23 + -9);
      cVar2 = *(char *)(lVar23 + -1);
      *(undefined8 *)(pcVar27 + -0x21) = *(undefined8 *)(lVar23 + -0x21);
      *(undefined8 *)(pcVar27 + -0x19) = uVar5;
      *(undefined8 *)(pcVar27 + -0x11) = uVar6;
      *(undefined8 *)(pcVar27 + -9) = uVar7;
      pcVar27[-1] = cVar2;
      return param_1;
    case (uint *)0x22:
      uVar5 = *(undefined8 *)(lVar23 + -0x1a);
      uVar6 = *(undefined8 *)(lVar23 + -0x12);
      uVar7 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x22) = *(undefined8 *)(lVar23 + -0x22);
      *(undefined8 *)(pcVar27 + -0x1a) = uVar5;
      *(undefined8 *)(pcVar27 + -0x12) = uVar6;
      *(undefined8 *)(pcVar27 + -10) = uVar7;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x23:
      uVar5 = *(undefined8 *)(lVar23 + -0x1b);
      uVar6 = *(undefined8 *)(lVar23 + -0x13);
      uVar7 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x23) = *(undefined8 *)(lVar23 + -0x23);
      *(undefined8 *)(pcVar27 + -0x1b) = uVar5;
      *(undefined8 *)(pcVar27 + -0x13) = uVar6;
      *(undefined8 *)(pcVar27 + -0xb) = uVar7;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x24:
      uVar5 = *(undefined8 *)(lVar23 + -0x1c);
      uVar6 = *(undefined8 *)(lVar23 + -0x14);
      uVar7 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x24) = *(undefined8 *)(lVar23 + -0x24);
      *(undefined8 *)(pcVar27 + -0x1c) = uVar5;
      *(undefined8 *)(pcVar27 + -0x14) = uVar6;
      *(undefined8 *)(pcVar27 + -0xc) = uVar7;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x25:
      uVar5 = *(undefined8 *)(lVar23 + -0x1d);
      uVar6 = *(undefined8 *)(lVar23 + -0x15);
      uVar7 = *(undefined8 *)(lVar23 + -0xd);
      uVar8 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x25) = *(undefined8 *)(lVar23 + -0x25);
      *(undefined8 *)(pcVar27 + -0x1d) = uVar5;
      *(undefined8 *)(pcVar27 + -0x15) = uVar6;
      *(undefined8 *)(pcVar27 + -0xd) = uVar7;
      *(undefined8 *)(pcVar27 + -8) = uVar8;
      return param_1;
    case (uint *)0x26:
      uVar5 = *(undefined8 *)(lVar23 + -0x1e);
      uVar6 = *(undefined8 *)(lVar23 + -0x16);
      uVar7 = *(undefined8 *)(lVar23 + -0xe);
      uVar8 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x26) = *(undefined8 *)(lVar23 + -0x26);
      *(undefined8 *)(pcVar27 + -0x1e) = uVar5;
      *(undefined8 *)(pcVar27 + -0x16) = uVar6;
      *(undefined8 *)(pcVar27 + -0xe) = uVar7;
      *(undefined8 *)(pcVar27 + -8) = uVar8;
      return param_1;
    case (uint *)0x27:
      uVar5 = *(undefined8 *)(lVar23 + -0x1f);
      uVar6 = *(undefined8 *)(lVar23 + -0x17);
      uVar7 = *(undefined8 *)(lVar23 + -0xf);
      uVar8 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x27) = *(undefined8 *)(lVar23 + -0x27);
      *(undefined8 *)(pcVar27 + -0x1f) = uVar5;
      *(undefined8 *)(pcVar27 + -0x17) = uVar6;
      *(undefined8 *)(pcVar27 + -0xf) = uVar7;
      *(undefined8 *)(pcVar27 + -8) = uVar8;
      return param_1;
    case (uint *)0x28:
      uVar5 = *(undefined8 *)(lVar23 + -0x20);
      uVar6 = *(undefined8 *)(lVar23 + -0x18);
      uVar7 = *(undefined8 *)(lVar23 + -0x10);
      uVar8 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x28) = *(undefined8 *)(lVar23 + -0x28);
      *(undefined8 *)(pcVar27 + -0x20) = uVar5;
      *(undefined8 *)(pcVar27 + -0x18) = uVar6;
      *(undefined8 *)(pcVar27 + -0x10) = uVar7;
      *(undefined8 *)(pcVar27 + -8) = uVar8;
      return param_1;
    case (uint *)0x29:
      uVar5 = *(undefined8 *)(lVar23 + -0x21);
      uVar6 = *(undefined8 *)(lVar23 + -0x19);
      uVar7 = *(undefined8 *)(lVar23 + -0x11);
      uVar8 = *(undefined8 *)(lVar23 + -9);
      cVar2 = *(char *)(lVar23 + -1);
      *(undefined8 *)(pcVar27 + -0x29) = *(undefined8 *)(lVar23 + -0x29);
      *(undefined8 *)(pcVar27 + -0x21) = uVar5;
      *(undefined8 *)(pcVar27 + -0x19) = uVar6;
      *(undefined8 *)(pcVar27 + -0x11) = uVar7;
      *(undefined8 *)(pcVar27 + -9) = uVar8;
      pcVar27[-1] = cVar2;
      return param_1;
    case (uint *)0x2a:
      uVar5 = *(undefined8 *)(lVar23 + -0x22);
      uVar6 = *(undefined8 *)(lVar23 + -0x1a);
      uVar7 = *(undefined8 *)(lVar23 + -0x12);
      uVar8 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x2a) = *(undefined8 *)(lVar23 + -0x2a);
      *(undefined8 *)(pcVar27 + -0x22) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1a) = uVar6;
      *(undefined8 *)(pcVar27 + -0x12) = uVar7;
      *(undefined8 *)(pcVar27 + -10) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x2b:
      uVar5 = *(undefined8 *)(lVar23 + -0x23);
      uVar6 = *(undefined8 *)(lVar23 + -0x1b);
      uVar7 = *(undefined8 *)(lVar23 + -0x13);
      uVar8 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x2b) = *(undefined8 *)(lVar23 + -0x2b);
      *(undefined8 *)(pcVar27 + -0x23) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1b) = uVar6;
      *(undefined8 *)(pcVar27 + -0x13) = uVar7;
      *(undefined8 *)(pcVar27 + -0xb) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x2c:
      uVar5 = *(undefined8 *)(lVar23 + -0x24);
      uVar6 = *(undefined8 *)(lVar23 + -0x1c);
      uVar7 = *(undefined8 *)(lVar23 + -0x14);
      uVar8 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x2c) = *(undefined8 *)(lVar23 + -0x2c);
      *(undefined8 *)(pcVar27 + -0x24) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1c) = uVar6;
      *(undefined8 *)(pcVar27 + -0x14) = uVar7;
      *(undefined8 *)(pcVar27 + -0xc) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x2d:
      uVar5 = *(undefined8 *)(lVar23 + -0x25);
      uVar6 = *(undefined8 *)(lVar23 + -0x1d);
      uVar7 = *(undefined8 *)(lVar23 + -0x15);
      uVar8 = *(undefined8 *)(lVar23 + -0xd);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x2d) = *(undefined8 *)(lVar23 + -0x2d);
      *(undefined8 *)(pcVar27 + -0x25) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1d) = uVar6;
      *(undefined8 *)(pcVar27 + -0x15) = uVar7;
      *(undefined8 *)(pcVar27 + -0xd) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x2e:
      uVar5 = *(undefined8 *)(lVar23 + -0x26);
      uVar6 = *(undefined8 *)(lVar23 + -0x1e);
      uVar7 = *(undefined8 *)(lVar23 + -0x16);
      uVar8 = *(undefined8 *)(lVar23 + -0xe);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x2e) = *(undefined8 *)(lVar23 + -0x2e);
      *(undefined8 *)(pcVar27 + -0x26) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1e) = uVar6;
      *(undefined8 *)(pcVar27 + -0x16) = uVar7;
      *(undefined8 *)(pcVar27 + -0xe) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x2f:
      uVar5 = *(undefined8 *)(lVar23 + -0x27);
      uVar6 = *(undefined8 *)(lVar23 + -0x1f);
      uVar7 = *(undefined8 *)(lVar23 + -0x17);
      uVar8 = *(undefined8 *)(lVar23 + -0xf);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x2f) = *(undefined8 *)(lVar23 + -0x2f);
      *(undefined8 *)(pcVar27 + -0x27) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1f) = uVar6;
      *(undefined8 *)(pcVar27 + -0x17) = uVar7;
      *(undefined8 *)(pcVar27 + -0xf) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x30:
      uVar5 = *(undefined8 *)(lVar23 + -0x28);
      uVar6 = *(undefined8 *)(lVar23 + -0x20);
      uVar7 = *(undefined8 *)(lVar23 + -0x18);
      uVar8 = *(undefined8 *)(lVar23 + -0x10);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x30) = *(undefined8 *)(lVar23 + -0x30);
      *(undefined8 *)(pcVar27 + -0x28) = uVar5;
      *(undefined8 *)(pcVar27 + -0x20) = uVar6;
      *(undefined8 *)(pcVar27 + -0x18) = uVar7;
      *(undefined8 *)(pcVar27 + -0x10) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x31:
      uVar9 = *(undefined8 *)(lVar23 + -0x29);
      uVar5 = *(undefined8 *)(lVar23 + -0x21);
      uVar6 = *(undefined8 *)(lVar23 + -0x19);
      uVar7 = *(undefined8 *)(lVar23 + -0x11);
      uVar8 = *(undefined8 *)(lVar23 + -9);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x31) = *(undefined8 *)(lVar23 + -0x31);
      *(undefined8 *)(pcVar27 + -0x29) = uVar9;
      *(undefined8 *)(pcVar27 + -0x21) = uVar5;
      *(undefined8 *)(pcVar27 + -0x19) = uVar6;
      *(undefined8 *)(pcVar27 + -0x11) = uVar7;
      *(undefined8 *)(pcVar27 + -9) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x32:
      uVar9 = *(undefined8 *)(lVar23 + -0x2a);
      uVar5 = *(undefined8 *)(lVar23 + -0x22);
      uVar6 = *(undefined8 *)(lVar23 + -0x1a);
      uVar7 = *(undefined8 *)(lVar23 + -0x12);
      uVar8 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x32) = *(undefined8 *)(lVar23 + -0x32);
      *(undefined8 *)(pcVar27 + -0x2a) = uVar9;
      *(undefined8 *)(pcVar27 + -0x22) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1a) = uVar6;
      *(undefined8 *)(pcVar27 + -0x12) = uVar7;
      *(undefined8 *)(pcVar27 + -10) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x33:
      uVar9 = *(undefined8 *)(lVar23 + -0x2b);
      uVar5 = *(undefined8 *)(lVar23 + -0x23);
      uVar6 = *(undefined8 *)(lVar23 + -0x1b);
      uVar7 = *(undefined8 *)(lVar23 + -0x13);
      uVar8 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x33) = *(undefined8 *)(lVar23 + -0x33);
      *(undefined8 *)(pcVar27 + -0x2b) = uVar9;
      *(undefined8 *)(pcVar27 + -0x23) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1b) = uVar6;
      *(undefined8 *)(pcVar27 + -0x13) = uVar7;
      *(undefined8 *)(pcVar27 + -0xb) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x34:
      uVar9 = *(undefined8 *)(lVar23 + -0x2c);
      uVar5 = *(undefined8 *)(lVar23 + -0x24);
      uVar6 = *(undefined8 *)(lVar23 + -0x1c);
      uVar7 = *(undefined8 *)(lVar23 + -0x14);
      uVar8 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x34) = *(undefined8 *)(lVar23 + -0x34);
      *(undefined8 *)(pcVar27 + -0x2c) = uVar9;
      *(undefined8 *)(pcVar27 + -0x24) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1c) = uVar6;
      *(undefined8 *)(pcVar27 + -0x14) = uVar7;
      *(undefined8 *)(pcVar27 + -0xc) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x35:
      uVar10 = *(undefined8 *)(lVar23 + -0x2d);
      uVar5 = *(undefined8 *)(lVar23 + -0x25);
      uVar6 = *(undefined8 *)(lVar23 + -0x1d);
      uVar7 = *(undefined8 *)(lVar23 + -0x15);
      uVar8 = *(undefined8 *)(lVar23 + -0xd);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x35) = *(undefined8 *)(lVar23 + -0x35);
      *(undefined8 *)(pcVar27 + -0x2d) = uVar10;
      *(undefined8 *)(pcVar27 + -0x25) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1d) = uVar6;
      *(undefined8 *)(pcVar27 + -0x15) = uVar7;
      *(undefined8 *)(pcVar27 + -0xd) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x36:
      uVar10 = *(undefined8 *)(lVar23 + -0x2e);
      uVar5 = *(undefined8 *)(lVar23 + -0x26);
      uVar6 = *(undefined8 *)(lVar23 + -0x1e);
      uVar7 = *(undefined8 *)(lVar23 + -0x16);
      uVar8 = *(undefined8 *)(lVar23 + -0xe);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x36) = *(undefined8 *)(lVar23 + -0x36);
      *(undefined8 *)(pcVar27 + -0x2e) = uVar10;
      *(undefined8 *)(pcVar27 + -0x26) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1e) = uVar6;
      *(undefined8 *)(pcVar27 + -0x16) = uVar7;
      *(undefined8 *)(pcVar27 + -0xe) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x37:
      uVar10 = *(undefined8 *)(lVar23 + -0x2f);
      uVar5 = *(undefined8 *)(lVar23 + -0x27);
      uVar6 = *(undefined8 *)(lVar23 + -0x1f);
      uVar7 = *(undefined8 *)(lVar23 + -0x17);
      uVar8 = *(undefined8 *)(lVar23 + -0xf);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x37) = *(undefined8 *)(lVar23 + -0x37);
      *(undefined8 *)(pcVar27 + -0x2f) = uVar10;
      *(undefined8 *)(pcVar27 + -0x27) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1f) = uVar6;
      *(undefined8 *)(pcVar27 + -0x17) = uVar7;
      *(undefined8 *)(pcVar27 + -0xf) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x38:
      uVar10 = *(undefined8 *)(lVar23 + -0x30);
      uVar5 = *(undefined8 *)(lVar23 + -0x28);
      uVar6 = *(undefined8 *)(lVar23 + -0x20);
      uVar7 = *(undefined8 *)(lVar23 + -0x18);
      uVar8 = *(undefined8 *)(lVar23 + -0x10);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x38) = *(undefined8 *)(lVar23 + -0x38);
      *(undefined8 *)(pcVar27 + -0x30) = uVar10;
      *(undefined8 *)(pcVar27 + -0x28) = uVar5;
      *(undefined8 *)(pcVar27 + -0x20) = uVar6;
      *(undefined8 *)(pcVar27 + -0x18) = uVar7;
      *(undefined8 *)(pcVar27 + -0x10) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x39:
      uVar10 = *(undefined8 *)(lVar23 + -0x31);
      uVar5 = *(undefined8 *)(lVar23 + -0x29);
      uVar6 = *(undefined8 *)(lVar23 + -0x21);
      uVar7 = *(undefined8 *)(lVar23 + -0x19);
      uVar8 = *(undefined8 *)(lVar23 + -0x11);
      uVar9 = *(undefined8 *)(lVar23 + -9);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x39) = *(undefined8 *)(lVar23 + -0x39);
      *(undefined8 *)(pcVar27 + -0x31) = uVar10;
      *(undefined8 *)(pcVar27 + -0x29) = uVar5;
      *(undefined8 *)(pcVar27 + -0x21) = uVar6;
      *(undefined8 *)(pcVar27 + -0x19) = uVar7;
      *(undefined8 *)(pcVar27 + -0x11) = uVar8;
      *(undefined8 *)(pcVar27 + -9) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x3a:
      uVar10 = *(undefined8 *)(lVar23 + -0x32);
      uVar5 = *(undefined8 *)(lVar23 + -0x2a);
      uVar6 = *(undefined8 *)(lVar23 + -0x22);
      uVar7 = *(undefined8 *)(lVar23 + -0x1a);
      uVar8 = *(undefined8 *)(lVar23 + -0x12);
      uVar9 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x3a) = *(undefined8 *)(lVar23 + -0x3a);
      *(undefined8 *)(pcVar27 + -0x32) = uVar10;
      *(undefined8 *)(pcVar27 + -0x2a) = uVar5;
      *(undefined8 *)(pcVar27 + -0x22) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1a) = uVar7;
      *(undefined8 *)(pcVar27 + -0x12) = uVar8;
      *(undefined8 *)(pcVar27 + -10) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x3b:
      uVar10 = *(undefined8 *)(lVar23 + -0x33);
      uVar5 = *(undefined8 *)(lVar23 + -0x2b);
      uVar6 = *(undefined8 *)(lVar23 + -0x23);
      uVar7 = *(undefined8 *)(lVar23 + -0x1b);
      uVar8 = *(undefined8 *)(lVar23 + -0x13);
      uVar9 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x3b) = *(undefined8 *)(lVar23 + -0x3b);
      *(undefined8 *)(pcVar27 + -0x33) = uVar10;
      *(undefined8 *)(pcVar27 + -0x2b) = uVar5;
      *(undefined8 *)(pcVar27 + -0x23) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1b) = uVar7;
      *(undefined8 *)(pcVar27 + -0x13) = uVar8;
      *(undefined8 *)(pcVar27 + -0xb) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x3c:
      uVar10 = *(undefined8 *)(lVar23 + -0x34);
      uVar5 = *(undefined8 *)(lVar23 + -0x2c);
      uVar6 = *(undefined8 *)(lVar23 + -0x24);
      uVar7 = *(undefined8 *)(lVar23 + -0x1c);
      uVar8 = *(undefined8 *)(lVar23 + -0x14);
      uVar9 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x3c) = *(undefined8 *)(lVar23 + -0x3c);
      *(undefined8 *)(pcVar27 + -0x34) = uVar10;
      *(undefined8 *)(pcVar27 + -0x2c) = uVar5;
      *(undefined8 *)(pcVar27 + -0x24) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1c) = uVar7;
      *(undefined8 *)(pcVar27 + -0x14) = uVar8;
      *(undefined8 *)(pcVar27 + -0xc) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x3d:
      uVar11 = *(undefined8 *)(lVar23 + -0x35);
      uVar5 = *(undefined8 *)(lVar23 + -0x2d);
      uVar6 = *(undefined8 *)(lVar23 + -0x25);
      uVar7 = *(undefined8 *)(lVar23 + -0x1d);
      uVar8 = *(undefined8 *)(lVar23 + -0x15);
      uVar9 = *(undefined8 *)(lVar23 + -0xd);
      uVar10 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x3d) = *(undefined8 *)(lVar23 + -0x3d);
      *(undefined8 *)(pcVar27 + -0x35) = uVar11;
      *(undefined8 *)(pcVar27 + -0x2d) = uVar5;
      *(undefined8 *)(pcVar27 + -0x25) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1d) = uVar7;
      *(undefined8 *)(pcVar27 + -0x15) = uVar8;
      *(undefined8 *)(pcVar27 + -0xd) = uVar9;
      *(undefined8 *)(pcVar27 + -8) = uVar10;
      return param_1;
    case (uint *)0x3e:
      uVar11 = *(undefined8 *)(lVar23 + -0x36);
      uVar5 = *(undefined8 *)(lVar23 + -0x2e);
      uVar6 = *(undefined8 *)(lVar23 + -0x26);
      uVar7 = *(undefined8 *)(lVar23 + -0x1e);
      uVar8 = *(undefined8 *)(lVar23 + -0x16);
      uVar9 = *(undefined8 *)(lVar23 + -0xe);
      uVar10 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x3e) = *(undefined8 *)(lVar23 + -0x3e);
      *(undefined8 *)(pcVar27 + -0x36) = uVar11;
      *(undefined8 *)(pcVar27 + -0x2e) = uVar5;
      *(undefined8 *)(pcVar27 + -0x26) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1e) = uVar7;
      *(undefined8 *)(pcVar27 + -0x16) = uVar8;
      *(undefined8 *)(pcVar27 + -0xe) = uVar9;
      *(undefined8 *)(pcVar27 + -8) = uVar10;
      return param_1;
    case (uint *)0x3f:
      uVar11 = *(undefined8 *)(lVar23 + -0x37);
      uVar5 = *(undefined8 *)(lVar23 + -0x2f);
      uVar6 = *(undefined8 *)(lVar23 + -0x27);
      uVar7 = *(undefined8 *)(lVar23 + -0x1f);
      uVar8 = *(undefined8 *)(lVar23 + -0x17);
      uVar9 = *(undefined8 *)(lVar23 + -0xf);
      uVar10 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x3f) = *(undefined8 *)(lVar23 + -0x3f);
      *(undefined8 *)(pcVar27 + -0x37) = uVar11;
      *(undefined8 *)(pcVar27 + -0x2f) = uVar5;
      *(undefined8 *)(pcVar27 + -0x27) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1f) = uVar7;
      *(undefined8 *)(pcVar27 + -0x17) = uVar8;
      *(undefined8 *)(pcVar27 + -0xf) = uVar9;
      *(undefined8 *)(pcVar27 + -8) = uVar10;
      return param_1;
    case (uint *)0x40:
      uVar11 = *(undefined8 *)(lVar23 + -0x38);
      uVar5 = *(undefined8 *)(lVar23 + -0x30);
      uVar6 = *(undefined8 *)(lVar23 + -0x28);
      uVar7 = *(undefined8 *)(lVar23 + -0x20);
      uVar8 = *(undefined8 *)(lVar23 + -0x18);
      uVar9 = *(undefined8 *)(lVar23 + -0x10);
      uVar10 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x40) = *(undefined8 *)(lVar23 + -0x40);
      *(undefined8 *)(pcVar27 + -0x38) = uVar11;
      *(undefined8 *)(pcVar27 + -0x30) = uVar5;
      *(undefined8 *)(pcVar27 + -0x28) = uVar6;
      *(undefined8 *)(pcVar27 + -0x20) = uVar7;
      *(undefined8 *)(pcVar27 + -0x18) = uVar8;
      *(undefined8 *)(pcVar27 + -0x10) = uVar9;
      *(undefined8 *)(pcVar27 + -8) = uVar10;
      return param_1;
    case (uint *)0x41:
      uVar9 = *(undefined8 *)(lVar23 + -0x39);
      uVar10 = *(undefined8 *)(lVar23 + -0x31);
      uVar11 = *(undefined8 *)(lVar23 + -0x29);
      uVar5 = *(undefined8 *)(lVar23 + -0x21);
      uVar6 = *(undefined8 *)(lVar23 + -0x19);
      uVar7 = *(undefined8 *)(lVar23 + -0x11);
      uVar8 = *(undefined8 *)(lVar23 + -9);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x41) = *(undefined8 *)(lVar23 + -0x41);
      *(undefined8 *)(pcVar27 + -0x39) = uVar9;
      *(undefined8 *)(pcVar27 + -0x31) = uVar10;
      *(undefined8 *)(pcVar27 + -0x29) = uVar11;
      *(undefined8 *)(pcVar27 + -0x21) = uVar5;
      *(undefined8 *)(pcVar27 + -0x19) = uVar6;
      *(undefined8 *)(pcVar27 + -0x11) = uVar7;
      *(undefined8 *)(pcVar27 + -9) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x42:
      uVar10 = *(undefined8 *)(lVar23 + -0x3a);
      uVar11 = *(undefined8 *)(lVar23 + -0x32);
      uVar12 = *(undefined8 *)(lVar23 + -0x2a);
      uVar5 = *(undefined8 *)(lVar23 + -0x2a);
      uVar6 = *(undefined8 *)(lVar23 + -0x22);
      uVar7 = *(undefined8 *)(lVar23 + -0x1a);
      uVar8 = *(undefined8 *)(lVar23 + -0x12);
      uVar9 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x42) = *(undefined8 *)(lVar23 + -0x42);
      *(undefined8 *)(pcVar27 + -0x3a) = uVar10;
      *(undefined8 *)(pcVar27 + -0x32) = uVar11;
      *(undefined8 *)(pcVar27 + -0x2a) = uVar12;
      *(undefined8 *)(pcVar27 + -0x2a) = uVar5;
      *(undefined8 *)(pcVar27 + -0x22) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1a) = uVar7;
      *(undefined8 *)(pcVar27 + -0x12) = uVar8;
      *(undefined8 *)(pcVar27 + -10) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x43:
      uVar10 = *(undefined8 *)(lVar23 + -0x3b);
      uVar11 = *(undefined8 *)(lVar23 + -0x3b);
      uVar12 = *(undefined8 *)(lVar23 + -0x33);
      uVar5 = *(undefined8 *)(lVar23 + -0x2b);
      uVar6 = *(undefined8 *)(lVar23 + -0x23);
      uVar7 = *(undefined8 *)(lVar23 + -0x1b);
      uVar8 = *(undefined8 *)(lVar23 + -0x13);
      uVar9 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x43) = *(undefined8 *)(lVar23 + -0x43);
      *(undefined8 *)(pcVar27 + -0x3b) = uVar10;
      *(undefined8 *)(pcVar27 + -0x3b) = uVar11;
      *(undefined8 *)(pcVar27 + -0x33) = uVar12;
      *(undefined8 *)(pcVar27 + -0x2b) = uVar5;
      *(undefined8 *)(pcVar27 + -0x23) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1b) = uVar7;
      *(undefined8 *)(pcVar27 + -0x13) = uVar8;
      *(undefined8 *)(pcVar27 + -0xb) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x44:
      uVar9 = *(undefined8 *)(lVar23 + -0x3c);
      uVar10 = *(undefined8 *)(lVar23 + -0x34);
      uVar11 = *(undefined8 *)(lVar23 + -0x2c);
      uVar5 = *(undefined8 *)(lVar23 + -0x24);
      uVar6 = *(undefined8 *)(lVar23 + -0x1c);
      uVar7 = *(undefined8 *)(lVar23 + -0x14);
      uVar8 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x44) = *(undefined8 *)(lVar23 + -0x44);
      *(undefined8 *)(pcVar27 + -0x3c) = uVar9;
      *(undefined8 *)(pcVar27 + -0x34) = uVar10;
      *(undefined8 *)(pcVar27 + -0x2c) = uVar11;
      *(undefined8 *)(pcVar27 + -0x24) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1c) = uVar6;
      *(undefined8 *)(pcVar27 + -0x14) = uVar7;
      *(undefined8 *)(pcVar27 + -0xc) = uVar8;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x45:
      uVar10 = *(undefined8 *)(lVar23 + -0x3d);
      uVar11 = *(undefined8 *)(lVar23 + -0x35);
      uVar12 = *(undefined8 *)(lVar23 + -0x2d);
      uVar5 = *(undefined8 *)(lVar23 + -0x25);
      uVar6 = *(undefined8 *)(lVar23 + -0x1d);
      uVar7 = *(undefined8 *)(lVar23 + -0x15);
      uVar8 = *(undefined8 *)(lVar23 + -0xd);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x45) = *(undefined8 *)(lVar23 + -0x45);
      *(undefined8 *)(pcVar27 + -0x3d) = uVar10;
      *(undefined8 *)(pcVar27 + -0x35) = uVar11;
      *(undefined8 *)(pcVar27 + -0x2d) = uVar12;
      *(undefined8 *)(pcVar27 + -0x25) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1d) = uVar6;
      *(undefined8 *)(pcVar27 + -0x15) = uVar7;
      *(undefined8 *)(pcVar27 + -0xd) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x46:
      uVar10 = *(undefined8 *)(lVar23 + -0x3e);
      uVar11 = *(undefined8 *)(lVar23 + -0x36);
      uVar12 = *(undefined8 *)(lVar23 + -0x2e);
      uVar5 = *(undefined8 *)(lVar23 + -0x26);
      uVar6 = *(undefined8 *)(lVar23 + -0x1e);
      uVar7 = *(undefined8 *)(lVar23 + -0x16);
      uVar8 = *(undefined8 *)(lVar23 + -0xe);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x46) = *(undefined8 *)(lVar23 + -0x46);
      *(undefined8 *)(pcVar27 + -0x3e) = uVar10;
      *(undefined8 *)(pcVar27 + -0x36) = uVar11;
      *(undefined8 *)(pcVar27 + -0x2e) = uVar12;
      *(undefined8 *)(pcVar27 + -0x26) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1e) = uVar6;
      *(undefined8 *)(pcVar27 + -0x16) = uVar7;
      *(undefined8 *)(pcVar27 + -0xe) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x47:
      uVar10 = *(undefined8 *)(lVar23 + -0x3f);
      uVar11 = *(undefined8 *)(lVar23 + -0x37);
      uVar12 = *(undefined8 *)(lVar23 + -0x2f);
      uVar5 = *(undefined8 *)(lVar23 + -0x27);
      uVar6 = *(undefined8 *)(lVar23 + -0x1f);
      uVar7 = *(undefined8 *)(lVar23 + -0x17);
      uVar8 = *(undefined8 *)(lVar23 + -0xf);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x47) = *(undefined8 *)(lVar23 + -0x47);
      *(undefined8 *)(pcVar27 + -0x3f) = uVar10;
      *(undefined8 *)(pcVar27 + -0x37) = uVar11;
      *(undefined8 *)(pcVar27 + -0x2f) = uVar12;
      *(undefined8 *)(pcVar27 + -0x27) = uVar5;
      *(undefined8 *)(pcVar27 + -0x1f) = uVar6;
      *(undefined8 *)(pcVar27 + -0x17) = uVar7;
      *(undefined8 *)(pcVar27 + -0xf) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x48:
      uVar10 = *(undefined8 *)(lVar23 + -0x40);
      uVar11 = *(undefined8 *)(lVar23 + -0x38);
      uVar12 = *(undefined8 *)(lVar23 + -0x30);
      uVar5 = *(undefined8 *)(lVar23 + -0x28);
      uVar6 = *(undefined8 *)(lVar23 + -0x20);
      uVar7 = *(undefined8 *)(lVar23 + -0x18);
      uVar8 = *(undefined8 *)(lVar23 + -0x10);
      uVar9 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x48) = *(undefined8 *)(lVar23 + -0x48);
      *(undefined8 *)(pcVar27 + -0x40) = uVar10;
      *(undefined8 *)(pcVar27 + -0x38) = uVar11;
      *(undefined8 *)(pcVar27 + -0x30) = uVar12;
      *(undefined8 *)(pcVar27 + -0x28) = uVar5;
      *(undefined8 *)(pcVar27 + -0x20) = uVar6;
      *(undefined8 *)(pcVar27 + -0x18) = uVar7;
      *(undefined8 *)(pcVar27 + -0x10) = uVar8;
      *(undefined8 *)(pcVar27 + -8) = uVar9;
      return param_1;
    case (uint *)0x49:
      uVar10 = *(undefined8 *)(lVar23 + -0x41);
      uVar11 = *(undefined8 *)(lVar23 + -0x39);
      uVar12 = *(undefined8 *)(lVar23 + -0x31);
      uVar5 = *(undefined8 *)(lVar23 + -0x29);
      uVar6 = *(undefined8 *)(lVar23 + -0x21);
      uVar7 = *(undefined8 *)(lVar23 + -0x19);
      uVar8 = *(undefined8 *)(lVar23 + -0x11);
      uVar9 = *(undefined8 *)(lVar23 + -9);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x49) = *(undefined8 *)(lVar23 + -0x49);
      *(undefined8 *)(pcVar27 + -0x41) = uVar10;
      *(undefined8 *)(pcVar27 + -0x39) = uVar11;
      *(undefined8 *)(pcVar27 + -0x31) = uVar12;
      *(undefined8 *)(pcVar27 + -0x29) = uVar5;
      *(undefined8 *)(pcVar27 + -0x21) = uVar6;
      *(undefined8 *)(pcVar27 + -0x19) = uVar7;
      *(undefined8 *)(pcVar27 + -0x11) = uVar8;
      *(undefined8 *)(pcVar27 + -9) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x4a:
      uVar10 = *(undefined8 *)(lVar23 + -0x42);
      uVar11 = *(undefined8 *)(lVar23 + -0x3a);
      uVar12 = *(undefined8 *)(lVar23 + -0x32);
      uVar5 = *(undefined8 *)(lVar23 + -0x2a);
      uVar6 = *(undefined8 *)(lVar23 + -0x22);
      uVar7 = *(undefined8 *)(lVar23 + -0x1a);
      uVar8 = *(undefined8 *)(lVar23 + -0x12);
      uVar9 = *(undefined8 *)(lVar23 + -10);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x4a) = *(undefined8 *)(lVar23 + -0x4a);
      *(undefined8 *)(pcVar27 + -0x42) = uVar10;
      *(undefined8 *)(pcVar27 + -0x3a) = uVar11;
      *(undefined8 *)(pcVar27 + -0x32) = uVar12;
      *(undefined8 *)(pcVar27 + -0x2a) = uVar5;
      *(undefined8 *)(pcVar27 + -0x22) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1a) = uVar7;
      *(undefined8 *)(pcVar27 + -0x12) = uVar8;
      *(undefined8 *)(pcVar27 + -10) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x4b:
      uVar10 = *(undefined8 *)(lVar23 + -0x43);
      uVar11 = *(undefined8 *)(lVar23 + -0x3b);
      uVar12 = *(undefined8 *)(lVar23 + -0x33);
      uVar5 = *(undefined8 *)(lVar23 + -0x2b);
      uVar6 = *(undefined8 *)(lVar23 + -0x23);
      uVar7 = *(undefined8 *)(lVar23 + -0x1b);
      uVar8 = *(undefined8 *)(lVar23 + -0x13);
      uVar9 = *(undefined8 *)(lVar23 + -0xb);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x4b) = *(undefined8 *)(lVar23 + -0x4b);
      *(undefined8 *)(pcVar27 + -0x43) = uVar10;
      *(undefined8 *)(pcVar27 + -0x3b) = uVar11;
      *(undefined8 *)(pcVar27 + -0x33) = uVar12;
      *(undefined8 *)(pcVar27 + -0x2b) = uVar5;
      *(undefined8 *)(pcVar27 + -0x23) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1b) = uVar7;
      *(undefined8 *)(pcVar27 + -0x13) = uVar8;
      *(undefined8 *)(pcVar27 + -0xb) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x4c:
      uVar10 = *(undefined8 *)(lVar23 + -0x44);
      uVar11 = *(undefined8 *)(lVar23 + -0x3c);
      uVar12 = *(undefined8 *)(lVar23 + -0x34);
      uVar5 = *(undefined8 *)(lVar23 + -0x2c);
      uVar6 = *(undefined8 *)(lVar23 + -0x24);
      uVar7 = *(undefined8 *)(lVar23 + -0x1c);
      uVar8 = *(undefined8 *)(lVar23 + -0x14);
      uVar9 = *(undefined8 *)(lVar23 + -0xc);
      uVar4 = *(undefined4 *)(lVar23 + -4);
      *(undefined8 *)(pcVar27 + -0x4c) = *(undefined8 *)(lVar23 + -0x4c);
      *(undefined8 *)(pcVar27 + -0x44) = uVar10;
      *(undefined8 *)(pcVar27 + -0x3c) = uVar11;
      *(undefined8 *)(pcVar27 + -0x34) = uVar12;
      *(undefined8 *)(pcVar27 + -0x2c) = uVar5;
      *(undefined8 *)(pcVar27 + -0x24) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1c) = uVar7;
      *(undefined8 *)(pcVar27 + -0x14) = uVar8;
      *(undefined8 *)(pcVar27 + -0xc) = uVar9;
      *(undefined4 *)(pcVar27 + -4) = uVar4;
      return param_1;
    case (uint *)0x4d:
      uVar11 = *(undefined8 *)(lVar23 + -0x45);
      uVar12 = *(undefined8 *)(lVar23 + -0x3d);
      uVar13 = *(undefined8 *)(lVar23 + -0x35);
      uVar5 = *(undefined8 *)(lVar23 + -0x2d);
      uVar6 = *(undefined8 *)(lVar23 + -0x25);
      uVar7 = *(undefined8 *)(lVar23 + -0x1d);
      uVar8 = *(undefined8 *)(lVar23 + -0x15);
      uVar9 = *(undefined8 *)(lVar23 + -0xd);
      uVar10 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x4d) = *(undefined8 *)(lVar23 + -0x4d);
      *(undefined8 *)(pcVar27 + -0x45) = uVar11;
      *(undefined8 *)(pcVar27 + -0x3d) = uVar12;
      *(undefined8 *)(pcVar27 + -0x35) = uVar13;
      *(undefined8 *)(pcVar27 + -0x2d) = uVar5;
      *(undefined8 *)(pcVar27 + -0x25) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1d) = uVar7;
      *(undefined8 *)(pcVar27 + -0x15) = uVar8;
      *(undefined8 *)(pcVar27 + -0xd) = uVar9;
      *(undefined8 *)(pcVar27 + -8) = uVar10;
      return param_1;
    case (uint *)0x4e:
      uVar11 = *(undefined8 *)(lVar23 + -0x46);
      uVar12 = *(undefined8 *)(lVar23 + -0x3e);
      uVar13 = *(undefined8 *)(lVar23 + -0x36);
      uVar5 = *(undefined8 *)(lVar23 + -0x2e);
      uVar6 = *(undefined8 *)(lVar23 + -0x26);
      uVar7 = *(undefined8 *)(lVar23 + -0x1e);
      uVar8 = *(undefined8 *)(lVar23 + -0x16);
      uVar9 = *(undefined8 *)(lVar23 + -0xe);
      uVar10 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x4e) = *(undefined8 *)(lVar23 + -0x4e);
      *(undefined8 *)(pcVar27 + -0x46) = uVar11;
      *(undefined8 *)(pcVar27 + -0x3e) = uVar12;
      *(undefined8 *)(pcVar27 + -0x36) = uVar13;
      *(undefined8 *)(pcVar27 + -0x2e) = uVar5;
      *(undefined8 *)(pcVar27 + -0x26) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1e) = uVar7;
      *(undefined8 *)(pcVar27 + -0x16) = uVar8;
      *(undefined8 *)(pcVar27 + -0xe) = uVar9;
      *(undefined8 *)(pcVar27 + -8) = uVar10;
      return param_1;
    case (uint *)0x4f:
      uVar11 = *(undefined8 *)(lVar23 + -0x47);
      uVar12 = *(undefined8 *)(lVar23 + -0x3f);
      uVar13 = *(undefined8 *)(lVar23 + -0x37);
      uVar5 = *(undefined8 *)(lVar23 + -0x2f);
      uVar6 = *(undefined8 *)(lVar23 + -0x27);
      uVar7 = *(undefined8 *)(lVar23 + -0x1f);
      uVar8 = *(undefined8 *)(lVar23 + -0x17);
      uVar9 = *(undefined8 *)(lVar23 + -0xf);
      uVar10 = *(undefined8 *)(lVar23 + -8);
      *(undefined8 *)(pcVar27 + -0x4f) = *(undefined8 *)(lVar23 + -0x4f);
      *(undefined8 *)(pcVar27 + -0x47) = uVar11;
      *(undefined8 *)(pcVar27 + -0x3f) = uVar12;
      *(undefined8 *)(pcVar27 + -0x37) = uVar13;
      *(undefined8 *)(pcVar27 + -0x2f) = uVar5;
      *(undefined8 *)(pcVar27 + -0x27) = uVar6;
      *(undefined8 *)(pcVar27 + -0x1f) = uVar7;
      *(undefined8 *)(pcVar27 + -0x17) = uVar8;
      *(undefined8 *)(pcVar27 + -0xf) = uVar9;
      *(undefined8 *)(pcVar27 + -8) = uVar10;
      return param_1;
    }
    return param_1;
  }
  if ((char)param_2 <= (char)param_1) {
    uVar5 = *(undefined8 *)((long)(param_2 + -2) + (long)param_3);
    uVar6 = ((undefined8 *)((long)(param_2 + -2) + (long)param_3))[1];
    pcVar27 = param_1 + -0x10 + (long)param_3;
    uVar22 = (ulong)(param_1 + (long)param_3) & 0xf;
    uVar34 = (ulong)(param_1 + (long)param_3) ^ uVar22;
    uVar28 = (long)param_3 - uVar22;
    uVar22 = ((long)param_2 + (long)param_3) - uVar22;
    if (DAT_0093d708 < uVar28) {
      uVar7 = *(undefined8 *)(uVar22 - 0x10);
      uVar8 = *(undefined8 *)(uVar22 - 8);
      *(undefined8 *)pcVar27 = uVar5;
      *(undefined8 *)(pcVar27 + 8) = uVar6;
      *(undefined8 *)(uVar34 - 0x10) = uVar7;
      *(undefined8 *)(uVar34 - 8) = uVar8;
      uVar28 = uVar28 - 0x90;
      lVar23 = uVar22 - 0x10;
      lVar31 = uVar34 - 0x10;
      do {
        lVar32 = lVar31;
        lVar26 = lVar23;
        uVar22 = uVar28;
        uVar5 = *(undefined8 *)(lVar26 + -8);
        uVar6 = *(undefined8 *)(lVar26 + -0x20);
        uVar7 = *(undefined8 *)(lVar26 + -0x18);
        uVar8 = *(undefined8 *)(lVar26 + -0x30);
        uVar9 = *(undefined8 *)(lVar26 + -0x28);
        uVar10 = *(undefined8 *)(lVar26 + -0x40);
        uVar11 = *(undefined8 *)(lVar26 + -0x38);
        uVar12 = *(undefined8 *)(lVar26 + -0x50);
        uVar13 = *(undefined8 *)(lVar26 + -0x48);
        uVar14 = *(undefined8 *)(lVar26 + -0x60);
        uVar15 = *(undefined8 *)(lVar26 + -0x58);
        uVar16 = *(undefined8 *)(lVar26 + -0x70);
        uVar17 = *(undefined8 *)(lVar26 + -0x68);
        uVar18 = *(undefined8 *)(lVar26 + -0x80);
        uVar19 = *(undefined8 *)(lVar26 + -0x78);
        lVar23 = lVar26 + -0x80;
        *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar26 + -0x10);
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
        lVar31 = lVar32 + -0x80;
        uVar28 = uVar22 - 0x80;
      } while (0x7f < uVar22);
      if (-0x41 < (long)(uVar22 - 0x80)) {
        uVar5 = *(undefined8 *)(lVar26 + -0x88);
        uVar6 = *(undefined8 *)(lVar26 + -0xa0);
        uVar7 = *(undefined8 *)(lVar26 + -0x98);
        uVar8 = *(undefined8 *)(lVar26 + -0xb0);
        uVar9 = *(undefined8 *)(lVar26 + -0xa8);
        uVar10 = *(undefined8 *)(lVar26 + -0xc0);
        uVar11 = *(undefined8 *)(lVar26 + -0xb8);
        lVar23 = lVar26 + -0xc0;
        *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar26 + -0x90);
        *(undefined8 *)(lVar32 + -0x88) = uVar5;
        *(undefined8 *)(lVar32 + -0xa0) = uVar6;
        *(undefined8 *)(lVar32 + -0x98) = uVar7;
        *(undefined8 *)(lVar32 + -0xb0) = uVar8;
        *(undefined8 *)(lVar32 + -0xa8) = uVar9;
        *(undefined8 *)(lVar32 + -0xc0) = uVar10;
        *(undefined8 *)(lVar32 + -0xb8) = uVar11;
        lVar31 = lVar32 + -0xc0;
        uVar22 = uVar22 - 0x40;
      }
                    /* WARNING: Could not recover jumptable at 0x00724c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                  (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar22]))
                                  (lVar31,lVar23,
                                   (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                           (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                      [uVar22]));
      return pcVar27;
    }
    uVar35 = uVar22 & 0xf;
    if (uVar35 != 0) {
      lVar23 = (long)*(int *)(&DAT_0082aff0 + uVar35 * 4);
      switch(uVar35) {
      case 1:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007228db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 2:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 3:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 4:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 5:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00722e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 6:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
        break;
      case 7:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007230bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 8:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072320b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 9:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072335b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 10:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007234ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 0xb:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007235fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 0xc:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072374b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 0xd:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0072389b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 0xe:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007239eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      case 0xf:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b018 + lVar23);
        if (DAT_0093d718 <= uVar28) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b010 + lVar23 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00723b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar27;
      }
                    /* WARNING: Could not recover jumptable at 0x00722f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (uVar34,uVar22,uVar28 - 0x40,DAT_0093d718,pcVar27,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    }
    uVar35 = uVar28 - 0x10;
    uVar7 = *(undefined8 *)(uVar22 - 8);
    lVar23 = uVar22 - 0x10;
    *(undefined8 *)(uVar34 - 0x10) = *(undefined8 *)(uVar22 - 0x10);
    *(undefined8 *)(uVar34 - 8) = uVar7;
    lVar31 = uVar34 - 0x10;
    *(undefined8 *)pcVar27 = uVar5;
    *(undefined8 *)(pcVar27 + 8) = uVar6;
    if (uVar35 < 0x81) {
      if (0x3f < uVar35) {
        uVar5 = *(undefined8 *)(uVar22 - 0x18);
        uVar6 = *(undefined8 *)(uVar22 - 0x30);
        uVar7 = *(undefined8 *)(uVar22 - 0x28);
        uVar8 = *(undefined8 *)(uVar22 - 0x40);
        uVar9 = *(undefined8 *)(uVar22 - 0x38);
        uVar10 = *(undefined8 *)(uVar22 - 0x50);
        uVar11 = *(undefined8 *)(uVar22 - 0x48);
        *(undefined8 *)(uVar34 - 0x20) = *(undefined8 *)(uVar22 - 0x20);
        *(undefined8 *)(uVar34 - 0x18) = uVar5;
        *(undefined8 *)(uVar34 - 0x30) = uVar6;
        *(undefined8 *)(uVar34 - 0x28) = uVar7;
        *(undefined8 *)(uVar34 - 0x40) = uVar8;
        *(undefined8 *)(uVar34 - 0x38) = uVar9;
        *(undefined8 *)(uVar34 - 0x50) = uVar10;
        *(undefined8 *)(uVar34 - 0x48) = uVar11;
        uVar35 = uVar28 - 0x50;
        lVar23 = uVar22 - 0x50;
        lVar31 = uVar34 - 0x50;
      }
                    /* WARNING: Could not recover jumptable at 0x00722655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                  (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar35]))
                                  (lVar31,lVar23,
                                   (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                           (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                      [uVar35]));
      return pcVar27;
    }
    uVar22 = uVar28 - 0x90;
    if (DAT_0093d718 <= uVar35) {
      do {
        lVar32 = lVar31;
        lVar26 = lVar23;
        uVar28 = uVar22;
        uVar5 = *(undefined8 *)(lVar26 + -8);
        uVar6 = *(undefined8 *)(lVar26 + -0x20);
        uVar7 = *(undefined8 *)(lVar26 + -0x18);
        uVar8 = *(undefined8 *)(lVar26 + -0x30);
        uVar9 = *(undefined8 *)(lVar26 + -0x28);
        uVar10 = *(undefined8 *)(lVar26 + -0x40);
        uVar11 = *(undefined8 *)(lVar26 + -0x38);
        uVar12 = *(undefined8 *)(lVar26 + -0x50);
        uVar13 = *(undefined8 *)(lVar26 + -0x48);
        uVar14 = *(undefined8 *)(lVar26 + -0x60);
        uVar15 = *(undefined8 *)(lVar26 + -0x58);
        uVar16 = *(undefined8 *)(lVar26 + -0x70);
        uVar17 = *(undefined8 *)(lVar26 + -0x68);
        uVar18 = *(undefined8 *)(lVar26 + -0x80);
        uVar19 = *(undefined8 *)(lVar26 + -0x78);
        lVar23 = lVar26 + -0x80;
        *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar26 + -0x10);
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
        lVar31 = lVar32 + -0x80;
        uVar22 = uVar28 - 0x80;
      } while (0x7f < uVar28);
      if (-0x41 < (long)(uVar28 - 0x80)) {
        uVar5 = *(undefined8 *)(lVar26 + -0x88);
        uVar28 = uVar28 - 0x40;
        uVar6 = *(undefined8 *)(lVar26 + -0xa0);
        uVar7 = *(undefined8 *)(lVar26 + -0x98);
        *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar26 + -0x90);
        *(undefined8 *)(lVar32 + -0x88) = uVar5;
        *(undefined8 *)(lVar32 + -0xa0) = uVar6;
        *(undefined8 *)(lVar32 + -0x98) = uVar7;
        uVar5 = *(undefined8 *)(lVar26 + -0xa8);
        uVar6 = *(undefined8 *)(lVar26 + -0xc0);
        uVar7 = *(undefined8 *)(lVar26 + -0xb8);
        lVar23 = lVar26 + -0xc0;
        *(undefined8 *)(lVar32 + -0xb0) = *(undefined8 *)(lVar26 + -0xb0);
        *(undefined8 *)(lVar32 + -0xa8) = uVar5;
        *(undefined8 *)(lVar32 + -0xc0) = uVar6;
        *(undefined8 *)(lVar32 + -0xb8) = uVar7;
        lVar31 = lVar32 + -0xc0;
      }
      if (0x1f < uVar28) {
        puVar29 = (undefined8 *)(lVar23 + -0x10);
        uVar5 = *(undefined8 *)(lVar23 + -8);
        uVar28 = uVar28 - 0x20;
        uVar6 = *(undefined8 *)(lVar23 + -0x20);
        uVar7 = *(undefined8 *)(lVar23 + -0x18);
        lVar23 = lVar23 + -0x20;
        *(undefined8 *)(lVar31 + -0x10) = *puVar29;
        *(undefined8 *)(lVar31 + -8) = uVar5;
        *(undefined8 *)(lVar31 + -0x20) = uVar6;
        *(undefined8 *)(lVar31 + -0x18) = uVar7;
        lVar31 = lVar31 + -0x20;
      }
                    /* WARNING: Could not recover jumptable at 0x00722805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                  (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar28]))
                                  (lVar31,lVar23,
                                   (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                           (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                      [uVar28]));
      return pcVar27;
    }
    do {
      lVar32 = lVar31;
      lVar26 = lVar23;
      uVar28 = uVar22;
      uVar5 = *(undefined8 *)(lVar26 + -8);
      uVar6 = *(undefined8 *)(lVar26 + -0x20);
      uVar7 = *(undefined8 *)(lVar26 + -0x18);
      uVar8 = *(undefined8 *)(lVar26 + -0x30);
      uVar9 = *(undefined8 *)(lVar26 + -0x28);
      uVar10 = *(undefined8 *)(lVar26 + -0x40);
      uVar11 = *(undefined8 *)(lVar26 + -0x38);
      *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar26 + -0x10);
      *(undefined8 *)(lVar32 + -8) = uVar5;
      *(undefined8 *)(lVar32 + -0x20) = uVar6;
      *(undefined8 *)(lVar32 + -0x18) = uVar7;
      *(undefined8 *)(lVar32 + -0x30) = uVar8;
      *(undefined8 *)(lVar32 + -0x28) = uVar9;
      *(undefined8 *)(lVar32 + -0x40) = uVar10;
      *(undefined8 *)(lVar32 + -0x38) = uVar11;
      uVar5 = *(undefined8 *)(lVar26 + -0x48);
      uVar6 = *(undefined8 *)(lVar26 + -0x60);
      uVar7 = *(undefined8 *)(lVar26 + -0x58);
      uVar8 = *(undefined8 *)(lVar26 + -0x70);
      uVar9 = *(undefined8 *)(lVar26 + -0x68);
      uVar10 = *(undefined8 *)(lVar26 + -0x80);
      uVar11 = *(undefined8 *)(lVar26 + -0x78);
      lVar23 = lVar26 + -0x80;
      *(undefined8 *)(lVar32 + -0x50) = *(undefined8 *)(lVar26 + -0x50);
      *(undefined8 *)(lVar32 + -0x48) = uVar5;
      *(undefined8 *)(lVar32 + -0x60) = uVar6;
      *(undefined8 *)(lVar32 + -0x58) = uVar7;
      *(undefined8 *)(lVar32 + -0x70) = uVar8;
      *(undefined8 *)(lVar32 + -0x68) = uVar9;
      *(undefined8 *)(lVar32 + -0x80) = uVar10;
      *(undefined8 *)(lVar32 + -0x78) = uVar11;
      lVar31 = lVar32 + -0x80;
      uVar22 = uVar28 - 0x80;
    } while (0x7f < uVar28);
    if (-0x41 < (long)(uVar28 - 0x80)) {
      uVar5 = *(undefined8 *)(lVar26 + -0x88);
      uVar28 = uVar28 - 0x40;
      uVar6 = *(undefined8 *)(lVar26 + -0xa0);
      uVar7 = *(undefined8 *)(lVar26 + -0x98);
      *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar26 + -0x90);
      *(undefined8 *)(lVar32 + -0x88) = uVar5;
      *(undefined8 *)(lVar32 + -0xa0) = uVar6;
      *(undefined8 *)(lVar32 + -0x98) = uVar7;
      uVar5 = *(undefined8 *)(lVar26 + -0xa8);
      uVar6 = *(undefined8 *)(lVar26 + -0xc0);
      uVar7 = *(undefined8 *)(lVar26 + -0xb8);
      lVar23 = lVar26 + -0xc0;
      *(undefined8 *)(lVar32 + -0xb0) = *(undefined8 *)(lVar26 + -0xb0);
      *(undefined8 *)(lVar32 + -0xa8) = uVar5;
      *(undefined8 *)(lVar32 + -0xc0) = uVar6;
      *(undefined8 *)(lVar32 + -0xb8) = uVar7;
      lVar31 = lVar32 + -0xc0;
    }
                    /* WARNING: Could not recover jumptable at 0x00722714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar28]))
                                (lVar31,lVar23,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar28]));
    return pcVar27;
  }
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar28 = (ulong)param_1 & 0xfffffffffffffff0;
  puVar29 = (undefined8 *)(uVar28 + 0x10);
  uVar22 = (long)param_3 + ((long)param_1 - (long)puVar29);
  param_2 = (undefined8 *)((long)param_2 - ((long)param_1 - (long)puVar29));
  if (DAT_0093d708 < uVar22) {
    uVar7 = *param_2;
    uVar8 = param_2[1];
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_1 + 8) = uVar6;
    *puVar29 = uVar7;
    *(undefined8 *)(uVar28 + 0x18) = uVar8;
    uVar22 = uVar22 - 0x90;
    puVar29 = param_2 + 2;
    puVar25 = (undefined8 *)(uVar28 + 0x20);
    do {
      puVar30 = puVar25;
      puVar24 = puVar29;
      uVar28 = uVar22;
      uVar5 = puVar24[1];
      uVar6 = puVar24[2];
      uVar7 = puVar24[3];
      uVar8 = puVar24[4];
      uVar9 = puVar24[5];
      uVar10 = puVar24[6];
      uVar11 = puVar24[7];
      uVar12 = puVar24[8];
      uVar13 = puVar24[9];
      uVar14 = puVar24[10];
      uVar15 = puVar24[0xb];
      uVar16 = puVar24[0xc];
      uVar17 = puVar24[0xd];
      uVar18 = puVar24[0xe];
      uVar19 = puVar24[0xf];
      puVar29 = puVar24 + 0x10;
      *puVar30 = *puVar24;
      puVar30[1] = uVar5;
      puVar30[2] = uVar6;
      puVar30[3] = uVar7;
      puVar30[4] = uVar8;
      puVar30[5] = uVar9;
      puVar30[6] = uVar10;
      puVar30[7] = uVar11;
      puVar30[8] = uVar12;
      puVar30[9] = uVar13;
      puVar30[10] = uVar14;
      puVar30[0xb] = uVar15;
      puVar30[0xc] = uVar16;
      puVar30[0xd] = uVar17;
      puVar30[0xe] = uVar18;
      puVar30[0xf] = uVar19;
      puVar25 = puVar30 + 0x10;
      uVar22 = uVar28 - 0x80;
    } while (0x7f < uVar28);
    if (-0x41 < (long)(uVar28 - 0x80)) {
      uVar5 = *puVar29;
      uVar6 = puVar24[0x11];
      uVar7 = puVar24[0x12];
      uVar8 = puVar24[0x13];
      uVar9 = puVar24[0x14];
      uVar10 = puVar24[0x15];
      uVar11 = puVar24[0x16];
      uVar12 = puVar24[0x17];
      puVar29 = puVar24 + 0x18;
      *puVar25 = uVar5;
      puVar30[0x11] = uVar6;
      puVar30[0x12] = uVar7;
      puVar30[0x13] = uVar8;
      puVar30[0x14] = uVar9;
      puVar30[0x15] = uVar10;
      puVar30[0x16] = uVar11;
      puVar30[0x17] = uVar12;
      puVar25 = puVar30 + 0x18;
      uVar28 = uVar28 - 0x40;
    }
                    /* WARNING: Could not recover jumptable at 0x00724bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar28]))
                                ((long)puVar25 + uVar28,(long)puVar29 + uVar28,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar28]));
    return pcVar27;
  }
  uVar34 = (ulong)param_2 & 0xf;
  if (uVar34 != 0) {
    lVar23 = (long)*(int *)(&DAT_0082afb0 + uVar34 * 4);
    switch(uVar34) {
    case 1:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072282b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 2:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072297b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 3:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00722acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 4:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
      break;
    case 5:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00722d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 6:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00722ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 7:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072300b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 8:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd4 + lVar23 + 2);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afcc + lVar23 + 3);
      }
                    /* WARNING: Could not recover jumptable at 0x0072315b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 9:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007232ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 10:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007233fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 0xb:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072354b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 0xc:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072369b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 0xd:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007237eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 0xe:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072393b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    case 0xf:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd8 + lVar23);
      if (DAT_0093d718 <= uVar22) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082afd0 + lVar23 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00723a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar27;
    }
                    /* WARNING: Could not recover jumptable at 0x00722c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar27 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                (puVar29,param_2,uVar22 - 0x40,DAT_0093d718,param_1,
                                 UNRECOVERED_JUMPTABLE_00);
    return pcVar27;
  }
  uVar34 = uVar22 - 0x10;
  uVar7 = param_2[1];
  puVar25 = param_2 + 2;
  *puVar29 = *param_2;
  *(undefined8 *)(uVar28 + 0x18) = uVar7;
  puVar29 = (undefined8 *)(uVar28 + 0x20);
  *(undefined8 *)param_1 = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar6;
  if (uVar34 < 0x81) {
    if (0x3f < uVar34) {
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      uVar10 = param_2[8];
      uVar11 = param_2[9];
      *puVar29 = *puVar25;
      *(undefined8 *)(uVar28 + 0x28) = uVar5;
      *(undefined8 *)(uVar28 + 0x30) = uVar6;
      *(undefined8 *)(uVar28 + 0x38) = uVar7;
      *(undefined8 *)(uVar28 + 0x40) = uVar8;
      *(undefined8 *)(uVar28 + 0x48) = uVar9;
      *(undefined8 *)(uVar28 + 0x50) = uVar10;
      *(undefined8 *)(uVar28 + 0x58) = uVar11;
      uVar34 = uVar22 - 0x50;
      puVar25 = param_2 + 10;
      puVar29 = (undefined8 *)(uVar28 + 0x60);
    }
                    /* WARNING: Could not recover jumptable at 0x00722427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar34]))
                                ((long)puVar29 + uVar34,(long)puVar25 + uVar34,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar34]));
    return pcVar27;
  }
  uVar28 = uVar22 - 0x90;
  uVar22 = uVar22 - 0x90;
  if (DAT_0093d718 <= uVar34) {
    do {
      puVar30 = puVar29;
      puVar24 = puVar25;
      uVar22 = uVar28;
      uVar5 = puVar24[1];
      uVar6 = puVar24[2];
      uVar7 = puVar24[3];
      uVar8 = puVar24[4];
      uVar9 = puVar24[5];
      uVar10 = puVar24[6];
      uVar11 = puVar24[7];
      uVar12 = puVar24[8];
      uVar13 = puVar24[9];
      uVar14 = puVar24[10];
      uVar15 = puVar24[0xb];
      uVar16 = puVar24[0xc];
      uVar17 = puVar24[0xd];
      uVar18 = puVar24[0xe];
      uVar19 = puVar24[0xf];
      puVar25 = puVar24 + 0x10;
      *puVar30 = *puVar24;
      puVar30[1] = uVar5;
      puVar30[2] = uVar6;
      puVar30[3] = uVar7;
      puVar30[4] = uVar8;
      puVar30[5] = uVar9;
      puVar30[6] = uVar10;
      puVar30[7] = uVar11;
      puVar30[8] = uVar12;
      puVar30[9] = uVar13;
      puVar30[10] = uVar14;
      puVar30[0xb] = uVar15;
      puVar30[0xc] = uVar16;
      puVar30[0xd] = uVar17;
      puVar30[0xe] = uVar18;
      puVar30[0xf] = uVar19;
      puVar29 = puVar30 + 0x10;
      uVar28 = uVar22 - 0x80;
    } while (0x7f < uVar22);
    if (-0x41 < (long)(uVar22 - 0x80)) {
      uVar5 = puVar24[0x11];
      uVar22 = uVar22 - 0x40;
      uVar6 = puVar24[0x12];
      uVar7 = puVar24[0x13];
      *puVar29 = *puVar25;
      puVar30[0x11] = uVar5;
      puVar30[0x12] = uVar6;
      puVar30[0x13] = uVar7;
      uVar5 = puVar24[0x15];
      uVar6 = puVar24[0x16];
      uVar7 = puVar24[0x17];
      puVar25 = puVar24 + 0x18;
      puVar30[0x14] = puVar24[0x14];
      puVar30[0x15] = uVar5;
      puVar30[0x16] = uVar6;
      puVar30[0x17] = uVar7;
      puVar29 = puVar30 + 0x18;
    }
    if (0x1f < uVar22) {
      uVar5 = *puVar25;
      uVar6 = puVar25[1];
      uVar22 = uVar22 - 0x20;
      uVar7 = puVar25[2];
      uVar8 = puVar25[3];
      puVar25 = puVar25 + 4;
      *puVar29 = uVar5;
      puVar29[1] = uVar6;
      puVar29[2] = uVar7;
      puVar29[3] = uVar8;
      puVar29 = puVar29 + 4;
    }
                    /* WARNING: Could not recover jumptable at 0x007225eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar22]))
                                ((long)puVar29 + uVar22,(long)puVar25 + uVar22,
                                 (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                         (long)(int)(&switchD_007222f1::switchdataD_0082ae70)
                                                    [uVar22]));
    return pcVar27;
  }
  do {
    puVar30 = puVar29;
    puVar24 = puVar25;
    uVar28 = uVar22;
    uVar5 = puVar24[1];
    uVar6 = puVar24[2];
    uVar7 = puVar24[3];
    uVar8 = puVar24[4];
    uVar9 = puVar24[5];
    uVar10 = puVar24[6];
    uVar11 = puVar24[7];
    *puVar30 = *puVar24;
    puVar30[1] = uVar5;
    puVar30[2] = uVar6;
    puVar30[3] = uVar7;
    puVar30[4] = uVar8;
    puVar30[5] = uVar9;
    puVar30[6] = uVar10;
    puVar30[7] = uVar11;
    uVar5 = puVar24[9];
    uVar6 = puVar24[10];
    uVar7 = puVar24[0xb];
    uVar8 = puVar24[0xc];
    uVar9 = puVar24[0xd];
    uVar10 = puVar24[0xe];
    uVar11 = puVar24[0xf];
    puVar25 = puVar24 + 0x10;
    puVar30[8] = puVar24[8];
    puVar30[9] = uVar5;
    puVar30[10] = uVar6;
    puVar30[0xb] = uVar7;
    puVar30[0xc] = uVar8;
    puVar30[0xd] = uVar9;
    puVar30[0xe] = uVar10;
    puVar30[0xf] = uVar11;
    puVar29 = puVar30 + 0x10;
    uVar22 = uVar28 - 0x80;
  } while (0x7f < uVar28);
  if (-0x41 < (long)(uVar28 - 0x80)) {
    uVar5 = puVar24[0x11];
    uVar28 = uVar28 - 0x40;
    uVar6 = puVar24[0x12];
    uVar7 = puVar24[0x13];
    *puVar29 = *puVar25;
    puVar30[0x11] = uVar5;
    puVar30[0x12] = uVar6;
    puVar30[0x13] = uVar7;
    uVar5 = puVar24[0x15];
    uVar6 = puVar24[0x16];
    uVar7 = puVar24[0x17];
    puVar25 = puVar24 + 0x18;
    puVar30[0x14] = puVar24[0x14];
    puVar30[0x15] = uVar5;
    puVar30[0x16] = uVar6;
    puVar30[0x17] = uVar7;
    puVar29 = puVar30 + 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x007224ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar27 = (char *)(*(code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                              (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar28]))
                              ((long)puVar29 + uVar28,(long)puVar25 + uVar28,
                               (code *)((long)&switchD_007222f1::switchdataD_0082ae70 +
                                       (long)(int)(&switchD_007222f1::switchdataD_0082ae70)[uVar28])
                              );
  return pcVar27;
}

