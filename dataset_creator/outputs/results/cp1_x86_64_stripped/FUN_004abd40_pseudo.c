
long FUN_004abd40(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  if ((*(long *)(param_1 + 8) == 0) ||
     (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x40), pcVar2 == (code *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x239,"BIO_ctrl");
    FUN_0051f8f0(0x20,0x79,0);
    lVar1 = -2;
  }
  else {
    if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
      lVar1 = FUN_004aaf30(param_1,6,param_4,0,param_2,param_3,1,0);
      if (lVar1 < 1) {
        return lVar1;
      }
      pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x40);
    }
    lVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    if ((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) == 0)) {
      return lVar1;
    }
    lVar1 = FUN_004aaf30(param_1,0x86,param_4,0,param_2,param_3,lVar1,0);
  }
  return lVar1;
}

