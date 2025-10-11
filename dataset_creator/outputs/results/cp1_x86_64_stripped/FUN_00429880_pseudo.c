
bool FUN_00429880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00417730(param_1,5,&DAT_0091b6a0);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      iVar1 = FUN_00428980(lVar2 + 0x20,param_2);
      if (((iVar1 != 0) && (iVar1 = FUN_00428980(lVar2 + 0x38,param_3), iVar1 != 0)) &&
         (iVar1 = FUN_00428980(lVar2 + 0x28,param_4), iVar1 != 0)) {
        iVar1 = FUN_00428980(lVar2 + 0x30,param_5);
        return iVar1 != 0;
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/rand/rand_lib.c",0x334,"RAND_set_DRBG_type");
      FUN_0051f8f0(0xf,0x67,0);
    }
  }
  return false;
}

