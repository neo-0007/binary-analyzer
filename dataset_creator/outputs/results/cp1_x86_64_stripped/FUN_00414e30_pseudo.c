
undefined8 FUN_00414e30(int *param_1,int param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = param_2;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x800)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x438,"EVP_PKEY_CTX_set_hkdf_mode");
    FUN_0051f8f0(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (*(long *)(param_1 + 0xc) == 0) {
    uVar1 = FUN_00414800(param_1,0xffffffff,0x800,0x1007,param_2,0);
  }
  else if (param_2 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x444,"EVP_PKEY_CTX_set_hkdf_mode");
    FUN_0051f8f0(6,0xde,0);
    uVar1 = 0;
  }
  else {
    FUN_0041cea0(&local_b8,"mode",&local_7c);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    FUN_0041e470(&local_b8);
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_30 = local_98;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    uVar1 = FUN_00413ce0(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

