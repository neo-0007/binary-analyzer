
bool FUN_0041a5d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0041ad90(0x10,"../crypto/init.c",0x2c0);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/init.c",0x2c1,"OPENSSL_atexit");
    FUN_0051f8f0(0xf,0xc0100,0);
  }
  else {
    *puVar2 = param_1;
    puVar1 = puVar2;
    puVar2[1] = DAT_0093fc70;
    DAT_0093fc70 = puVar1;
  }
  return puVar2 != (undefined8 *)0x0;
}

