
int FUN_004aec70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  iVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  iVar1 = FUN_004aec60();
  if (iVar1 == 1) {
    iVar2 = FUN_005c0430(param_1,0,0,2,1,&local_30);
    if (iVar2 == 0) {
      FUN_0051ef40(2,"host=",param_1);
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005bfd40(local_30);
      if (iVar2 == 2) {
        uVar3 = FUN_005bfdc0(local_30);
        iVar2 = FUN_005bf7f0(uVar3,0,&local_28);
        if ((iVar2 != 0) && (iVar2 = 0, local_28 == 4)) {
          uVar3 = FUN_005bfdc0(local_30);
          iVar2 = FUN_005bf7f0(uVar3,param_2,&local_28);
        }
      }
      else {
        FUN_0051f420();
        iVar2 = 0;
        FUN_0051f540("../crypto/bio/bio_sock.c",0x38,"BIO_get_host_ip");
        FUN_0051f8f0(0x20,0x6b,0);
      }
      FUN_005bfdd0(local_30);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

