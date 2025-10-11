
undefined8 * FUN_0047d430(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar2 = FUN_0043b840();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)
           FUN_0041aec0(400,"../providers/implementations/signature/ecdsa_sig.c",0x18e);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5 = param_1;
  puVar6 = puVar3;
  for (lVar4 = 0x32; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  puVar3[2] = 0;
  puVar3[0x2e] = 0;
  lVar4 = param_1[2];
  puVar3[1] = 0;
  puVar3[0x2f] = 0;
  if ((((lVar4 == 0) || (iVar2 = FUN_004ed9e0(), iVar2 != 0)) && (param_1[0x30] == 0)) &&
     (param_1[0x31] == 0)) {
    lVar4 = param_1[0x2e];
    puVar3[2] = param_1[2];
    if (lVar4 != 0) {
      iVar2 = FUN_00406a10();
      if (iVar2 == 0) goto LAB_0047d550;
      lVar4 = param_1[0x2e];
    }
    lVar1 = param_1[0x2f];
    puVar3[0x2e] = lVar4;
    if (lVar1 != 0) {
      lVar4 = FUN_00405f40();
      puVar3[0x2f] = lVar4;
      if ((lVar4 == 0) || (iVar2 = FUN_004074f0(lVar4,param_1[0x2f]), iVar2 == 0))
      goto LAB_0047d550;
    }
    if (param_1[1] == 0) {
      return puVar3;
    }
    lVar4 = FUN_0041c2c0(param_1[1],"../providers/implementations/signature/ecdsa_sig.c",0x1ab);
    puVar3[1] = lVar4;
    if (lVar4 != 0) {
      return puVar3;
    }
  }
LAB_0047d550:
  FUN_0047d390(puVar3);
  return (undefined8 *)0x0;
}

