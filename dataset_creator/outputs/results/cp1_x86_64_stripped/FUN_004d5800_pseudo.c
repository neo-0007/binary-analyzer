
undefined8 FUN_004d5800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_2c [4];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004b84d0(param_2,param_3,0);
  if (lVar2 == 0) {
LAB_004d5890:
    uVar3 = 0x6a;
  }
  else {
    FUN_004d5fb0(param_1,&local_28,0,0);
    if (local_28 != 0) {
      iVar1 = FUN_004b7bb0();
      if (0xe < iVar1 + 0xeU) {
        uVar3 = 0x66;
        iVar1 = FUN_004d43d0(param_1,lVar2,local_2c);
        if (iVar1 != 0) {
          uVar3 = FUN_004d6060(param_1,lVar2,0);
          if ((int)uVar3 == 1) goto LAB_004d58de;
          goto LAB_004d5890;
        }
        goto LAB_004d58a6;
      }
    }
    uVar3 = 0x6b;
  }
LAB_004d58a6:
  FUN_0051f420();
  FUN_0051f540("../crypto/dh/dh_key.c",0x198,"ossl_dh_buf2key");
  FUN_0051f8f0(5,uVar3,0);
  FUN_004b7fa0(lVar2);
  uVar3 = 0;
LAB_004d58de:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

