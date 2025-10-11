
undefined4 FUN_004afb50(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  uint local_3c;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 1;
  local_34 = 4;
  if ((int)param_1 == -1) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../crypto/bio/bio_sock2.c",0xe7,"BIO_listen");
    FUN_0051f8f0(0x20,0x87,0);
  }
  else {
    iVar1 = FUN_00770fd0(param_1,1,3,&local_38,&local_34);
    if ((iVar1 == 0) && (local_34 == 4)) {
      iVar1 = FUN_004af340(param_1 & 0xffffffff,(uint)((param_3 & 0xffffffff) >> 3) & 1);
      uVar3 = 0;
      if (iVar1 != 0) {
        if ((param_3 & 4) != 0) {
          iVar1 = FUN_00771190(param_1 & 0xffffffff,1,9,&local_3c,4);
          if (iVar1 != 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/bio/bio_sock2.c",0xfa,"BIO_listen");
            puVar2 = (undefined4 *)FUN_006d2700();
            FUN_0051f8f0(2,*puVar2,"calling setsockopt()");
            FUN_0051f420();
            FUN_0051f540("../crypto/bio/bio_sock2.c",0xfc,"BIO_listen");
            FUN_0051f8f0(0x20,0x89,0);
            goto LAB_004afc23;
          }
        }
        if ((param_3 & 0x10) != 0) {
          iVar1 = FUN_00771190(param_1 & 0xffffffff,6,1,&local_3c,4);
          if (iVar1 != 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/bio/bio_sock2.c",0x104,"BIO_listen");
            puVar2 = (undefined4 *)FUN_006d2700();
            FUN_0051f8f0(2,*puVar2,"calling setsockopt()");
            FUN_0051f420();
            FUN_0051f540("../crypto/bio/bio_sock2.c",0x106,"BIO_listen");
            FUN_0051f8f0(0x20,0x8a,0);
            goto LAB_004afc23;
          }
        }
        iVar1 = FUN_005bf7e0(param_2);
        if (iVar1 == 10) {
          local_3c = (int)param_3 >> 1 & 1;
          iVar1 = FUN_00771190(param_1 & 0xffffffff,0x29,0x1a,&local_3c,4);
          if (iVar1 != 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/bio/bio_sock2.c",0x115,"BIO_listen");
            puVar2 = (undefined4 *)FUN_006d2700();
            FUN_0051f8f0(2,*puVar2,"calling setsockopt()");
            FUN_0051f420();
            FUN_0051f540("../crypto/bio/bio_sock2.c",0x117,"BIO_listen");
            FUN_0051f8f0(0x20,0x88,0);
            goto LAB_004afc23;
          }
        }
        iVar1 = FUN_004af980(param_1 & 0xffffffff,param_2,param_3 & 0xffffffff);
        if (iVar1 != 0) {
          if (local_38 != 2) {
            iVar1 = FUN_00771010(param_1 & 0xffffffff,0x1000);
            if (iVar1 == -1) {
              FUN_0051f420();
              FUN_0051f540("../crypto/bio/bio_sock2.c",0x121,"BIO_listen");
              puVar2 = (undefined4 *)FUN_006d2700();
              FUN_0051f8f0(2,*puVar2,"calling listen()");
              FUN_0051f420();
              FUN_0051f540("../crypto/bio/bio_sock2.c",0x123,"BIO_listen");
              FUN_0051f8f0(0x20,0x77,0);
              goto LAB_004afc23;
            }
          }
          uVar3 = 1;
        }
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0xee,"BIO_listen");
      puVar2 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar2,"calling getsockopt()");
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0xf0,"BIO_listen");
      uVar3 = 0;
      FUN_0051f8f0(0x20,0x86,0);
    }
  }
LAB_004afc23:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

