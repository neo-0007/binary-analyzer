
ulong FUN_004abaa0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  long lVar3;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x1c7,"BIO_gets");
    FUN_0051f8f0(0x20,0xc0102,0);
    uVar2 = 0xffffffff;
    goto LAB_004abb8a;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x38) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x1cb,"BIO_gets");
    FUN_0051f8f0(0x20,0x79,0);
    uVar2 = 0xfffffffe;
    goto LAB_004abb8a;
  }
  if (param_3 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x1d0,"BIO_gets");
    FUN_0051f8f0(0x20,0x7d,0);
    uVar2 = 0xffffffff;
    goto LAB_004abb8a;
  }
  if ((*(long *)(param_1 + 0x10) != 0) || (lVar3 = param_1, *(long *)(param_1 + 0x18) != 0)) {
    lVar3 = 1;
    uVar2 = FUN_004aaf30(param_1,5,param_2,(long)param_3,0,0);
    if ((int)uVar2 < 1) goto LAB_004abb8a;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_0051f420(lVar3);
    FUN_0051f540("../crypto/bio/bio_lib.c",0x1db,"BIO_gets");
    FUN_0051f8f0(0x20,0x78,0);
    uVar2 = 0xffffffff;
    goto LAB_004abb8a;
  }
  uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x38))(param_1,param_2,param_3);
  iVar1 = (int)uVar2;
  if (iVar1 < 1) {
    if (*(long *)(param_1 + 0x10) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_004abb8a;
      lVar3 = (long)iVar1;
    }
    else {
      lVar3 = (long)iVar1;
    }
LAB_004abb57:
    uVar2 = FUN_004aaf30(param_1,0x85,param_2,(long)param_3,0,0,lVar3,&local_28);
    if ((int)uVar2 < 1) goto LAB_004abb8a;
  }
  else {
    local_28 = (ulong)iVar1;
    lVar3 = 1;
    if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) goto LAB_004abb57;
  }
  uVar2 = local_28 & 0xffffffff;
  if ((ulong)(long)param_3 < local_28) {
    uVar2 = 0xffffffff;
  }
LAB_004abb8a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

