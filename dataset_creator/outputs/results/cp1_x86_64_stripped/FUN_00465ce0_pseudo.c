
undefined8 * FUN_00465ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  iVar2 = FUN_0043b840();
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)
             FUN_0041aec0(0x18,"../providers/implementations/exchange/ecx_exch.c",0xca);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0xcc,"ecx_dupctx");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      uVar1 = param_1[1];
      *puVar3 = *param_1;
      puVar3[1] = uVar1;
      puVar3[2] = param_1[2];
      if ((puVar3[1] != 0) && (iVar2 = FUN_00511630(), iVar2 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0xd2,"ecx_dupctx");
        FUN_0051f8f0(0x39,0xc0103,0);
        FUN_0041ad60(puVar3,"../providers/implementations/exchange/ecx_exch.c",0xd3);
        return (undefined8 *)0x0;
      }
      if ((puVar3[2] != 0) && (iVar2 = FUN_00511630(), iVar2 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0xd8,"ecx_dupctx");
        FUN_0051f8f0(0x39,0xc0103,0);
        FUN_00511590(puVar3[1]);
        FUN_0041ad60(puVar3,"../providers/implementations/exchange/ecx_exch.c",0xda);
        puVar3 = (undefined8 *)0x0;
      }
    }
  }
  return puVar3;
}

