
undefined8 * FUN_00481c50(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  puVar4 = (undefined8 *)
           FUN_0041aec0(0x188,"../providers/implementations/signature/sm2_sig.c",0x156);
  if (puVar4 != (undefined8 *)0x0) {
    puVar6 = param_1;
    puVar7 = puVar4;
    for (lVar5 = 0x31; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
    }
    puVar4[2] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    lVar5 = param_1[2];
    if (lVar5 != 0) {
      iVar3 = FUN_004ed9e0();
      if (iVar3 == 0) goto LAB_00481d80;
      lVar5 = param_1[2];
    }
    puVar4[2] = lVar5;
    lVar5 = param_1[0x2c];
    if (lVar5 != 0) {
      iVar3 = FUN_00406a10();
      if (iVar3 == 0) goto LAB_00481d80;
      lVar5 = param_1[0x2c];
    }
    lVar1 = param_1[0x2d];
    puVar4[0x2c] = lVar5;
    if (lVar1 != 0) {
      lVar5 = FUN_00405f40();
      puVar4[0x2d] = lVar5;
      if (lVar5 == 0) goto LAB_00481d80;
      iVar3 = FUN_004074f0(lVar5,param_1[0x2d]);
      if (iVar3 == 0) goto LAB_00481d80;
    }
    if (param_1[0x2f] != 0) {
      lVar5 = FUN_0041ad90(param_1[0x30],"../providers/implementations/signature/sm2_sig.c",0x16f);
      puVar4[0x2f] = lVar5;
      if (lVar5 == 0) {
LAB_00481d80:
        FUN_00481bd0(puVar4);
        return (undefined8 *)0x0;
      }
      uVar2 = param_1[0x2f];
      puVar4[0x30] = param_1[0x30];
      thunk_FUN_00713a50(lVar5,uVar2,param_1[0x30]);
    }
  }
  return puVar4;
}

