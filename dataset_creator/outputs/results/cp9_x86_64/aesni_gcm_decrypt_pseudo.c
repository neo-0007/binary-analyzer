
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
aesni_gcm_decrypt(undefined1 (*param_1) [16],long param_2,ulong param_3,long param_4,
                 undefined8 *param_5,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 in_XMM9_Qa;
  undefined8 in_XMM9_Qb;
  undefined8 in_XMM10_Qa;
  undefined8 in_XMM10_Qb;
  undefined8 in_XMM11_Qa;
  undefined8 in_XMM11_Qb;
  undefined8 in_XMM12_Qa;
  undefined8 in_XMM12_Qb;
  undefined8 in_XMM13_Qa;
  undefined8 in_XMM13_Qb;
  undefined8 in_XMM14_Qa;
  undefined8 in_XMM14_Qb;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [128];
  
  uVar9 = 0;
  if (0x5f < param_3) {
    uVar6 = *param_5;
    pauVar10 = (undefined1 (*) [16])&DAT_00422140;
    pauVar8 = param_6 + 4;
    auVar13 = vpshufb_avx(*param_6,_DAT_00422140);
    uVar11 = param_4 - 0x80U & 0xf80;
    uVar12 = ((ulong)auStack_b0 & 0xf80) - uVar11;
    puVar7 = auStack_100;
    if ((uVar11 <= ((ulong)auStack_b0 & 0xf80)) && (puVar7 = auStack_100, uVar12 < 0x300)) {
      puVar7 = auStack_100 + -uVar12;
    }
    uVar9 = 0;
    auVar1 = param_1[2];
    vpshufb_avx(param_1[5],_DAT_00422140);
    auVar2 = param_1[1];
    auVar4 = vpshufb_avx(param_1[4],_DAT_00422140);
    auVar3 = *param_1;
    auVar5 = vpshufb_avx(param_1[3],_DAT_00422140);
    *(undefined1 (*) [16])(puVar7 + 0x30) = auVar4;
    auVar1 = vpshufb_avx(auVar1,_DAT_00422140);
    *(undefined1 (*) [16])(puVar7 + 0x40) = auVar5;
    auVar2 = vpshufb_avx(auVar2,_DAT_00422140);
    *(undefined1 (*) [16])(puVar7 + 0x50) = auVar1;
    auVar1 = vpshufb_avx(auVar3,_DAT_00422140);
    *(undefined1 (*) [16])(puVar7 + 0x60) = auVar2;
    *(undefined1 (*) [16])(puVar7 + 0x70) = auVar1;
    *(undefined8 *)(puVar7 + -8) = 0x421b25;
    _aesni_ctr32_ghash_6x((long)DAT_00422140,uVar6,param_1,param_2,param_3 >> 4);
    *(undefined8 *)(param_2 + -0x60) = in_XMM9_Qa;
    *(undefined8 *)(param_2 + -0x58) = in_XMM9_Qb;
    *(undefined8 *)(param_2 + -0x50) = in_XMM10_Qa;
    *(undefined8 *)(param_2 + -0x48) = in_XMM10_Qb;
    *(undefined8 *)(param_2 + -0x40) = in_XMM11_Qa;
    *(undefined8 *)(param_2 + -0x38) = in_XMM11_Qb;
    *(undefined8 *)(param_2 + -0x30) = in_XMM12_Qa;
    *(undefined8 *)(param_2 + -0x28) = in_XMM12_Qb;
    *(undefined8 *)(param_2 + -0x20) = in_XMM13_Qa;
    *(undefined8 *)(param_2 + -0x18) = in_XMM13_Qb;
    *(undefined8 *)(param_2 + -0x10) = in_XMM14_Qa;
    *(undefined8 *)(param_2 + -8) = in_XMM14_Qb;
    auVar13 = vpshufb_avx(auVar13,*pauVar10);
    pauVar8[-4] = auVar13;
  }
  return uVar9;
}

