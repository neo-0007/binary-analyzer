
void FUN_00513240(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  Var5 = (unkuint9)SUB168(auVar12 * auVar19,0) + (unkuint9)SUB168(auVar11 * auVar18,8) +
         (unkuint9)
         ((char)((unkuint9)SUB168(auVar11 * auVar18,0) + (unkuint9)SUB168(auVar10 * auVar17,8) +
                 (unkuint9)0 >> 0x40) != '\0');
  Var6 = (unkuint9)SUB168(auVar12 * auVar19,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  Var6 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar13 * auVar20,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar4;
  Var7 = (unkuint9)SUB168(auVar14 * auVar21,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  Var8 = (unkuint9)SUB168(auVar15 * auVar22,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  FUN_00513340(0,uVar4,0x26,uVar2,SUB168(auVar9 * auVar16,0),
               SUB168(auVar10 * auVar17,0) * 2 + (ulong)((char)((unkuint9)Var8 >> 0x40) != '\0') +
               SUB168(auVar9 * auVar16,8) +
               (ulong)((char)((unkuint9)(ulong)Var8 + (unkuint9)0 +
                              (unkuint9)
                              ((char)((unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar15 * auVar22,0)
                                      + (unkuint9)
                                        ((char)((unkuint9)(ulong)Var6 +
                                                (unkuint9)SUB168(auVar14 * auVar21,0) +
                                                (unkuint9)
                                                ((char)((unkuint9)(ulong)Var5 +
                                                        (unkuint9)SUB168(auVar13 * auVar20,0) +
                                                        (unkuint9)0 >> 0x40) != '\0') >> 0x40) !=
                                        '\0') >> 0x40) != '\0') >> 0x40) != '\0'));
  return;
}

