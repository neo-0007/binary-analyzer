
undefined1  [16] aesni_encrypt(uint *param_1,undefined1 (*param_2) [16],uint *param_3)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = param_3[0x3c];
  auVar4 = *(undefined1 (*) [16])(param_3 + 4);
  pauVar2 = (undefined1 (*) [16])(param_3 + 8);
  auVar3._0_4_ = *param_1 ^ *param_3;
  auVar3._4_4_ = param_1[1] ^ param_3[1];
  auVar3._8_4_ = param_1[2] ^ param_3[2];
  auVar3._12_4_ = param_1[3] ^ param_3[3];
  do {
    auVar3 = aesenc(auVar3,auVar4);
    uVar1 = uVar1 - 1;
    auVar4 = *pauVar2;
    pauVar2 = pauVar2 + 1;
  } while (uVar1 != 0);
  auVar4 = aesenclast(auVar3,auVar4);
  *param_2 = auVar4;
  return ZEXT816(0);
}

