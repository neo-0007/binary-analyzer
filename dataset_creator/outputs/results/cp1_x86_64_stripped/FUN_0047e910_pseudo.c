
undefined8 * FUN_0047e910(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)
           FUN_0041aec0(0x20,"../providers/implementations/signature/mac_legacy_sig.c",0x3a);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar3 = FUN_00485290(param_1);
  *puVar2 = uVar3;
  if (param_2 != 0) {
    lVar4 = FUN_0041c2c0(param_2,"../providers/implementations/signature/mac_legacy_sig.c",0x3f);
    puVar2[1] = lVar4;
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/mac_legacy_sig.c",0x40,"mac_newctx");
      FUN_0051f8f0(0x39,0xc0100,0);
      lVar4 = 0;
      goto LAB_0047e9f8;
    }
    uVar3 = *puVar2;
  }
  lVar4 = FUN_0053fe10(uVar3,param_3,param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_0053f090(lVar4);
    puVar2[3] = lVar5;
    if (lVar5 != 0) {
      thunk_FUN_0053f9f0(lVar4);
      return puVar2;
    }
  }
LAB_0047e9f8:
  FUN_0041ad60(puVar2[1],"../providers/implementations/signature/mac_legacy_sig.c",0x51);
  FUN_0041ad60(puVar2,"../providers/implementations/signature/mac_legacy_sig.c",0x52);
  thunk_FUN_0053f9f0(lVar4);
  return (undefined8 *)0x0;
}

