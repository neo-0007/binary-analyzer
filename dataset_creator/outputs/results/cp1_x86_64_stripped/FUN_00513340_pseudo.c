
void FUN_00513340(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                 ulong param_6,undefined8 param_7,long *param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  unkint9 Var4;
  unkint9 Var5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  ulong uVar15;
  ulong in_R10;
  ulong uVar16;
  ulong in_R11;
  ulong uVar17;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong unaff_R14;
  ulong unaff_R15;
  byte in_CF;
  byte in_OF;
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = unaff_R12;
  Var4 = (unkuint9)param_5 + (unkuint9)SUB168(auVar6 * auVar10,0) + (unkuint9)in_CF;
  uVar14 = (ulong)Var4;
  Var5 = (unkuint9)param_6 + (unkuint9)SUB168(auVar6 * auVar10,8) + (unkuint9)in_OF;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = unaff_R13;
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar7 * auVar11,0) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar15 = (ulong)Var4;
  Var5 = (unkuint9)in_R10 + (unkuint9)SUB168(auVar7 * auVar11,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = unaff_R14;
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar8 * auVar12,0) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar16 = (ulong)Var4;
  Var5 = (unkuint9)in_R11 + (unkuint9)SUB168(auVar8 * auVar12,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_R15;
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar9 * auVar13,0) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar17 = (ulong)Var4;
  param_3 = (SUB168(auVar9 * auVar13,8) + param_1 * 2 +
             (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
            (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0')) * param_3;
  uVar1 = (ulong)CARRY8(uVar14,param_3);
  uVar2 = (ulong)CARRY8(uVar15,uVar1);
  uVar3 = (ulong)CARRY8(uVar16,uVar2);
  param_8[1] = uVar15 + uVar1;
  param_8[2] = uVar16 + uVar2;
  param_8[3] = uVar17 + uVar3;
  *param_8 = uVar14 + param_3 + (-(ulong)CARRY8(uVar17,uVar3) & 0x26);
  return;
}

