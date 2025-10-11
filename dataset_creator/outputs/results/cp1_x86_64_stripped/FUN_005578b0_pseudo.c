
long FUN_005578b0(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_005ab6b0(param_1,0);
  if (lVar2 != 0) {
    if (param_3 == (code *)0x0) {
      iVar1 = FUN_005551d0(auStack_438,0x400,0,param_4);
    }
    else {
      iVar1 = (*param_3)();
    }
    if (iVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pem_pk8.c",0xba,"d2i_PKCS8PrivateKey_bio");
      FUN_0051f8f0(9,0x68,0);
      FUN_004a9460(lVar2);
    }
    else {
      lVar3 = FUN_0055c9b0(lVar2,auStack_438,iVar1);
      FUN_004a9460(lVar2);
      FUN_004227b0(auStack_438,(long)iVar1);
      if (lVar3 != 0) {
        lVar2 = FUN_005fe160(lVar3);
        FUN_004a2c30(lVar3);
        if (lVar2 != 0) {
          if (param_2 != (long *)0x0) {
            FUN_0040f4f0(*param_2);
            *param_2 = lVar2;
          }
          goto LAB_00557969;
        }
      }
    }
  }
  lVar2 = 0;
LAB_00557969:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

