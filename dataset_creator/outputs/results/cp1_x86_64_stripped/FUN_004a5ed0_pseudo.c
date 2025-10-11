
int FUN_004a5ed0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    iVar1 = FUN_004a59a0(&local_50,param_2,param_3,0xffffffff,param_4);
  }
  else {
    iVar1 = FUN_004a59a0(&local_50,0,param_3,0xffffffff,param_4);
    if (0 < iVar1) {
      lVar2 = FUN_0041ad90((long)iVar1,"../crypto/asn1/tasn_enc.c",0x41);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/tasn_enc.c",0x42,"asn1_item_flags_i2d");
        iVar1 = -1;
        FUN_0051f8f0(0xd,0xc0100,0);
      }
      else {
        local_48 = lVar2;
        FUN_004a59a0(&local_50,&local_48,param_3,0xffffffff);
        *param_2 = lVar2;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

