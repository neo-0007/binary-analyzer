
undefined8 * FUN_00476fb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  
  iVar6 = FUN_0043b840();
  if ((iVar6 != 0) && (puVar7 = (undefined8 *)FUN_00476af0(*param_1), puVar7 != (undefined8 *)0x0))
  {
    uVar3 = param_1[1];
    uVar2 = puVar7[1];
    puVar1 = puVar7 + 2;
    *puVar7 = *param_1;
    puVar7[1] = uVar3;
    uVar3 = param_1[3];
    puVar7[2] = param_1[2];
    puVar7[3] = uVar3;
    uVar3 = param_1[5];
    puVar7[4] = param_1[4];
    puVar7[5] = uVar3;
    uVar3 = param_1[7];
    puVar7[6] = param_1[6];
    puVar7[7] = uVar3;
    uVar3 = param_1[9];
    puVar7[8] = param_1[8];
    puVar7[9] = uVar3;
    uVar3 = param_1[0xb];
    puVar7[10] = param_1[10];
    puVar7[0xb] = uVar3;
    uVar3 = param_1[0xd];
    puVar7[0xc] = param_1[0xc];
    puVar7[0xd] = uVar3;
    uVar3 = param_1[0xf];
    puVar7[0xe] = param_1[0xe];
    puVar7[0xf] = uVar3;
    uVar3 = param_1[0x11];
    puVar7[0x10] = param_1[0x10];
    puVar7[0x11] = uVar3;
    uVar4 = param_1[0x12];
    uVar5 = param_1[0x13];
    puVar7[1] = uVar2;
    uVar3 = param_1[1];
    puVar7[5] = 0;
    puVar7[0x12] = uVar4;
    puVar7[0x13] = uVar5;
    iVar6 = FUN_005452d0(uVar2,uVar3);
    if ((iVar6 != 0) && (iVar6 = FUN_0043c620(puVar1,param_1 + 2), iVar6 != 0)) {
      if (param_1[5] == 0) {
        return puVar7;
      }
      lVar8 = param_1[6];
      if (lVar8 == 0) {
        lVar8 = 1;
      }
      lVar8 = FUN_0041bc60(lVar8,"../providers/implementations/macs/hmac_prov.c",0x7e);
      puVar7[5] = lVar8;
      if (lVar8 == 0) {
        FUN_00545130(puVar7[1]);
        FUN_0043c5e0(puVar1);
        FUN_0041c0b0(puVar7[5],puVar7[6],"../providers/implementations/macs/hmac_prov.c",0x61);
        FUN_0041ad60(puVar7,"../providers/implementations/macs/hmac_prov.c",0x62);
        return (undefined8 *)0x0;
      }
      thunk_FUN_00713a50(lVar8,param_1[5],param_1[6]);
      return puVar7;
    }
    FUN_00545130(puVar7[1]);
    FUN_0043c5e0(puVar1);
    FUN_0041c0b0(puVar7[5],puVar7[6],"../providers/implementations/macs/hmac_prov.c",0x61);
    FUN_0041ad60(puVar7,"../providers/implementations/macs/hmac_prov.c",0x62);
  }
  return (undefined8 *)0x0;
}

