
long FUN_0041e6f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 1;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    FUN_0041e580(param_1,0,local_88,&local_8c);
    lVar1 = FUN_0041e570((long)local_8c * 0x28);
    lVar4 = (local_78._0_8_ + lVar1) * 8;
    lVar2 = FUN_0041aec0(lVar4,"../crypto/params_dup.c",0x27);
    local_88._0_8_ = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/params_dup.c",0x29,"ossl_param_buf_alloc");
      FUN_0051f8f0(0xf,0xc0100,0);
    }
    else {
      local_78._8_8_ = lVar4;
      local_88._8_8_ = lVar2 + lVar1 * 8;
      if (local_58._0_8_ != 0) {
        lVar2 = local_58._0_8_ * 8;
        lVar1 = FUN_0041bfc0(lVar2,"../crypto/params_dup.c",0x27);
        local_68._0_8_ = lVar1;
        if (lVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/params_dup.c",0x29,"ossl_param_buf_alloc");
          FUN_0051f8f0(0xf,0x6f,0);
          FUN_0041ad60(local_88._0_8_,"../crypto/params_dup.c",0x7f);
          lVar2 = 0;
          goto LAB_0041e7d5;
        }
        local_58._8_8_ = lVar2;
        local_68._8_8_ = lVar1;
        lVar2 = local_88._0_8_;
      }
      uVar3 = FUN_0041e580(param_1,lVar2,local_88,0);
      FUN_0041e6d0(uVar3,local_68._0_8_,local_58._8_8_);
    }
  }
LAB_0041e7d5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

