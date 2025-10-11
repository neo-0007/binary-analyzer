
long __mempcpy_ssse3(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
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
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar19 = (long)param_1 + param_3;
  switch(param_3) {
  case 0:
    return lVar19;
  case 1:
    *(undefined1 *)((long)param_1 + param_3 + -1) = *(undefined1 *)((long)param_2 + param_3 + -1);
    return lVar19;
  case 2:
    *(undefined2 *)((long)param_1 + param_3 + -2) = *(undefined2 *)((long)param_2 + param_3 + -2);
    return lVar19;
  case 3:
    uVar2 = *(undefined2 *)((long)param_2 + param_3 + -2);
    *(undefined2 *)((long)param_1 + param_3 + -3) = *(undefined2 *)((long)param_2 + param_3 + -3);
    *(undefined2 *)((long)param_1 + param_3 + -2) = uVar2;
    return lVar19;
  case 4:
    *(undefined4 *)((long)param_1 + param_3 + -4) = *(undefined4 *)((long)param_2 + param_3 + -4);
    return lVar19;
  case 5:
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined4 *)((long)param_1 + param_3 + -5) = *(undefined4 *)((long)param_2 + param_3 + -5);
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 6:
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined4 *)((long)param_1 + param_3 + -6) = *(undefined4 *)((long)param_2 + param_3 + -6);
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 7:
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined4 *)((long)param_1 + param_3 + -7) = *(undefined4 *)((long)param_2 + param_3 + -7);
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 8:
    *(undefined8 *)((long)param_1 + param_3 + -8) = *(undefined8 *)((long)param_2 + param_3 + -8);
    return lVar19;
  case 9:
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -9) = *(undefined8 *)((long)param_2 + param_3 + -9);
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 10:
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -10) = *(undefined8 *)((long)param_2 + param_3 + -10);
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0xb:
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0xb) =
         *(undefined8 *)((long)param_2 + param_3 + -0xb);
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0xc:
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0xc) =
         *(undefined8 *)((long)param_2 + param_3 + -0xc);
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0xd:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0xd) =
         *(undefined8 *)((long)param_2 + param_3 + -0xd);
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar4;
    return lVar19;
  case 0xe:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0xe) =
         *(undefined8 *)((long)param_2 + param_3 + -0xe);
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar4;
    return lVar19;
  case 0xf:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0xf) =
         *(undefined8 *)((long)param_2 + param_3 + -0xf);
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar4;
    return lVar19;
  case 0x10:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x10) =
         *(undefined8 *)((long)param_2 + param_3 + -0x10);
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar4;
    return lVar19;
  case 0x11:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x11) =
         *(undefined8 *)((long)param_2 + param_3 + -0x11);
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar4;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x12:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x12) =
         *(undefined8 *)((long)param_2 + param_3 + -0x12);
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar4;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x13:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x13) =
         *(undefined8 *)((long)param_2 + param_3 + -0x13);
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar4;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x14:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x14) =
         *(undefined8 *)((long)param_2 + param_3 + -0x14);
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar4;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x15:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x15) =
         *(undefined8 *)((long)param_2 + param_3 + -0x15);
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar5;
    return lVar19;
  case 0x16:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x16) =
         *(undefined8 *)((long)param_2 + param_3 + -0x16);
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar5;
    return lVar19;
  case 0x17:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x17) =
         *(undefined8 *)((long)param_2 + param_3 + -0x17);
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar5;
    return lVar19;
  case 0x18:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x18) =
         *(undefined8 *)((long)param_2 + param_3 + -0x18);
    *(undefined8 *)((long)param_1 + param_3 + -0x10) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar5;
    return lVar19;
  case 0x19:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x11);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar1 = *(undefined1 *)((long)param_2 + param_3 + -1);
    *(undefined8 *)((long)param_1 + param_3 + -0x19) =
         *(undefined8 *)((long)param_2 + param_3 + -0x19);
    *(undefined8 *)((long)param_1 + param_3 + -0x11) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar5;
    *(undefined1 *)((long)param_1 + param_3 + -1) = uVar1;
    return lVar19;
  case 0x1a:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x12);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x1a) =
         *(undefined8 *)((long)param_2 + param_3 + -0x1a);
    *(undefined8 *)((long)param_1 + param_3 + -0x12) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar5;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x1b:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x13);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x1b) =
         *(undefined8 *)((long)param_2 + param_3 + -0x1b);
    *(undefined8 *)((long)param_1 + param_3 + -0x13) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar5;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x1c:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x14);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x1c) =
         *(undefined8 *)((long)param_2 + param_3 + -0x1c);
    *(undefined8 *)((long)param_1 + param_3 + -0x14) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar5;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x1d:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x15);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x1d) =
         *(undefined8 *)((long)param_2 + param_3 + -0x1d);
    *(undefined8 *)((long)param_1 + param_3 + -0x15) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar6;
    return lVar19;
  case 0x1e:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x16);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x1e) =
         *(undefined8 *)((long)param_2 + param_3 + -0x1e);
    *(undefined8 *)((long)param_1 + param_3 + -0x16) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar6;
    return lVar19;
  case 0x1f:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x17);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x1f) =
         *(undefined8 *)((long)param_2 + param_3 + -0x1f);
    *(undefined8 *)((long)param_1 + param_3 + -0x17) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar6;
    return lVar19;
  case 0x20:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x18);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x20) =
         *(undefined8 *)((long)param_2 + param_3 + -0x20);
    *(undefined8 *)((long)param_1 + param_3 + -0x18) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x10) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar6;
    return lVar19;
  case 0x21:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x19);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x11);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar1 = *(undefined1 *)((long)param_2 + param_3 + -1);
    *(undefined8 *)((long)param_1 + param_3 + -0x21) =
         *(undefined8 *)((long)param_2 + param_3 + -0x21);
    *(undefined8 *)((long)param_1 + param_3 + -0x19) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x11) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar6;
    *(undefined1 *)((long)param_1 + param_3 + -1) = uVar1;
    return lVar19;
  case 0x22:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x1a);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x12);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x22) =
         *(undefined8 *)((long)param_2 + param_3 + -0x22);
    *(undefined8 *)((long)param_1 + param_3 + -0x1a) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x12) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar6;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x23:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x1b);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x13);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x23) =
         *(undefined8 *)((long)param_2 + param_3 + -0x23);
    *(undefined8 *)((long)param_1 + param_3 + -0x1b) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x13) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar6;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x24:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x1c);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x14);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x24) =
         *(undefined8 *)((long)param_2 + param_3 + -0x24);
    *(undefined8 *)((long)param_1 + param_3 + -0x1c) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x14) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar6;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x25:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x1d);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x15);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x25) =
         *(undefined8 *)((long)param_2 + param_3 + -0x25);
    *(undefined8 *)((long)param_1 + param_3 + -0x1d) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x15) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar7;
    return lVar19;
  case 0x26:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x1e);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x16);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x26) =
         *(undefined8 *)((long)param_2 + param_3 + -0x26);
    *(undefined8 *)((long)param_1 + param_3 + -0x1e) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x16) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar7;
    return lVar19;
  case 0x27:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x1f);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x17);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x27) =
         *(undefined8 *)((long)param_2 + param_3 + -0x27);
    *(undefined8 *)((long)param_1 + param_3 + -0x1f) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x17) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar7;
    return lVar19;
  case 0x28:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x20);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x18);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x28) =
         *(undefined8 *)((long)param_2 + param_3 + -0x28);
    *(undefined8 *)((long)param_1 + param_3 + -0x20) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x18) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x10) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar7;
    return lVar19;
  case 0x29:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x21);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x19);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x11);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar1 = *(undefined1 *)((long)param_2 + param_3 + -1);
    *(undefined8 *)((long)param_1 + param_3 + -0x29) =
         *(undefined8 *)((long)param_2 + param_3 + -0x29);
    *(undefined8 *)((long)param_1 + param_3 + -0x21) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x19) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x11) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar7;
    *(undefined1 *)((long)param_1 + param_3 + -1) = uVar1;
    return lVar19;
  case 0x2a:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x22);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1a);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x12);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x2a) =
         *(undefined8 *)((long)param_2 + param_3 + -0x2a);
    *(undefined8 *)((long)param_1 + param_3 + -0x22) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1a) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x12) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x2b:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x23);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1b);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x13);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x2b) =
         *(undefined8 *)((long)param_2 + param_3 + -0x2b);
    *(undefined8 *)((long)param_1 + param_3 + -0x23) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1b) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x13) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x2c:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x24);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1c);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x14);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x2c) =
         *(undefined8 *)((long)param_2 + param_3 + -0x2c);
    *(undefined8 *)((long)param_1 + param_3 + -0x24) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1c) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x14) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x2d:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x25);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1d);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x15);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x2d) =
         *(undefined8 *)((long)param_2 + param_3 + -0x2d);
    *(undefined8 *)((long)param_1 + param_3 + -0x25) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1d) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x15) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x2e:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x26);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1e);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x16);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x2e) =
         *(undefined8 *)((long)param_2 + param_3 + -0x2e);
    *(undefined8 *)((long)param_1 + param_3 + -0x26) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1e) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x16) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x2f:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x27);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1f);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x17);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x2f) =
         *(undefined8 *)((long)param_2 + param_3 + -0x2f);
    *(undefined8 *)((long)param_1 + param_3 + -0x27) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1f) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x17) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x30:
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x28);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x20);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x18);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x30) =
         *(undefined8 *)((long)param_2 + param_3 + -0x30);
    *(undefined8 *)((long)param_1 + param_3 + -0x28) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x20) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x18) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x10) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x31:
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0x29);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x21);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x19);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x11);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x31) =
         *(undefined8 *)((long)param_2 + param_3 + -0x31);
    *(undefined8 *)((long)param_1 + param_3 + -0x29) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -0x21) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x19) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x11) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x32:
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0x2a);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x22);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1a);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x12);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x32) =
         *(undefined8 *)((long)param_2 + param_3 + -0x32);
    *(undefined8 *)((long)param_1 + param_3 + -0x2a) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -0x22) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1a) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x12) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x33:
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0x2b);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x23);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1b);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x13);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x33) =
         *(undefined8 *)((long)param_2 + param_3 + -0x33);
    *(undefined8 *)((long)param_1 + param_3 + -0x2b) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -0x23) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1b) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x13) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x34:
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0x2c);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x24);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1c);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x14);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x34) =
         *(undefined8 *)((long)param_2 + param_3 + -0x34);
    *(undefined8 *)((long)param_1 + param_3 + -0x2c) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -0x24) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1c) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x14) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x35:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x2d);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x25);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1d);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x15);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x35) =
         *(undefined8 *)((long)param_2 + param_3 + -0x35);
    *(undefined8 *)((long)param_1 + param_3 + -0x2d) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x25) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1d) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x15) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x36:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x2e);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x26);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1e);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x16);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x36) =
         *(undefined8 *)((long)param_2 + param_3 + -0x36);
    *(undefined8 *)((long)param_1 + param_3 + -0x2e) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x26) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1e) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x16) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x37:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x2f);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x27);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1f);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x17);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x37) =
         *(undefined8 *)((long)param_2 + param_3 + -0x37);
    *(undefined8 *)((long)param_1 + param_3 + -0x2f) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x27) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1f) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x17) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x38:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x30);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x28);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x20);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x18);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x38) =
         *(undefined8 *)((long)param_2 + param_3 + -0x38);
    *(undefined8 *)((long)param_1 + param_3 + -0x30) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x28) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x20) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x18) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x10) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x39:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x31);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x29);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x21);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x19);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x11);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x39) =
         *(undefined8 *)((long)param_2 + param_3 + -0x39);
    *(undefined8 *)((long)param_1 + param_3 + -0x31) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x29) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x21) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x19) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x11) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x3a:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x32);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2a);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x22);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1a);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x12);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x3a) =
         *(undefined8 *)((long)param_2 + param_3 + -0x3a);
    *(undefined8 *)((long)param_1 + param_3 + -0x32) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x2a) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x22) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1a) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x12) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x3b:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x33);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2b);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x23);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1b);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x13);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x3b) =
         *(undefined8 *)((long)param_2 + param_3 + -0x3b);
    *(undefined8 *)((long)param_1 + param_3 + -0x33) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x2b) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x23) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1b) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x13) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x3c:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x34);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2c);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x24);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1c);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x14);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x3c) =
         *(undefined8 *)((long)param_2 + param_3 + -0x3c);
    *(undefined8 *)((long)param_1 + param_3 + -0x34) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x2c) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x24) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1c) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x14) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x3d:
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x35);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2d);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x25);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1d);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x15);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x3d) =
         *(undefined8 *)((long)param_2 + param_3 + -0x3d);
    *(undefined8 *)((long)param_1 + param_3 + -0x35) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x2d) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x25) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1d) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x15) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar9;
    return lVar19;
  case 0x3e:
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x36);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2e);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x26);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1e);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x16);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x3e) =
         *(undefined8 *)((long)param_2 + param_3 + -0x3e);
    *(undefined8 *)((long)param_1 + param_3 + -0x36) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x2e) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x26) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1e) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x16) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar9;
    return lVar19;
  case 0x3f:
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x37);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2f);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x27);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1f);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x17);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x3f) =
         *(undefined8 *)((long)param_2 + param_3 + -0x3f);
    *(undefined8 *)((long)param_1 + param_3 + -0x37) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x2f) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x27) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1f) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x17) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar9;
    return lVar19;
  case 0x40:
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x38);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x30);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x28);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x20);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x18);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x40) =
         *(undefined8 *)((long)param_2 + param_3 + -0x40);
    *(undefined8 *)((long)param_1 + param_3 + -0x38) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x30) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x28) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x20) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x18) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0x10) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar9;
    return lVar19;
  case 0x41:
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0x39);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x31);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x29);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x21);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x19);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x11);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x41) =
         *(undefined8 *)((long)param_2 + param_3 + -0x41);
    *(undefined8 *)((long)param_1 + param_3 + -0x39) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -0x31) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x29) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x21) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x19) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x11) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x42:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x3a);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x32);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x2a);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2a);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x22);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1a);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x12);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x42) =
         *(undefined8 *)((long)param_2 + param_3 + -0x42);
    *(undefined8 *)((long)param_1 + param_3 + -0x3a) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x32) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x2a) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x2a) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x22) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1a) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x12) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x43:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x3b);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x3b);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x33);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2b);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x23);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1b);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x13);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x43) =
         *(undefined8 *)((long)param_2 + param_3 + -0x43);
    *(undefined8 *)((long)param_1 + param_3 + -0x3b) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x3b) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x33) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x2b) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x23) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1b) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x13) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x44:
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0x3c);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x34);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x2c);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x24);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1c);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x14);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x44) =
         *(undefined8 *)((long)param_2 + param_3 + -0x44);
    *(undefined8 *)((long)param_1 + param_3 + -0x3c) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -0x34) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x2c) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x24) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1c) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x14) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar7;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x45:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x3d);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x35);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x2d);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x25);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1d);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x15);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x45) =
         *(undefined8 *)((long)param_2 + param_3 + -0x45);
    *(undefined8 *)((long)param_1 + param_3 + -0x3d) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x35) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x2d) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x25) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1d) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x15) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x46:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x3e);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x36);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x2e);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x26);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1e);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x16);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x46) =
         *(undefined8 *)((long)param_2 + param_3 + -0x46);
    *(undefined8 *)((long)param_1 + param_3 + -0x3e) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x36) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x2e) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x26) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1e) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x16) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x47:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x3f);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x37);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x2f);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x27);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x1f);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x17);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x47) =
         *(undefined8 *)((long)param_2 + param_3 + -0x47);
    *(undefined8 *)((long)param_1 + param_3 + -0x3f) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x37) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x2f) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x27) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x1f) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x17) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x48:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x40);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x38);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x30);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x28);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x20);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x18);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x48) =
         *(undefined8 *)((long)param_2 + param_3 + -0x48);
    *(undefined8 *)((long)param_1 + param_3 + -0x40) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x38) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x30) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x28) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x20) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x18) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x10) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar8;
    return lVar19;
  case 0x49:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x41);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x39);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x31);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x29);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x21);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x19);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x11);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -9);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x49) =
         *(undefined8 *)((long)param_2 + param_3 + -0x49);
    *(undefined8 *)((long)param_1 + param_3 + -0x41) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x39) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x31) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x29) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x21) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x19) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x11) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -9) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x4a:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x42);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x3a);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x32);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2a);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x22);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1a);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x12);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -10);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x4a) =
         *(undefined8 *)((long)param_2 + param_3 + -0x4a);
    *(undefined8 *)((long)param_1 + param_3 + -0x42) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x3a) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x32) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x2a) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x22) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1a) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x12) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -10) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x4b:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x43);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x3b);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x33);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2b);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x23);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1b);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x13);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xb);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x4b) =
         *(undefined8 *)((long)param_2 + param_3 + -0x4b);
    *(undefined8 *)((long)param_1 + param_3 + -0x43) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x3b) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x33) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x2b) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x23) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1b) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x13) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xb) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x4c:
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -0x44);
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x3c);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x34);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2c);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x24);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1c);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x14);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xc);
    uVar3 = *(undefined4 *)((long)param_2 + param_3 + -4);
    *(undefined8 *)((long)param_1 + param_3 + -0x4c) =
         *(undefined8 *)((long)param_2 + param_3 + -0x4c);
    *(undefined8 *)((long)param_1 + param_3 + -0x44) = uVar9;
    *(undefined8 *)((long)param_1 + param_3 + -0x3c) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x34) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x2c) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x24) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1c) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x14) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xc) = uVar8;
    *(undefined4 *)((long)param_1 + param_3 + -4) = uVar3;
    return lVar19;
  case 0x4d:
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x45);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x3d);
    uVar12 = *(undefined8 *)((long)param_2 + param_3 + -0x35);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2d);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x25);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1d);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x15);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xd);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x4d) =
         *(undefined8 *)((long)param_2 + param_3 + -0x4d);
    *(undefined8 *)((long)param_1 + param_3 + -0x45) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x3d) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x35) = uVar12;
    *(undefined8 *)((long)param_1 + param_3 + -0x2d) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x25) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1d) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x15) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xd) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar9;
    return lVar19;
  case 0x4e:
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x46);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x3e);
    uVar12 = *(undefined8 *)((long)param_2 + param_3 + -0x36);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2e);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x26);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1e);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x16);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xe);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x4e) =
         *(undefined8 *)((long)param_2 + param_3 + -0x4e);
    *(undefined8 *)((long)param_1 + param_3 + -0x46) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x3e) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x36) = uVar12;
    *(undefined8 *)((long)param_1 + param_3 + -0x2e) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x26) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1e) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x16) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xe) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar9;
    return lVar19;
  case 0x4f:
    uVar10 = *(undefined8 *)((long)param_2 + param_3 + -0x47);
    uVar11 = *(undefined8 *)((long)param_2 + param_3 + -0x3f);
    uVar12 = *(undefined8 *)((long)param_2 + param_3 + -0x37);
    uVar4 = *(undefined8 *)((long)param_2 + param_3 + -0x2f);
    uVar5 = *(undefined8 *)((long)param_2 + param_3 + -0x27);
    uVar6 = *(undefined8 *)((long)param_2 + param_3 + -0x1f);
    uVar7 = *(undefined8 *)((long)param_2 + param_3 + -0x17);
    uVar8 = *(undefined8 *)((long)param_2 + param_3 + -0xf);
    uVar9 = *(undefined8 *)((long)param_2 + param_3 + -8);
    *(undefined8 *)((long)param_1 + param_3 + -0x4f) =
         *(undefined8 *)((long)param_2 + param_3 + -0x4f);
    *(undefined8 *)((long)param_1 + param_3 + -0x47) = uVar10;
    *(undefined8 *)((long)param_1 + param_3 + -0x3f) = uVar11;
    *(undefined8 *)((long)param_1 + param_3 + -0x37) = uVar12;
    *(undefined8 *)((long)param_1 + param_3 + -0x2f) = uVar4;
    *(undefined8 *)((long)param_1 + param_3 + -0x27) = uVar5;
    *(undefined8 *)((long)param_1 + param_3 + -0x1f) = uVar6;
    *(undefined8 *)((long)param_1 + param_3 + -0x17) = uVar7;
    *(undefined8 *)((long)param_1 + param_3 + -0xf) = uVar8;
    *(undefined8 *)((long)param_1 + param_3 + -8) = uVar9;
    return lVar19;
  }
  if ((char)param_2 <= (char)param_1) {
    puVar25 = (undefined8 *)((long)param_2 + param_3 + -0x10);
    uVar4 = *puVar25;
    uVar5 = puVar25[1];
    puVar25 = (undefined8 *)((long)param_1 + param_3 + -0x10);
    uVar20 = (long)param_1 + param_3 & 0xf;
    uVar29 = (long)param_1 + param_3 ^ uVar20;
    uVar24 = param_3 - uVar20;
    uVar20 = (long)param_2 + (param_3 - uVar20);
    if (__x86_shared_cache_size_half < uVar24) {
      uVar6 = *(undefined8 *)(uVar20 - 0x10);
      uVar7 = *(undefined8 *)(uVar20 - 8);
      *puVar25 = uVar4;
      puVar25[1] = uVar5;
      *(undefined8 *)(uVar29 - 0x10) = uVar6;
      *(undefined8 *)(uVar29 - 8) = uVar7;
      uVar24 = uVar24 - 0x90;
      lVar19 = uVar20 - 0x10;
      lVar27 = uVar29 - 0x10;
      do {
        lVar28 = lVar27;
        lVar23 = lVar19;
        uVar20 = uVar24;
        uVar4 = *(undefined8 *)(lVar23 + -8);
        uVar5 = *(undefined8 *)(lVar23 + -0x20);
        uVar6 = *(undefined8 *)(lVar23 + -0x18);
        uVar7 = *(undefined8 *)(lVar23 + -0x30);
        uVar8 = *(undefined8 *)(lVar23 + -0x28);
        uVar9 = *(undefined8 *)(lVar23 + -0x40);
        uVar10 = *(undefined8 *)(lVar23 + -0x38);
        uVar11 = *(undefined8 *)(lVar23 + -0x50);
        uVar12 = *(undefined8 *)(lVar23 + -0x48);
        uVar13 = *(undefined8 *)(lVar23 + -0x60);
        uVar14 = *(undefined8 *)(lVar23 + -0x58);
        uVar15 = *(undefined8 *)(lVar23 + -0x70);
        uVar16 = *(undefined8 *)(lVar23 + -0x68);
        uVar17 = *(undefined8 *)(lVar23 + -0x80);
        uVar18 = *(undefined8 *)(lVar23 + -0x78);
        lVar19 = lVar23 + -0x80;
        *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar23 + -0x10);
        *(undefined8 *)(lVar28 + -8) = uVar4;
        *(undefined8 *)(lVar28 + -0x20) = uVar5;
        *(undefined8 *)(lVar28 + -0x18) = uVar6;
        *(undefined8 *)(lVar28 + -0x30) = uVar7;
        *(undefined8 *)(lVar28 + -0x28) = uVar8;
        *(undefined8 *)(lVar28 + -0x40) = uVar9;
        *(undefined8 *)(lVar28 + -0x38) = uVar10;
        *(undefined8 *)(lVar28 + -0x50) = uVar11;
        *(undefined8 *)(lVar28 + -0x48) = uVar12;
        *(undefined8 *)(lVar28 + -0x60) = uVar13;
        *(undefined8 *)(lVar28 + -0x58) = uVar14;
        *(undefined8 *)(lVar28 + -0x70) = uVar15;
        *(undefined8 *)(lVar28 + -0x68) = uVar16;
        *(undefined8 *)(lVar28 + -0x80) = uVar17;
        *(undefined8 *)(lVar28 + -0x78) = uVar18;
        lVar27 = lVar28 + -0x80;
        uVar24 = uVar20 - 0x80;
      } while (0x7f < uVar20);
      if (-0x41 < (long)(uVar20 - 0x80)) {
        uVar4 = *(undefined8 *)(lVar23 + -0x88);
        uVar5 = *(undefined8 *)(lVar23 + -0xa0);
        uVar6 = *(undefined8 *)(lVar23 + -0x98);
        uVar7 = *(undefined8 *)(lVar23 + -0xb0);
        uVar8 = *(undefined8 *)(lVar23 + -0xa8);
        uVar9 = *(undefined8 *)(lVar23 + -0xc0);
        uVar10 = *(undefined8 *)(lVar23 + -0xb8);
        lVar19 = lVar23 + -0xc0;
        *(undefined8 *)(lVar28 + -0x90) = *(undefined8 *)(lVar23 + -0x90);
        *(undefined8 *)(lVar28 + -0x88) = uVar4;
        *(undefined8 *)(lVar28 + -0xa0) = uVar5;
        *(undefined8 *)(lVar28 + -0x98) = uVar6;
        *(undefined8 *)(lVar28 + -0xb0) = uVar7;
        *(undefined8 *)(lVar28 + -0xa8) = uVar8;
        *(undefined8 *)(lVar28 + -0xc0) = uVar9;
        *(undefined8 *)(lVar28 + -0xb8) = uVar10;
        lVar27 = lVar28 + -0xc0;
        uVar20 = uVar20 - 0x40;
      }
                    /* WARNING: Could not recover jumptable at 0x0071b292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                         (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar20]))
                         (lVar27,lVar19,
                          (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                                  (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar20]));
      return lVar19;
    }
    uVar30 = uVar20 & 0xf;
    if (uVar30 != 0) {
      lVar19 = (long)*(int *)(&DAT_00820dd0 + uVar30 * 4);
      switch(uVar30) {
      case 1:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00718edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 2:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0071902b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 3:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0071917b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 4:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
        break;
      case 5:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0071941b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 6:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0071956b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 7:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x007196bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 8:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0071980b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 9:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0071995b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 10:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00719aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 0xb:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00719bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 0xc:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00719d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 0xd:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00719e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 0xe:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x00719feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      case 0xf:
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df8 + lVar19);
        if (__x86_data_cache_size_half <= uVar24) {
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820df0 + lVar19 + 1);
        }
                    /* WARNING: Could not recover jumptable at 0x0071a13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                           (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                            UNRECOVERED_JUMPTABLE_00);
        return lVar19;
      }
                    /* WARNING: Could not recover jumptable at 0x007192cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (uVar29,uVar20,uVar24 - 0x40,__x86_data_cache_size_half,puVar25,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    }
    uVar30 = uVar24 - 0x10;
    uVar6 = *(undefined8 *)(uVar20 - 8);
    lVar19 = uVar20 - 0x10;
    *(undefined8 *)(uVar29 - 0x10) = *(undefined8 *)(uVar20 - 0x10);
    *(undefined8 *)(uVar29 - 8) = uVar6;
    lVar27 = uVar29 - 0x10;
    *puVar25 = uVar4;
    puVar25[1] = uVar5;
    if (uVar30 < 0x81) {
      if (0x3f < uVar30) {
        uVar4 = *(undefined8 *)(uVar20 - 0x18);
        uVar5 = *(undefined8 *)(uVar20 - 0x30);
        uVar6 = *(undefined8 *)(uVar20 - 0x28);
        uVar7 = *(undefined8 *)(uVar20 - 0x40);
        uVar8 = *(undefined8 *)(uVar20 - 0x38);
        uVar9 = *(undefined8 *)(uVar20 - 0x50);
        uVar10 = *(undefined8 *)(uVar20 - 0x48);
        *(undefined8 *)(uVar29 - 0x20) = *(undefined8 *)(uVar20 - 0x20);
        *(undefined8 *)(uVar29 - 0x18) = uVar4;
        *(undefined8 *)(uVar29 - 0x30) = uVar5;
        *(undefined8 *)(uVar29 - 0x28) = uVar6;
        *(undefined8 *)(uVar29 - 0x40) = uVar7;
        *(undefined8 *)(uVar29 - 0x38) = uVar8;
        *(undefined8 *)(uVar29 - 0x50) = uVar9;
        *(undefined8 *)(uVar29 - 0x48) = uVar10;
        uVar30 = uVar24 - 0x50;
        lVar19 = uVar20 - 0x50;
        lVar27 = uVar29 - 0x50;
      }
                    /* WARNING: Could not recover jumptable at 0x00718c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                         (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar30]))
                         (lVar27,lVar19,
                          (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                                  (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar30]));
      return lVar19;
    }
    uVar20 = uVar24 - 0x90;
    if (uVar30 < __x86_data_cache_size_half) {
      do {
        lVar28 = lVar27;
        lVar23 = lVar19;
        uVar24 = uVar20;
        uVar4 = *(undefined8 *)(lVar23 + -8);
        uVar5 = *(undefined8 *)(lVar23 + -0x20);
        uVar6 = *(undefined8 *)(lVar23 + -0x18);
        uVar7 = *(undefined8 *)(lVar23 + -0x30);
        uVar8 = *(undefined8 *)(lVar23 + -0x28);
        uVar9 = *(undefined8 *)(lVar23 + -0x40);
        uVar10 = *(undefined8 *)(lVar23 + -0x38);
        *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar23 + -0x10);
        *(undefined8 *)(lVar28 + -8) = uVar4;
        *(undefined8 *)(lVar28 + -0x20) = uVar5;
        *(undefined8 *)(lVar28 + -0x18) = uVar6;
        *(undefined8 *)(lVar28 + -0x30) = uVar7;
        *(undefined8 *)(lVar28 + -0x28) = uVar8;
        *(undefined8 *)(lVar28 + -0x40) = uVar9;
        *(undefined8 *)(lVar28 + -0x38) = uVar10;
        uVar4 = *(undefined8 *)(lVar23 + -0x48);
        uVar5 = *(undefined8 *)(lVar23 + -0x60);
        uVar6 = *(undefined8 *)(lVar23 + -0x58);
        uVar7 = *(undefined8 *)(lVar23 + -0x70);
        uVar8 = *(undefined8 *)(lVar23 + -0x68);
        uVar9 = *(undefined8 *)(lVar23 + -0x80);
        uVar10 = *(undefined8 *)(lVar23 + -0x78);
        lVar19 = lVar23 + -0x80;
        *(undefined8 *)(lVar28 + -0x50) = *(undefined8 *)(lVar23 + -0x50);
        *(undefined8 *)(lVar28 + -0x48) = uVar4;
        *(undefined8 *)(lVar28 + -0x60) = uVar5;
        *(undefined8 *)(lVar28 + -0x58) = uVar6;
        *(undefined8 *)(lVar28 + -0x70) = uVar7;
        *(undefined8 *)(lVar28 + -0x68) = uVar8;
        *(undefined8 *)(lVar28 + -0x80) = uVar9;
        *(undefined8 *)(lVar28 + -0x78) = uVar10;
        lVar27 = lVar28 + -0x80;
        uVar20 = uVar24 - 0x80;
      } while (0x7f < uVar24);
      if (-0x41 < (long)(uVar24 - 0x80)) {
        uVar4 = *(undefined8 *)(lVar23 + -0x88);
        uVar24 = uVar24 - 0x40;
        uVar5 = *(undefined8 *)(lVar23 + -0xa0);
        uVar6 = *(undefined8 *)(lVar23 + -0x98);
        *(undefined8 *)(lVar28 + -0x90) = *(undefined8 *)(lVar23 + -0x90);
        *(undefined8 *)(lVar28 + -0x88) = uVar4;
        *(undefined8 *)(lVar28 + -0xa0) = uVar5;
        *(undefined8 *)(lVar28 + -0x98) = uVar6;
        uVar4 = *(undefined8 *)(lVar23 + -0xa8);
        uVar5 = *(undefined8 *)(lVar23 + -0xc0);
        uVar6 = *(undefined8 *)(lVar23 + -0xb8);
        lVar19 = lVar23 + -0xc0;
        *(undefined8 *)(lVar28 + -0xb0) = *(undefined8 *)(lVar23 + -0xb0);
        *(undefined8 *)(lVar28 + -0xa8) = uVar4;
        *(undefined8 *)(lVar28 + -0xc0) = uVar5;
        *(undefined8 *)(lVar28 + -0xb8) = uVar6;
        lVar27 = lVar28 + -0xc0;
      }
                    /* WARNING: Could not recover jumptable at 0x00718d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                         (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]))
                         (lVar27,lVar19,
                          (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                                  (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]));
      return lVar19;
    }
    do {
      lVar28 = lVar27;
      lVar23 = lVar19;
      uVar24 = uVar20;
      uVar4 = *(undefined8 *)(lVar23 + -8);
      uVar5 = *(undefined8 *)(lVar23 + -0x20);
      uVar6 = *(undefined8 *)(lVar23 + -0x18);
      uVar7 = *(undefined8 *)(lVar23 + -0x30);
      uVar8 = *(undefined8 *)(lVar23 + -0x28);
      uVar9 = *(undefined8 *)(lVar23 + -0x40);
      uVar10 = *(undefined8 *)(lVar23 + -0x38);
      uVar11 = *(undefined8 *)(lVar23 + -0x50);
      uVar12 = *(undefined8 *)(lVar23 + -0x48);
      uVar13 = *(undefined8 *)(lVar23 + -0x60);
      uVar14 = *(undefined8 *)(lVar23 + -0x58);
      uVar15 = *(undefined8 *)(lVar23 + -0x70);
      uVar16 = *(undefined8 *)(lVar23 + -0x68);
      uVar17 = *(undefined8 *)(lVar23 + -0x80);
      uVar18 = *(undefined8 *)(lVar23 + -0x78);
      lVar19 = lVar23 + -0x80;
      *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar23 + -0x10);
      *(undefined8 *)(lVar28 + -8) = uVar4;
      *(undefined8 *)(lVar28 + -0x20) = uVar5;
      *(undefined8 *)(lVar28 + -0x18) = uVar6;
      *(undefined8 *)(lVar28 + -0x30) = uVar7;
      *(undefined8 *)(lVar28 + -0x28) = uVar8;
      *(undefined8 *)(lVar28 + -0x40) = uVar9;
      *(undefined8 *)(lVar28 + -0x38) = uVar10;
      *(undefined8 *)(lVar28 + -0x50) = uVar11;
      *(undefined8 *)(lVar28 + -0x48) = uVar12;
      *(undefined8 *)(lVar28 + -0x60) = uVar13;
      *(undefined8 *)(lVar28 + -0x58) = uVar14;
      *(undefined8 *)(lVar28 + -0x70) = uVar15;
      *(undefined8 *)(lVar28 + -0x68) = uVar16;
      *(undefined8 *)(lVar28 + -0x80) = uVar17;
      *(undefined8 *)(lVar28 + -0x78) = uVar18;
      lVar27 = lVar28 + -0x80;
      uVar20 = uVar24 - 0x80;
    } while (0x7f < uVar24);
    if (-0x41 < (long)(uVar24 - 0x80)) {
      uVar4 = *(undefined8 *)(lVar23 + -0x88);
      uVar24 = uVar24 - 0x40;
      uVar5 = *(undefined8 *)(lVar23 + -0xa0);
      uVar6 = *(undefined8 *)(lVar23 + -0x98);
      *(undefined8 *)(lVar28 + -0x90) = *(undefined8 *)(lVar23 + -0x90);
      *(undefined8 *)(lVar28 + -0x88) = uVar4;
      *(undefined8 *)(lVar28 + -0xa0) = uVar5;
      *(undefined8 *)(lVar28 + -0x98) = uVar6;
      uVar4 = *(undefined8 *)(lVar23 + -0xa8);
      uVar5 = *(undefined8 *)(lVar23 + -0xc0);
      uVar6 = *(undefined8 *)(lVar23 + -0xb8);
      lVar19 = lVar23 + -0xc0;
      *(undefined8 *)(lVar28 + -0xb0) = *(undefined8 *)(lVar23 + -0xb0);
      *(undefined8 *)(lVar28 + -0xa8) = uVar4;
      *(undefined8 *)(lVar28 + -0xc0) = uVar5;
      *(undefined8 *)(lVar28 + -0xb8) = uVar6;
      lVar27 = lVar28 + -0xc0;
    }
    if (0x1f < uVar24) {
      puVar25 = (undefined8 *)(lVar19 + -0x10);
      uVar4 = *(undefined8 *)(lVar19 + -8);
      uVar24 = uVar24 - 0x20;
      uVar5 = *(undefined8 *)(lVar19 + -0x20);
      uVar6 = *(undefined8 *)(lVar19 + -0x18);
      lVar19 = lVar19 + -0x20;
      *(undefined8 *)(lVar27 + -0x10) = *puVar25;
      *(undefined8 *)(lVar27 + -8) = uVar4;
      *(undefined8 *)(lVar27 + -0x20) = uVar5;
      *(undefined8 *)(lVar27 + -0x18) = uVar6;
      lVar27 = lVar27 + -0x20;
    }
                    /* WARNING: Could not recover jumptable at 0x00718e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                       (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]))
                       (lVar27,lVar19,
                        (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                                (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]));
    return lVar19;
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar24 = (ulong)param_1 & 0xfffffffffffffff0;
  puVar25 = (undefined8 *)(uVar24 + 0x10);
  uVar20 = param_3 + ((long)param_1 - (long)puVar25);
  param_2 = (undefined8 *)((long)param_2 - ((long)param_1 - (long)puVar25));
  if (__x86_shared_cache_size_half < uVar20) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    *param_1 = uVar4;
    param_1[1] = uVar5;
    *puVar25 = uVar6;
    *(undefined8 *)(uVar24 + 0x18) = uVar7;
    uVar20 = uVar20 - 0x90;
    puVar25 = param_2 + 2;
    puVar22 = (undefined8 *)(uVar24 + 0x20);
    do {
      puVar26 = puVar22;
      puVar21 = puVar25;
      uVar24 = uVar20;
      uVar4 = puVar21[1];
      uVar5 = puVar21[2];
      uVar6 = puVar21[3];
      uVar7 = puVar21[4];
      uVar8 = puVar21[5];
      uVar9 = puVar21[6];
      uVar10 = puVar21[7];
      uVar11 = puVar21[8];
      uVar12 = puVar21[9];
      uVar13 = puVar21[10];
      uVar14 = puVar21[0xb];
      uVar15 = puVar21[0xc];
      uVar16 = puVar21[0xd];
      uVar17 = puVar21[0xe];
      uVar18 = puVar21[0xf];
      puVar25 = puVar21 + 0x10;
      *puVar26 = *puVar21;
      puVar26[1] = uVar4;
      puVar26[2] = uVar5;
      puVar26[3] = uVar6;
      puVar26[4] = uVar7;
      puVar26[5] = uVar8;
      puVar26[6] = uVar9;
      puVar26[7] = uVar10;
      puVar26[8] = uVar11;
      puVar26[9] = uVar12;
      puVar26[10] = uVar13;
      puVar26[0xb] = uVar14;
      puVar26[0xc] = uVar15;
      puVar26[0xd] = uVar16;
      puVar26[0xe] = uVar17;
      puVar26[0xf] = uVar18;
      puVar22 = puVar26 + 0x10;
      uVar20 = uVar24 - 0x80;
    } while (0x7f < uVar24);
    if (-0x41 < (long)(uVar24 - 0x80)) {
      uVar4 = *puVar25;
      uVar5 = puVar21[0x11];
      uVar6 = puVar21[0x12];
      uVar7 = puVar21[0x13];
      uVar8 = puVar21[0x14];
      uVar9 = puVar21[0x15];
      uVar10 = puVar21[0x16];
      uVar11 = puVar21[0x17];
      puVar25 = puVar21 + 0x18;
      *puVar22 = uVar4;
      puVar26[0x11] = uVar5;
      puVar26[0x12] = uVar6;
      puVar26[0x13] = uVar7;
      puVar26[0x14] = uVar8;
      puVar26[0x15] = uVar9;
      puVar26[0x16] = uVar10;
      puVar26[0x17] = uVar11;
      puVar22 = puVar26 + 0x18;
      uVar24 = uVar24 - 0x40;
    }
                    /* WARNING: Could not recover jumptable at 0x0071b1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                       (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]))
                       ((long)puVar22 + uVar24,(long)puVar25 + uVar24,
                        (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                                (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]));
    return lVar19;
  }
  uVar29 = (ulong)param_2 & 0xf;
  if (uVar29 != 0) {
    lVar19 = (long)*(int *)(&DAT_00820d90 + uVar29 * 4);
    switch(uVar29) {
    case 1:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
      break;
    case 2:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00718f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 3:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007190cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 4:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071921b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 5:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071936b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 6:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007194bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 7:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071960b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 8:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db4 + lVar19 + 2);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820dac + lVar19 + 3);
      }
                    /* WARNING: Could not recover jumptable at 0x0071975b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 9:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007198ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 10:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007199fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 0xb:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00719b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 0xc:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00719c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 0xd:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00719deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 0xe:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00719f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    case 0xf:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db8 + lVar19);
      if (__x86_data_cache_size_half <= uVar20) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820db0 + lVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071a08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                          UNRECOVERED_JUMPTABLE_00);
      return lVar19;
    }
                    /* WARNING: Could not recover jumptable at 0x00718e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar19 = (*UNRECOVERED_JUMPTABLE_00)
                       (puVar25,param_2,uVar20 - 0x40,__x86_data_cache_size_half,param_1,
                        UNRECOVERED_JUMPTABLE_00);
    return lVar19;
  }
  uVar29 = uVar20 - 0x10;
  uVar6 = param_2[1];
  puVar22 = param_2 + 2;
  *puVar25 = *param_2;
  *(undefined8 *)(uVar24 + 0x18) = uVar6;
  puVar25 = (undefined8 *)(uVar24 + 0x20);
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (uVar29 < 0x81) {
    if (0x3f < uVar29) {
      uVar4 = param_2[3];
      uVar5 = param_2[4];
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      uVar9 = param_2[8];
      uVar10 = param_2[9];
      *puVar25 = *puVar22;
      *(undefined8 *)(uVar24 + 0x28) = uVar4;
      *(undefined8 *)(uVar24 + 0x30) = uVar5;
      *(undefined8 *)(uVar24 + 0x38) = uVar6;
      *(undefined8 *)(uVar24 + 0x40) = uVar7;
      *(undefined8 *)(uVar24 + 0x48) = uVar8;
      *(undefined8 *)(uVar24 + 0x50) = uVar9;
      *(undefined8 *)(uVar24 + 0x58) = uVar10;
      uVar29 = uVar20 - 0x50;
      puVar22 = param_2 + 10;
      puVar25 = (undefined8 *)(uVar24 + 0x60);
    }
                    /* WARNING: Could not recover jumptable at 0x00718a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                       (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar29]))
                       ((long)puVar25 + uVar29,(long)puVar22 + uVar29,
                        (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                                (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar29]));
    return lVar19;
  }
  uVar24 = uVar20 - 0x90;
  uVar20 = uVar20 - 0x90;
  if (uVar29 < __x86_data_cache_size_half) {
    do {
      puVar26 = puVar25;
      puVar21 = puVar22;
      uVar24 = uVar20;
      uVar4 = puVar21[1];
      uVar5 = puVar21[2];
      uVar6 = puVar21[3];
      uVar7 = puVar21[4];
      uVar8 = puVar21[5];
      uVar9 = puVar21[6];
      uVar10 = puVar21[7];
      *puVar26 = *puVar21;
      puVar26[1] = uVar4;
      puVar26[2] = uVar5;
      puVar26[3] = uVar6;
      puVar26[4] = uVar7;
      puVar26[5] = uVar8;
      puVar26[6] = uVar9;
      puVar26[7] = uVar10;
      uVar4 = puVar21[9];
      uVar5 = puVar21[10];
      uVar6 = puVar21[0xb];
      uVar7 = puVar21[0xc];
      uVar8 = puVar21[0xd];
      uVar9 = puVar21[0xe];
      uVar10 = puVar21[0xf];
      puVar22 = puVar21 + 0x10;
      puVar26[8] = puVar21[8];
      puVar26[9] = uVar4;
      puVar26[10] = uVar5;
      puVar26[0xb] = uVar6;
      puVar26[0xc] = uVar7;
      puVar26[0xd] = uVar8;
      puVar26[0xe] = uVar9;
      puVar26[0xf] = uVar10;
      puVar25 = puVar26 + 0x10;
      uVar20 = uVar24 - 0x80;
    } while (0x7f < uVar24);
    if (-0x41 < (long)(uVar24 - 0x80)) {
      uVar4 = puVar21[0x11];
      uVar24 = uVar24 - 0x40;
      uVar5 = puVar21[0x12];
      uVar6 = puVar21[0x13];
      *puVar25 = *puVar22;
      puVar26[0x11] = uVar4;
      puVar26[0x12] = uVar5;
      puVar26[0x13] = uVar6;
      uVar4 = puVar21[0x15];
      uVar5 = puVar21[0x16];
      uVar6 = puVar21[0x17];
      puVar22 = puVar21 + 0x18;
      puVar26[0x14] = puVar21[0x14];
      puVar26[0x15] = uVar4;
      puVar26[0x16] = uVar5;
      puVar26[0x17] = uVar6;
      puVar25 = puVar26 + 0x18;
    }
                    /* WARNING: Could not recover jumptable at 0x00718aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                       (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]))
                       ((long)puVar25 + uVar24,(long)puVar22 + uVar24,
                        (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                                (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar24]));
    return lVar19;
  }
  do {
    puVar26 = puVar25;
    puVar21 = puVar22;
    uVar20 = uVar24;
    uVar4 = puVar21[1];
    uVar5 = puVar21[2];
    uVar6 = puVar21[3];
    uVar7 = puVar21[4];
    uVar8 = puVar21[5];
    uVar9 = puVar21[6];
    uVar10 = puVar21[7];
    uVar11 = puVar21[8];
    uVar12 = puVar21[9];
    uVar13 = puVar21[10];
    uVar14 = puVar21[0xb];
    uVar15 = puVar21[0xc];
    uVar16 = puVar21[0xd];
    uVar17 = puVar21[0xe];
    uVar18 = puVar21[0xf];
    puVar22 = puVar21 + 0x10;
    *puVar26 = *puVar21;
    puVar26[1] = uVar4;
    puVar26[2] = uVar5;
    puVar26[3] = uVar6;
    puVar26[4] = uVar7;
    puVar26[5] = uVar8;
    puVar26[6] = uVar9;
    puVar26[7] = uVar10;
    puVar26[8] = uVar11;
    puVar26[9] = uVar12;
    puVar26[10] = uVar13;
    puVar26[0xb] = uVar14;
    puVar26[0xc] = uVar15;
    puVar26[0xd] = uVar16;
    puVar26[0xe] = uVar17;
    puVar26[0xf] = uVar18;
    puVar25 = puVar26 + 0x10;
    uVar24 = uVar20 - 0x80;
  } while (0x7f < uVar20);
  if (-0x41 < (long)(uVar20 - 0x80)) {
    uVar4 = puVar21[0x11];
    uVar20 = uVar20 - 0x40;
    uVar5 = puVar21[0x12];
    uVar6 = puVar21[0x13];
    *puVar25 = *puVar22;
    puVar26[0x11] = uVar4;
    puVar26[0x12] = uVar5;
    puVar26[0x13] = uVar6;
    uVar4 = puVar21[0x15];
    uVar5 = puVar21[0x16];
    uVar6 = puVar21[0x17];
    puVar22 = puVar21 + 0x18;
    puVar26[0x14] = puVar21[0x14];
    puVar26[0x15] = uVar4;
    puVar26[0x16] = uVar5;
    puVar26[0x17] = uVar6;
    puVar25 = puVar26 + 0x18;
  }
  if (0x1f < uVar20) {
    uVar4 = *puVar22;
    uVar5 = puVar22[1];
    uVar20 = uVar20 - 0x20;
    uVar6 = puVar22[2];
    uVar7 = puVar22[3];
    puVar22 = puVar22 + 4;
    *puVar25 = uVar4;
    puVar25[1] = uVar5;
    puVar25[2] = uVar6;
    puVar25[3] = uVar7;
    puVar25 = puVar25 + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00718beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar19 = (*(code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                     (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar20]))
                     ((long)puVar25 + uVar20,(long)puVar22 + uVar20,
                      (code *)((long)&switchD_007188f1::switchdataD_00820c50 +
                              (long)(int)(&switchD_007188f1::switchdataD_00820c50)[uVar20]));
  return lVar19;
}

