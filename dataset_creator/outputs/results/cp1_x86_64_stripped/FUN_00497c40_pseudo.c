
undefined8
FUN_00497c40(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],ulong param_4,
            long param_5,ulong param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16],
            undefined1 (*param_9) [16])

{
  long lVar1;
  long extraout_RDX;
  ulong extraout_RDX_00;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM11 [16];
  undefined1 in_XMM12 [16];
  undefined1 in_XMM13 [16];
  undefined1 in_XMM14 [16];
  undefined1 auVar10 [16];
  
  auVar10 = *param_7 ^
            *(undefined1 (*) [16])(param_5 + 0x10 + (ulong)(uint)(*(int *)(param_5 + 0xf0) << 4));
  auVar3 = *param_8;
  auVar9 = *param_9;
  auVar8 = auVar9;
  if ((param_6 & 1) == 0) {
    lVar1 = 0;
    if (param_6 != 0) {
      for (; (param_6 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
      }
    }
    param_6 = param_6 + 1;
    auVar10 = param_8[lVar1];
    auVar2 = *param_2;
    param_2 = param_2 + 1;
    param_1 = FUN_00498200();
    *param_3 = auVar2;
    auVar8._0_4_ = auVar9._0_4_ ^ auVar2._0_4_;
    auVar8._4_4_ = auVar9._4_4_ ^ auVar2._4_4_;
    auVar8._8_4_ = auVar9._8_4_ ^ auVar2._8_4_;
    auVar8._12_4_ = auVar9._12_4_ ^ auVar2._12_4_;
    param_3 = param_3 + 1;
    param_4 = extraout_RDX - 1;
    in_XMM0_Dc = extraout_XMM0_Dc;
    in_XMM0_Dd = extraout_XMM0_Dd;
    auVar9 = auVar8;
    if (param_4 == 0) goto LAB_00497ebd;
  }
  lVar1 = 0;
  if (param_6 + 1 != 0) {
    for (; (param_6 + 1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  lVar1 = 0;
  if (param_6 + 3 != 0) {
    for (; (param_6 + 3 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  lVar1 = 0;
  if (param_6 + 5 != 0) {
    for (; (param_6 + 5 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  while (5 < param_4) {
    auVar9 = *param_2;
    auVar2 = param_2[1];
    auVar4 = param_2[2];
    auVar5 = param_2[3];
    auVar6 = param_2[4];
    auVar7 = param_2[5];
    param_2 = param_2 + 6;
    param_1 = FUN_00497f40();
    *param_3 = auVar9;
    param_3[1] = auVar2;
    param_3[2] = auVar4;
    param_3[3] = auVar5;
    param_3[4] = auVar6;
    param_3[5] = auVar7;
    auVar8 = auVar8 ^ auVar9 ^ auVar2 ^ auVar4 ^ auVar5 ^ auVar6 ^ auVar7;
    param_3 = param_3 + 6;
    param_4 = extraout_RDX_00;
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
  }
  auVar9 = auVar8;
  if (param_4 != 0) {
    auVar10 = *param_2;
    if (param_4 < 2) {
      param_1 = FUN_00498200();
      *param_3 = auVar10;
      auVar9._0_4_ = auVar8._0_4_ ^ auVar10._0_4_;
      auVar9._4_4_ = auVar8._4_4_ ^ auVar10._4_4_;
      auVar9._8_4_ = auVar8._8_4_ ^ auVar10._8_4_;
      auVar9._12_4_ = auVar8._12_4_ ^ auVar10._12_4_;
      in_XMM0_Dc = extraout_XMM0_Dc_02;
      in_XMM0_Dd = extraout_XMM0_Dd_02;
      auVar10 = auVar3;
    }
    else {
      auVar3 = param_2[1];
      if (param_4 == 2) {
        param_1 = FUN_004980e0();
        *param_3 = auVar10;
        param_3[1] = auVar3;
        auVar9._0_4_ = auVar8._0_4_ ^ auVar10._0_4_ ^ auVar3._0_4_;
        auVar9._4_4_ = auVar8._4_4_ ^ auVar10._4_4_ ^ auVar3._4_4_;
        auVar9._8_4_ = auVar8._8_4_ ^ auVar10._8_4_ ^ auVar3._8_4_;
        auVar9._12_4_ = auVar8._12_4_ ^ auVar10._12_4_ ^ auVar3._12_4_;
        in_XMM0_Dc = extraout_XMM0_Dc_03;
        in_XMM0_Dd = extraout_XMM0_Dd_03;
        auVar10 = in_XMM11;
      }
      else {
        auVar2 = param_2[2];
        if (param_4 < 4) {
          param_1 = FUN_004980e0();
          *param_3 = auVar10;
          param_3[1] = auVar3;
          param_3[2] = auVar2;
          auVar9._0_4_ = auVar8._0_4_ ^ auVar10._0_4_ ^ auVar3._0_4_ ^ auVar2._0_4_;
          auVar9._4_4_ = auVar8._4_4_ ^ auVar10._4_4_ ^ auVar3._4_4_ ^ auVar2._4_4_;
          auVar9._8_4_ = auVar8._8_4_ ^ auVar10._8_4_ ^ auVar3._8_4_ ^ auVar2._8_4_;
          auVar9._12_4_ = auVar8._12_4_ ^ auVar10._12_4_ ^ auVar3._12_4_ ^ auVar2._12_4_;
          in_XMM0_Dc = extraout_XMM0_Dc_04;
          in_XMM0_Dd = extraout_XMM0_Dd_04;
          auVar10 = in_XMM12;
        }
        else {
          auVar4 = param_2[3];
          if (param_4 == 4) {
            param_1 = FUN_004980e0();
            *param_3 = auVar10;
            param_3[1] = auVar3;
            param_3[2] = auVar2;
            param_3[3] = auVar4;
            auVar9 = auVar8 ^ auVar10 ^ auVar3 ^ auVar2 ^ auVar4;
            in_XMM0_Dc = extraout_XMM0_Dc_05;
            in_XMM0_Dd = extraout_XMM0_Dd_05;
            auVar10 = in_XMM13;
          }
          else {
            auVar9 = param_2[4];
            param_1 = FUN_00497f40();
            *param_3 = auVar10;
            param_3[1] = auVar3;
            param_3[2] = auVar2;
            param_3[3] = auVar4;
            param_3[4] = auVar9;
            auVar9 = auVar8 ^ auVar10 ^ auVar3 ^ auVar2 ^ auVar4 ^ auVar9;
            in_XMM0_Dc = extraout_XMM0_Dc_01;
            in_XMM0_Dd = extraout_XMM0_Dd_01;
            auVar10 = in_XMM14;
          }
        }
      }
    }
  }
LAB_00497ebd:
  auVar3._8_4_ = in_XMM0_Dc;
  auVar3._0_8_ = param_1;
  auVar3._12_4_ = in_XMM0_Dd;
  *param_9 = auVar9;
  *param_7 = auVar10 ^ auVar3;
  return 0;
}

