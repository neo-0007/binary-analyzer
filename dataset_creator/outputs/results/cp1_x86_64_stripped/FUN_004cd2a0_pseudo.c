
undefined8 *
FUN_004cd2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((DAT_00940ff0 != (undefined8 *)0x0) ||
     (puVar2 = (undefined8 *)FUN_00436410(), DAT_00940ff0 = puVar2, puVar2 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)FUN_0041aec0(0x30,"../crypto/conf/conf_mod.c",0x12d);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/conf/conf_mod.c",0x12e,"module_add");
      FUN_0051f8f0(0xe,0xc0100,0);
    }
    else {
      *puVar2 = param_1;
      lVar3 = FUN_0041c2c0(param_2,"../crypto/conf/conf_mod.c",0x133);
      puVar2[2] = param_3;
      puVar2[1] = lVar3;
      puVar2[3] = param_4;
      if (lVar3 == 0) {
        FUN_0041ad60(puVar2,"../crypto/conf/conf_mod.c",0x137);
        puVar2 = (undefined8 *)0x0;
      }
      else {
        iVar1 = FUN_00435f80(DAT_00940ff0,puVar2);
        if (iVar1 == 0) {
          FUN_0041ad60(puVar2[1],"../crypto/conf/conf_mod.c",0x13c);
          FUN_0041ad60(puVar2,"../crypto/conf/conf_mod.c",0x13d);
          puVar2 = (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar2;
}

