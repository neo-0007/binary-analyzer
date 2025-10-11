
undefined8 * FUN_00480d20(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = (undefined8 *)0x0;
  iVar4 = FUN_0043b840();
  if (iVar4 != 0) {
    puVar5 = (undefined8 *)
             FUN_0041aec0(0xc0,"../providers/implementations/signature/rsa_sig.c",0x3dc);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x3de,"rsa_dupctx");
      FUN_0051f8f0(0x39,0xc0100,0);
      return (undefined8 *)0x0;
    }
    uVar2 = param_1[1];
    *puVar5 = *param_1;
    puVar5[1] = uVar2;
    uVar2 = param_1[3];
    puVar5[2] = param_1[2];
    puVar5[3] = uVar2;
    uVar2 = param_1[5];
    puVar5[4] = param_1[4];
    puVar5[5] = uVar2;
    uVar2 = param_1[7];
    puVar5[6] = param_1[6];
    puVar5[7] = uVar2;
    uVar2 = param_1[9];
    puVar5[8] = param_1[8];
    puVar5[9] = uVar2;
    uVar2 = param_1[0xb];
    puVar5[10] = param_1[10];
    puVar5[0xb] = uVar2;
    uVar2 = param_1[0xd];
    puVar5[0xc] = param_1[0xc];
    puVar5[0xd] = uVar2;
    uVar2 = param_1[0xf];
    puVar5[0xe] = param_1[0xe];
    puVar5[0xf] = uVar2;
    uVar2 = param_1[0x11];
    puVar5[0x10] = param_1[0x10];
    puVar5[0x11] = uVar2;
    uVar2 = param_1[0x13];
    puVar5[0x12] = param_1[0x12];
    puVar5[0x13] = uVar2;
    uVar2 = param_1[0x15];
    puVar5[0x14] = param_1[0x14];
    puVar5[0x15] = uVar2;
    uVar2 = param_1[0x16];
    uVar3 = param_1[0x17];
    puVar5[2] = 0;
    lVar6 = param_1[2];
    puVar5[0x16] = uVar2;
    puVar5[0x17] = uVar3;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[0x17] = 0;
    puVar5[1] = 0;
    if (lVar6 != 0) {
      iVar4 = FUN_0042bcf0();
      if (iVar4 == 0) goto LAB_00480eb0;
      lVar6 = param_1[2];
    }
    puVar5[2] = lVar6;
    lVar6 = param_1[4];
    if (lVar6 != 0) {
      iVar4 = FUN_00406a10();
      if (iVar4 == 0) goto LAB_00480eb0;
      lVar6 = param_1[4];
    }
    puVar5[4] = lVar6;
    lVar6 = param_1[0xe];
    if (lVar6 != 0) {
      iVar4 = FUN_00406a10();
      if (iVar4 == 0) goto LAB_00480eb0;
      lVar6 = param_1[0xe];
    }
    lVar1 = param_1[5];
    puVar5[0xe] = lVar6;
    if (lVar1 != 0) {
      lVar6 = FUN_00405f40();
      puVar5[5] = lVar6;
      if ((lVar6 == 0) || (iVar4 = FUN_004074f0(lVar6,param_1[5]), iVar4 == 0)) goto LAB_00480eb0;
    }
    if (param_1[1] != 0) {
      lVar6 = FUN_0041c2c0(param_1[1],"../providers/implementations/signature/rsa_sig.c",0x3fd);
      puVar5[1] = lVar6;
      if (lVar6 == 0) {
LAB_00480eb0:
        FUN_00480c50(puVar5);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar5;
}

