
int FUN_004a8f80(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
                long param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  int local_3c;
  long local_38;
  long local_30;
  
  plVar3 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = 0;
  local_50[0] = param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)FUN_0041aec0(8,"../crypto/asn1/x_int64.c",0x1f);
    *param_1 = (long)plVar3;
    if (plVar3 == (long *)0x0) {
      FUN_0051f420();
      iVar1 = 0;
      FUN_0051f540("../crypto/asn1/x_int64.c",0x20,"uint64_new");
      FUN_0051f8f0(0xd,0xc0100,0);
      goto LAB_004a8fda;
    }
  }
  lVar2 = local_38;
  if (param_3 != 0) {
    iVar1 = FUN_0049fb50(&local_38,&local_3c,local_50,(long)param_3);
    if (iVar1 == 0) goto LAB_004a8fda;
    lVar2 = local_38;
    if ((*(byte *)(param_6 + 0x28) & 2) == 0) {
      if (local_3c != 0) {
        FUN_0051f420();
        iVar1 = 0;
        FUN_0051f540("../crypto/asn1/x_int64.c",0x61,"uint64_c2i");
        FUN_0051f8f0(0xd,0xe2,0);
        goto LAB_004a8fda;
      }
    }
    else if (local_3c == 0) {
      if (local_38 < 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/x_int64.c",0x66,"uint64_c2i");
        FUN_0051f8f0(0xd,0xdf,0);
        iVar1 = 0;
        goto LAB_004a8fda;
      }
    }
    else {
      lVar2 = -local_38;
    }
  }
  *plVar3 = lVar2;
  iVar1 = 1;
LAB_004a8fda:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

