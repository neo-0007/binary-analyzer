
undefined8 FUN_0040f410(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  iVar2 = FUN_0053e780(param_2,FUN_0040dd10,&local_38);
  lVar1 = local_38;
  if ((iVar2 == 0) || (local_30 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_lib.c",0x655,"EVP_PKEY_set_type_by_keymgmt");
    FUN_0051f8f0(6,0xc0103,0);
    uVar4 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    if (local_38 != 0) {
      uVar3 = thunk_FUN_007129d0(local_38);
    }
    uVar4 = FUN_0040ee60(param_1,0,0,lVar1,uVar3,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

