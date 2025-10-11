
undefined8 * FUN_00481da0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x188,"../providers/implementations/signature/sm2_sig.c",0x75)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_00485290(param_1);
    *puVar1 = uVar2;
    if (param_2 != 0) {
      lVar3 = FUN_0041c2c0(param_2,"../providers/implementations/signature/sm2_sig.c",0x7b);
      puVar1[1] = lVar3;
      if (lVar3 == 0) {
        FUN_0041ad60(puVar1,"../providers/implementations/signature/sm2_sig.c",0x7c);
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/sm2_sig.c",0x7d,"sm2sig_newctx");
        FUN_0051f8f0(0x39,0xc0100,0);
        return (undefined8 *)0x0;
      }
    }
    puVar1[0x2e] = 0x20;
    *(undefined4 *)((long)puVar1 + 0x19) = 0x334d53;
  }
  return puVar1;
}

