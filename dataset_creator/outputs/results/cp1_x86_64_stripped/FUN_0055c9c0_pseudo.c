
undefined8 *
FUN_0055c9c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_004a2ba0();
  lVar2 = FUN_0055c180(param_4,uVar1,param_1,param_2,param_3,1);
  if (lVar2 == 0) {
    FUN_0051f420();
    puVar3 = (undefined8 *)0x0;
    FUN_0051f540("../crypto/pkcs12/p12_p8e.c",0x50,"PKCS8_set0_pbe_ex");
    FUN_0051f8f0(0x23,0x67,0);
  }
  else {
    puVar3 = (undefined8 *)FUN_0041aec0(0x10,"../crypto/pkcs12/p12_p8e.c",0x54);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_p8e.c",0x57,"PKCS8_set0_pbe_ex");
      FUN_0051f8f0(0x23,0xc0100,0);
      thunk_FUN_004a2270(lVar2);
    }
    else {
      *puVar3 = param_4;
      puVar3[1] = lVar2;
    }
  }
  return puVar3;
}

