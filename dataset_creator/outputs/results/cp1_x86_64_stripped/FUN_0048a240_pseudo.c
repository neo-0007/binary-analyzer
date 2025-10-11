
uint FUN_0048a240(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint unaff_EBX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long unaff_R14;
  uint *unaff_R15;
  uint *in_stack_00000010;
  
  while( true ) {
    uVar1 = in_EAX ^ *unaff_R15;
    uVar5 = unaff_EBX ^ unaff_R15[1];
    param_4 = param_4 ^ unaff_R15[2];
    param_3 = param_3 ^ unaff_R15[3];
    unaff_R15 = unaff_R15 + 4;
    uVar2 = CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(uVar5 >> 0x18)),
                     CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(param_4 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 8 & 0xff)),
                                       *(undefined1 *)(unaff_R14 + (ulong)(uVar1 & 0xff)))));
    if (unaff_R15 == in_stack_00000010) break;
    uVar10 = *(ulong *)(unaff_R14 + 0x100);
    uVar12 = *(ulong *)(unaff_R14 + 0x108);
    uVar3 = CONCAT44(CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(param_4 >> 0x18)),
                              CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 0x10 & 0xff)),
                                       CONCAT11(*(undefined1 *)
                                                 (unaff_R14 + (ulong)(uVar1 >> 8 & 0xff)),
                                                *(undefined1 *)(unaff_R14 + (ulong)(uVar5 & 0xff))))
                             ),uVar2);
    uVar4 = CONCAT44(CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(uVar1 >> 0x18)),
                              CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(uVar5 >> 0x10 & 0xff)),
                                       CONCAT11(*(undefined1 *)
                                                 (unaff_R14 + (ulong)(param_4 >> 8 & 0xff)),
                                                *(undefined1 *)(unaff_R14 + (ulong)(param_3 & 0xff))
                                               ))),
                     CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 0x18)),
                              CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(uVar1 >> 0x10 & 0xff)),
                                       CONCAT11(*(undefined1 *)
                                                 (unaff_R14 + (ulong)(uVar5 >> 8 & 0xff)),
                                                *(undefined1 *)(unaff_R14 + (ulong)(param_4 & 0xff))
                                               ))));
    uVar15 = *(ulong *)(unaff_R14 + 0x110);
    uVar9 = uVar3 * 2 & uVar12 ^ (uVar10 & uVar3) - ((uVar10 & uVar3) >> 7) & uVar15;
    uVar17 = uVar4 * 2 & uVar12 ^ (uVar10 & uVar4) - ((uVar10 & uVar4) >> 7) & uVar15;
    uVar11 = uVar9 * 2 & uVar12 ^ (uVar10 & uVar9) - ((uVar10 & uVar9) >> 7) & uVar15;
    uVar19 = uVar17 * 2 & uVar12 ^ (uVar10 & uVar17) - ((uVar10 & uVar17) >> 7) & uVar15;
    uVar14 = uVar11 * 2 & uVar12 ^ (uVar10 & uVar11) - ((uVar10 & uVar11) >> 7) & uVar15;
    uVar21 = uVar19 * 2 & uVar12 ^ (uVar10 & uVar19) - ((uVar10 & uVar19) >> 7) & uVar15;
    uVar10 = uVar9 ^ uVar3 ^ uVar14;
    uVar18 = uVar17 ^ uVar4 ^ uVar21;
    uVar12 = uVar11 ^ uVar3 ^ uVar14;
    uVar11 = uVar19 ^ uVar4 ^ uVar21;
    uVar1 = (uint)(uVar3 ^ uVar14);
    uVar2 = (uint)(uVar4 ^ uVar21);
    uVar15 = uVar9 ^ uVar3 ^ uVar12;
    uVar6 = (uint)((uVar3 ^ uVar14) >> 0x20);
    uVar3 = uVar17 ^ uVar4 ^ uVar11;
    uVar5 = (uint)((uVar4 ^ uVar21) >> 0x20);
    uVar7 = (uint)uVar10;
    uVar16 = (uint)uVar18;
    uVar13 = (uint)(uVar10 >> 0x20);
    uVar20 = (uint)(uVar18 >> 0x20);
    uVar8 = (uint)(uVar12 >> 0x20);
    in_EAX = (uVar1 << 8 | uVar1 >> 0x18) ^ (uint)uVar15 ^ (uVar7 << 0x18 | uVar7 >> 8) ^
             ((uint)uVar12 << 0x10 | (uint)uVar12 >> 0x10);
    uVar1 = (uint)(uVar11 >> 0x20);
    param_4 = (uVar2 << 8 | uVar2 >> 0x18) ^ (uint)uVar3 ^ (uVar16 << 0x18 | uVar16 >> 8) ^
              ((uint)uVar11 << 0x10 | (uint)uVar11 >> 0x10);
    unaff_EBX = (uVar6 << 8 | uVar6 >> 0x18) ^ (uint)(uVar15 >> 0x20) ^
                (uVar13 << 0x18 | uVar13 >> 8) ^ (uVar8 << 0x10 | uVar8 >> 0x10);
    param_3 = (uVar5 << 8 | uVar5 >> 0x18) ^ (uint)(uVar3 >> 0x20) ^ (uVar20 << 0x18 | uVar20 >> 8)
              ^ (uVar1 << 0x10 | uVar1 >> 0x10);
  }
  return uVar2 ^ *unaff_R15;
}

