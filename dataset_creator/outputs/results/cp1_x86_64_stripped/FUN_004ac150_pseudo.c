
long FUN_004ac150(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_10;
  
  if (param_1 == 0) {
    lVar1 = -2;
  }
  else {
    local_10 = param_3;
    if (((*(long *)(param_1 + 8) == 0) ||
        (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x58), param_2 != 0xe)) ||
       (pcVar2 == (code *)0x0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_lib.c",0x254,"BIO_callback_ctrl");
      FUN_0051f8f0(0x20,0x79,0);
      lVar1 = -2;
    }
    else {
      if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
        lVar1 = FUN_004aaf30(param_1,6,&local_10,0,0xe,0,1,0);
        if (lVar1 < 1) {
          return lVar1;
        }
        pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x58);
      }
      lVar1 = (*pcVar2)(param_1,0xe,local_10);
      if ((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) == 0)) {
        return lVar1;
      }
      lVar1 = FUN_004aaf30(param_1,0x86,&local_10,0,0xe,0,lVar1,0);
    }
  }
  return lVar1;
}

