
undefined8 aesni_set_decrypt_key(undefined8 param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *extraout_RDX;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar6 = aesni_set_encrypt_key();
  uVar9 = extraout_XMM0_Qa;
  if (iVar6 == 0) {
    puVar3 = (undefined8 *)((long)extraout_RDX + (ulong)(uint)(param_2 << 4) + 0x10);
    uVar9 = extraout_RDX[1];
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    *puVar3 = *extraout_RDX;
    puVar3[1] = uVar9;
    *extraout_RDX = uVar4;
    extraout_RDX[1] = uVar5;
    pauVar7 = (undefined1 (*) [16])(extraout_RDX + 2);
    pauVar8 = (undefined1 (*) [16])(puVar3 + -2);
    do {
      auVar10 = aesimc(*pauVar7);
      auVar11 = aesimc(*pauVar8);
      pauVar1 = pauVar7 + 1;
      pauVar2 = pauVar8 + -1;
      *pauVar8 = auVar10;
      *pauVar7 = auVar11;
      pauVar7 = pauVar1;
      pauVar8 = pauVar2;
    } while (pauVar1 < pauVar2);
    auVar10 = aesimc(*pauVar1);
    *pauVar2 = auVar10;
    uVar9 = 0;
  }
  return uVar9;
}

