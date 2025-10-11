
undefined8 * FUN_00466150(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0x18,"../providers/implementations/exchange/ecx_exch.c",0x33);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0x35,"ecx_newctx");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      *puVar2 = 0x20;
    }
  }
  return puVar2;
}

