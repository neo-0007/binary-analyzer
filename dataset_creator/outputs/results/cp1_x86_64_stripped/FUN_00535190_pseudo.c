
int FUN_00535190(int *param_1,undefined4 *param_2)

{
  int iVar1;
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
    FUN_0051f540("../crypto/evp/ec_ctrl.c",0x1b,"evp_pkey_ctx_getset_ecdh_param_checks");
    iVar1 = -2;
    FUN_0051f8f0(6,0x93,0);
    goto LAB_00535260;
  }
  if (((*(long *)(param_1 + 8) != 0) || (*(int **)(param_1 + 0x1e) == (int *)0x0)) ||
     (**(int **)(param_1 + 0x1e) == 0x198)) {
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
    iVar1 = FUN_004142f0(param_1,&local_78);
    if (iVar1 == -2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ec_ctrl.c",0xc2,"EVP_PKEY_CTX_get_ecdh_kdf_outlen");
      FUN_0051f8f0(6,0x93,0);
      goto LAB_00535260;
    }
    if ((iVar1 == 1) && (local_80 < 0x80000000)) {
      *param_2 = (int)local_80;
      goto LAB_00535260;
    }
  }
  iVar1 = -1;
LAB_00535260:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

