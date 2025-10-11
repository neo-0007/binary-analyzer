
undefined8 * FUN_0047ed20(undefined8 *param_1)

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
  puVar4 = (undefined8 *)
           FUN_0041aec0(0x20,"../providers/implementations/signature/mac_legacy_sig.c",0xb6);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[1] = 0;
  if (param_1[1] != 0) {
    lVar5 = FUN_0041c2c0(param_1[1],"../providers/implementations/signature/mac_legacy_sig.c",0xbf);
    puVar4[1] = lVar5;
    if (lVar5 == 0) goto LAB_0047ede5;
  }
  lVar5 = param_1[2];
  if (lVar5 == 0) {
LAB_0047edb2:
    puVar4[2] = lVar5;
    if (param_1[3] == 0) {
      return puVar4;
    }
    lVar5 = FUN_0053f1e0();
    puVar4[3] = lVar5;
    if (lVar5 != 0) {
      return puVar4;
    }
  }
  else {
    iVar3 = FUN_00474690();
    if (iVar3 != 0) {
      lVar5 = param_1[2];
      goto LAB_0047edb2;
    }
  }
  lVar5 = puVar4[1];
LAB_0047ede5:
  FUN_0041ad60(lVar5,"../providers/implementations/signature/mac_legacy_sig.c",0xa8);
  FUN_0053f190(puVar4[3]);
  FUN_00474480(puVar4[2]);
  FUN_0041ad60(puVar4,"../providers/implementations/signature/mac_legacy_sig.c",0xab);
  return (undefined8 *)0x0;
}

