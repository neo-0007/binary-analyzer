
undefined8
aesni_ocb_encrypt(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                 long param_5,ulong param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16],
                 undefined8 *param_9)

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
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined1 auVar13 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 in_XMM11 [16];
  undefined1 in_XMM12 [16];
  undefined1 in_XMM13 [16];
  undefined1 in_XMM14 [16];
  undefined1 auVar17 [16];
  
  auVar17 = *param_7 ^
            *(undefined1 (*) [16])(param_5 + 0x10 + (ulong)(uint)(*(int *)(param_5 + 0xf0) << 4));
  auVar13 = *param_8;
  uVar15 = *param_9;
  uVar16 = param_9[1];
  if ((param_6 & 1) == 0) {
    lVar1 = 0;
    if (param_6 != 0) {
      for (; (param_6 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
      }
    }
    param_6 = param_6 + 1;
    auVar17 = param_8[lVar1];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    param_2 = param_2 + 2;
    param_1 = __ocb_encrypt1();
    *param_3 = uVar2;
    param_3[1] = uVar3;
    param_3 = param_3 + 2;
    param_4 = extraout_RDX - 1;
    in_XMM0_Dc = extraout_XMM0_Dc;
    in_XMM0_Dd = extraout_XMM0_Dd;
    if (param_4 == 0) goto LAB_004954d9;
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
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    uVar10 = param_2[8];
    uVar11 = param_2[9];
    uVar12 = param_2[10];
    uVar14 = param_2[0xb];
    param_2 = param_2 + 0xc;
    param_1 = __ocb_encrypt6();
    *param_3 = uVar2;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
    param_3[4] = uVar6;
    param_3[5] = uVar7;
    param_3[6] = uVar8;
    param_3[7] = uVar9;
    param_3[8] = uVar10;
    param_3[9] = uVar11;
    param_3[10] = uVar12;
    param_3[0xb] = uVar14;
    param_3 = param_3 + 0xc;
    param_4 = extraout_RDX_00;
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
  }
  if (param_4 != 0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    if (param_4 < 2) {
      param_1 = __ocb_encrypt1();
      *param_3 = uVar2;
      param_3[1] = uVar3;
      in_XMM0_Dc = extraout_XMM0_Dc_02;
      in_XMM0_Dd = extraout_XMM0_Dd_02;
      auVar17 = auVar13;
    }
    else {
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      if (param_4 == 2) {
        param_1 = __ocb_encrypt4();
        *param_3 = uVar2;
        param_3[1] = uVar3;
        param_3[2] = uVar4;
        param_3[3] = uVar5;
        in_XMM0_Dc = extraout_XMM0_Dc_03;
        in_XMM0_Dd = extraout_XMM0_Dd_03;
        auVar17 = in_XMM11;
      }
      else {
        uVar6 = param_2[4];
        uVar7 = param_2[5];
        if (param_4 < 4) {
          param_1 = __ocb_encrypt4();
          *param_3 = uVar2;
          param_3[1] = uVar3;
          param_3[2] = uVar4;
          param_3[3] = uVar5;
          param_3[4] = uVar6;
          param_3[5] = uVar7;
          in_XMM0_Dc = extraout_XMM0_Dc_04;
          in_XMM0_Dd = extraout_XMM0_Dd_04;
          auVar17 = in_XMM12;
        }
        else {
          uVar8 = param_2[6];
          uVar9 = param_2[7];
          if (param_4 == 4) {
            param_1 = __ocb_encrypt4();
            *param_3 = uVar2;
            param_3[1] = uVar3;
            param_3[2] = uVar4;
            param_3[3] = uVar5;
            param_3[4] = uVar6;
            param_3[5] = uVar7;
            param_3[6] = uVar8;
            param_3[7] = uVar9;
            in_XMM0_Dc = extraout_XMM0_Dc_05;
            in_XMM0_Dd = extraout_XMM0_Dd_05;
            auVar17 = in_XMM13;
          }
          else {
            uVar10 = param_2[8];
            uVar11 = param_2[9];
            param_1 = __ocb_encrypt6();
            *param_3 = uVar2;
            param_3[1] = uVar3;
            param_3[2] = uVar4;
            param_3[3] = uVar5;
            param_3[4] = uVar6;
            param_3[5] = uVar7;
            param_3[6] = uVar8;
            param_3[7] = uVar9;
            param_3[8] = uVar10;
            param_3[9] = uVar11;
            in_XMM0_Dc = extraout_XMM0_Dc_01;
            in_XMM0_Dd = extraout_XMM0_Dd_01;
            auVar17 = in_XMM14;
          }
        }
      }
    }
  }
LAB_004954d9:
  auVar13._8_4_ = in_XMM0_Dc;
  auVar13._0_8_ = param_1;
  auVar13._12_4_ = in_XMM0_Dd;
  *param_9 = uVar15;
  param_9[1] = uVar16;
  *param_7 = auVar17 ^ auVar13;
  return 0;
}

