
undefined8 * FUN_0047e740(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)
               FUN_0041aec0(0x120,"../providers/implementations/signature/eddsa_sig.c",0x10a),
     puVar2 != (undefined8 *)0x0)) {
    puVar4 = param_1;
    puVar5 = puVar2;
    for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
    }
    puVar2[1] = 0;
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      iVar1 = FUN_00511630();
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/eddsa_sig.c",0x112,"eddsa_dupctx");
        FUN_0051f8f0(0x39,0xc0103,0);
        FUN_00511590(puVar2[1]);
        FUN_0041ad60(puVar2,"../providers/implementations/signature/eddsa_sig.c",0xff);
        return (undefined8 *)0x0;
      }
      lVar3 = param_1[1];
    }
    puVar2[1] = lVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}

