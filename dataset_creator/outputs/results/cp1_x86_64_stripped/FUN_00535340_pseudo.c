
int FUN_00535340(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
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
  if ((param_1 == (int *)0x0) || (*param_1 != 0x800)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/ec_ctrl.c",0x1b,"evp_pkey_ctx_getset_ecdh_param_checks");
    iVar1 = -2;
    FUN_0051f8f0(6,0x93,0);
  }
  else if (((*(long *)(param_1 + 8) == 0) && (*(int **)(param_1 + 0x1e) != (int *)0x0)) &&
          (**(int **)(param_1 + 0x1e) != 0x198)) {
    iVar1 = -1;
  }
  else {
    FUN_0041e2e0(&local_a8,&DAT_007e431b,param_2,(long)param_3);
    local_58 = local_88;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    uStack_60 = uStack_90;
    FUN_0041e470(&local_a8);
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_30 = local_88;
    local_40 = local_98;
    uStack_38 = uStack_90;
    iVar1 = FUN_00414250(param_1,&local_78);
    if (iVar1 == -2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ec_ctrl.c",0xe8,"EVP_PKEY_CTX_set0_ecdh_kdf_ukm");
      FUN_0051f8f0(6,0x93,0);
    }
    else if (iVar1 == 1) {
      FUN_0041ad60(param_2,"../crypto/evp/ec_ctrl.c",0xeb);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

