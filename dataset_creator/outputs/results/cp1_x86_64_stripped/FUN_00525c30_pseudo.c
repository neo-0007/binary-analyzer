
undefined8 FUN_00525c30(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_80;
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
  local_80 = 0xffffffff;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x800)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/dh_ctrl.c",0x25,"dh_param_derive_check");
    FUN_0051f8f0(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((*(long *)(param_1 + 8) != 0) || (**(int **)(param_1 + 0x1e) == 0x1c)) ||
       (**(int **)(param_1 + 0x1e) == 0x398)) {
      FUN_0041dba0(&local_b8,"kdf-outlen",&local_80);
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
      uVar1 = FUN_004142f0(param_1,&local_78);
      if ((int)uVar1 == -2) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/dh_ctrl.c",0x119,"EVP_PKEY_CTX_get_dh_kdf_outlen");
        FUN_0051f8f0(6,0x93,0);
      }
      else if (((int)uVar1 == 1) && (local_80 < 0x80000000)) {
        *param_2 = (int)local_80;
        goto LAB_00525d0b;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_00525d0b:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}

