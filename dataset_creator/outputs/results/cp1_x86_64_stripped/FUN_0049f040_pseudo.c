
int FUN_0049f040(long *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (int *)0x0) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/asn1/a_int.c",0x14a,"asn1_string_get_int64");
    FUN_0051f8f0(0xd,0xc0102,0);
  }
  else {
    uVar1 = param_2[1];
    if ((uVar1 & 0xfffffeff) == param_3) {
      iVar2 = FUN_0049efb0(&local_28,*(undefined8 *)(param_2 + 2),(long)*param_2);
      if (iVar2 != 0) {
        if ((uVar1 & 0x100) == 0) {
          if (local_28 < 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/a_int.c",0x116,"asn1_get_int64");
            FUN_0051f8f0(0xd,0xdf,0);
            iVar2 = 0;
            goto LAB_0049f0a0;
          }
        }
        else {
          if (-1 < local_28) {
            iVar2 = 1;
            *param_1 = -local_28;
            goto LAB_0049f0a0;
          }
          if (local_28 != -0x8000000000000000) {
            FUN_0051f420();
            iVar2 = 0;
            FUN_0051f540("../crypto/asn1/a_int.c",0x10f,"asn1_get_int64");
            FUN_0051f8f0(0xd,0xe0,0);
            goto LAB_0049f0a0;
          }
        }
        *param_1 = local_28;
        iVar2 = 1;
      }
    }
    else {
      FUN_0051f420();
      iVar2 = 0;
      FUN_0051f540("../crypto/asn1/a_int.c",0x14e,"asn1_string_get_int64");
      FUN_0051f8f0(0xd,0xe1,0);
    }
  }
LAB_0049f0a0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

