
ulong FUN_005375b0(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*param_1 + 0x78) == 0) {
    if ((*(byte *)(*param_1 + 0x10) & 0x80) != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = FUN_00536c00(param_1,1,param_2,0);
        return uVar2;
      }
      goto LAB_00537769;
    }
    iVar1 = FUN_0040a180();
    uVar2 = 1;
    if (iVar1 != param_2) {
      if ((param_2 < 1) || ((*(byte *)(*param_1 + 0x10) & 8) == 0)) {
        FUN_0051f420();
        uVar3 = 0x41d;
        goto LAB_005376ec;
      }
      *(int *)(param_1 + 0xd) = param_2;
    }
  }
  else {
    local_80 = (long)param_2;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    iVar1 = FUN_0040a180();
    uVar2 = 1;
    if (iVar1 != param_2) {
      uVar3 = FUN_00537560(*param_1);
      lVar4 = thunk_FUN_0041cdd0(uVar3,"keylen");
      if (lVar4 == 0) {
        FUN_0051f420();
        uVar3 = 0x405;
LAB_005376ec:
        FUN_0051f540("../crypto/evp/evp_enc.c",uVar3,"EVP_CIPHER_CTX_set_key_length");
        FUN_0051f8f0(6,0x82,0);
        uVar2 = 0;
      }
      else {
        FUN_0041dba0(&local_b8,"keylen",&local_80);
        local_78._8_8_ = uStack_b0;
        local_78._0_8_ = local_b8;
        local_58._0_8_ = local_98;
        local_68._8_8_ = uStack_a0;
        local_68._0_8_ = local_a8;
        iVar1 = FUN_0040b8d0(*param_1,param_1[0x15],local_78);
        uVar2 = (ulong)(0 < iVar1);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00537769:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

