
undefined4 FUN_004af6d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 1;
  if ((int)param_1 == -1) {
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/bio/bio_sock2.c",0x5f,"BIO_connect");
    FUN_0051f8f0(0x20,0x87,0);
    goto LAB_004af77c;
  }
  uVar5 = param_1 & 0xffffffff;
  iVar1 = FUN_004af340(param_1,(uint)(param_3 >> 3) & 1);
  if (iVar1 != 0) {
    if ((param_3 & 4) != 0) {
      iVar1 = FUN_00771190(uVar5,1,9,&local_34,4);
      if (iVar1 != 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_sock2.c",0x69,"BIO_connect");
        puVar4 = (undefined4 *)FUN_006d2700();
        FUN_0051f8f0(2,*puVar4,"calling setsockopt()");
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_sock2.c",0x6b,"BIO_connect");
        FUN_0051f8f0(0x20,0x89,0);
        goto LAB_004af830;
      }
    }
    if ((param_3 & 0x10) != 0) {
      iVar1 = FUN_00771190(uVar5,6,1,&local_34,4);
      if (iVar1 != 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_sock2.c",0x73,"BIO_connect");
        puVar4 = (undefined4 *)FUN_006d2700();
        FUN_0051f8f0(2,*puVar4,"calling setsockopt()");
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_sock2.c",0x75,"BIO_connect");
        uVar6 = 0;
        FUN_0051f8f0(0x20,0x8a,0);
        goto LAB_004af77c;
      }
    }
    uVar2 = FUN_005bf8f0(param_2);
    uVar6 = 1;
    uVar3 = FUN_005bf8d0(param_2);
    iVar1 = FUN_00770f00(uVar5,uVar3,uVar2);
    if (iVar1 != -1) goto LAB_004af77c;
    iVar1 = FUN_004b1020(0xffffffff);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0x7d,"BIO_connect");
      puVar4 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar4,"calling connect()");
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0x7f,"BIO_connect");
      FUN_0051f8f0(0x20,0x67,0);
      uVar6 = 0;
      goto LAB_004af77c;
    }
  }
LAB_004af830:
  uVar6 = 0;
LAB_004af77c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

