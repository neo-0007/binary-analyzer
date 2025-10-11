
undefined8 FUN_004af980(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 1;
  if ((int)param_1 == -1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_sock2.c",0x9d,"BIO_bind");
    FUN_0051f8f0(0x20,0x87,0);
    uVar3 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      iVar2 = FUN_00771190(param_1,1,2,&local_24,4);
      if (iVar2 != 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_sock2.c",0xa9,"BIO_bind");
        puVar4 = (undefined4 *)FUN_006d2700();
        FUN_0051f8f0(2,*puVar4,"calling setsockopt()");
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_sock2.c",0xab,"BIO_bind");
        FUN_0051f8f0(0x20,0x8b,0);
        uVar3 = 0;
        goto LAB_004af9e9;
      }
    }
    uVar1 = FUN_005bf8f0(param_2);
    uVar3 = FUN_005bf8d0(param_2);
    iVar2 = FUN_00770ed0(param_1 & 0xffffffff,uVar3,uVar1);
    uVar3 = 1;
    if (iVar2 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0xb2,"BIO_bind");
      puVar4 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar4,"calling bind()");
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0xb4,"BIO_bind");
      FUN_0051f8f0(0x20,0x75,0);
      uVar3 = 0;
    }
  }
LAB_004af9e9:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

