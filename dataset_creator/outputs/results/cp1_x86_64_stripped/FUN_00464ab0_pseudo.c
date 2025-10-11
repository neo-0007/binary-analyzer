
undefined8 FUN_00464ab0(long param_1,long param_2,ulong *param_3,ulong param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/exchange/dh_exch.c",0x98,"dh_plain_derive");
    FUN_0051f8f0(0x39,0x80,0);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_004d5f10();
    if (param_2 == 0) {
      *param_3 = (long)iVar1;
      uVar2 = 1;
    }
    else if (param_4 < (ulong)(long)iVar1) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/exchange/dh_exch.c",0xa2,"dh_plain_derive");
      FUN_0051f8f0(0x39,0x6a,0);
      uVar2 = 0;
    }
    else {
      FUN_004d6040(*(undefined8 *)(param_1 + 0x10),&local_38,0);
      if (param_5 == 0) {
        iVar1 = FUN_004d5200();
      }
      else {
        iVar1 = FUN_004d52b0(param_2,local_38,*(undefined8 *)(param_1 + 8));
      }
      uVar2 = 0;
      if (0 < iVar1) {
        *param_3 = (long)iVar1;
        uVar2 = 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

