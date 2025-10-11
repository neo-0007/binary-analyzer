
undefined8 * FUN_00464890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar3 = FUN_0043b840();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)FUN_0041aec0(0x48,"../providers/implementations/exchange/dh_exch.c",0x107);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = param_1[1];
  *puVar4 = *param_1;
  puVar4[1] = uVar1;
  uVar1 = param_1[3];
  puVar4[2] = param_1[2];
  puVar4[3] = uVar1;
  uVar1 = param_1[5];
  puVar4[4] = param_1[4];
  puVar4[5] = uVar1;
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  puVar4[1] = 0;
  lVar5 = param_1[1];
  puVar4[2] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[6] = uVar1;
  puVar4[7] = uVar2;
  if (lVar5 != 0) {
    iVar3 = FUN_004d5ea0();
    if (iVar3 == 0) goto LAB_004649a0;
    lVar5 = param_1[1];
  }
  puVar4[1] = lVar5;
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    iVar3 = FUN_004d5ea0();
    if (iVar3 == 0) goto LAB_004649a0;
    lVar5 = param_1[2];
  }
  puVar4[2] = lVar5;
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    iVar3 = FUN_00406a10();
    if (iVar3 == 0) goto LAB_004649a0;
    lVar5 = param_1[4];
  }
  puVar4[4] = lVar5;
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    lVar5 = FUN_0041c320(param_1[5],param_1[6],"../providers/implementations/exchange/dh_exch.c",
                         0x123);
    puVar4[5] = lVar5;
    if (lVar5 == 0) goto LAB_004649a0;
  }
  if (param_1[8] == 0) {
    return puVar4;
  }
  lVar5 = FUN_0041c2c0(param_1[8],"../providers/implementations/exchange/dh_exch.c",0x12a);
  puVar4[8] = lVar5;
  if (lVar5 != 0) {
    return puVar4;
  }
LAB_004649a0:
  FUN_00464820(puVar4);
  return (undefined8 *)0x0;
}

