
undefined8 FUN_0055ddf0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_005fce90();
  lVar2 = FUN_004ab550(uVar1);
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar1 = 0x42;
LAB_0055df49:
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",uVar1,"pkcs7_bio_add_digest");
    FUN_0051f8f0(0x21,0x80020,0);
  }
  else {
    FUN_00423e90(auStack_68,0x32,*param_2,0);
    FUN_0051f000();
    uVar1 = FUN_005614f0(param_3);
    uVar3 = FUN_005614d0(param_3);
    lVar4 = FUN_004069d0(uVar3,auStack_68,uVar1);
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = FUN_0040d800(auStack_68);
      if (lVar5 != 0) goto LAB_0055de79;
      FUN_0051f1a0();
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x52,"pkcs7_bio_add_digest");
      FUN_0051f8f0(0x21,0x6d,0);
    }
    else {
LAB_0055de79:
      FUN_0051f050();
      lVar5 = FUN_004abd40(lVar2,0x6f,0,lVar5);
      if (0 < lVar5) {
        FUN_00406a50(lVar4);
        if (*param_1 == 0) {
          *param_1 = lVar2;
          uVar1 = 1;
          goto LAB_0055debe;
        }
        lVar5 = FUN_004ac2c0(*param_1,lVar2);
        uVar1 = 1;
        if (lVar5 != 0) goto LAB_0055debe;
        FUN_0051f420();
        uVar1 = 0x60;
        goto LAB_0055df49;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x58,"pkcs7_bio_add_digest");
      FUN_0051f8f0(0x21,0x80020,0);
      FUN_00406a50(lVar4);
    }
  }
  FUN_004ab560(lVar2);
  uVar1 = 0;
LAB_0055debe:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

