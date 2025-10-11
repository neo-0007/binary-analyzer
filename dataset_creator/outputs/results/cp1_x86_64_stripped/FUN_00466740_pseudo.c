
bool FUN_00466740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  iVar1 = FUN_0040ac10(param_2);
  if (-1 < iVar1) {
    if (iVar1 == param_8) {
      iVar1 = FUN_0040ac10(param_2);
      uVar2 = FUN_0040ab30(param_2);
      lVar3 = FUN_0053f710(param_1,&DAT_007d37c9,0,uVar2,0,param_3,param_4,param_5,param_6,param_7,
                           (long)iVar1,0);
      bVar4 = lVar3 != 0;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/hkdf.c",0x19e,"HKDF_Extract");
      FUN_0051f8f0(0x39,0x8b,0);
    }
  }
  return bVar4;
}

