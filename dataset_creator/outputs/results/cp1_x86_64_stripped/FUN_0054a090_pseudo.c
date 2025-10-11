
undefined4 FUN_0054a090(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider.c",0x79,"OSSL_PROVIDER_add_builtin");
    FUN_0051f8f0(0xf,0xc0102,0);
    uVar2 = 0;
  }
  else {
    local_58 = (undefined1  [16])0x0;
    local_38 = 0;
    local_48 = (undefined1  [16])0x0;
    lVar3 = FUN_0041c2c0(param_2,"../crypto/provider.c",0x7d);
    local_58._0_8_ = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/provider.c",0x7f,"OSSL_PROVIDER_add_builtin");
      FUN_0051f8f0(0xf,0xc0100,0);
      uVar2 = 0;
    }
    else {
      local_48._0_8_ = param_3;
      iVar1 = FUN_004205d0(param_1,local_58);
      if (iVar1 == 0) {
        FUN_004203a0(local_58);
        uVar2 = 0;
      }
      else {
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

