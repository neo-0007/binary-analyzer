
undefined4
evp_rand_generate_locked
          (long *param_1,long param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  ulong local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_size_t(local_d8,"max_request",&local_a0);
  local_78._0_8_ = local_b8;
  iVar1 = (**(code **)(*param_1 + 0xa8))(param_1[1],local_98);
  if ((iVar1 == 0) || (local_a0 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_rand.c",0x229,"evp_rand_generate_locked");
    ERR_set_error(6,0xd7,0);
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      while( true ) {
        uVar2 = local_a0;
        if (param_3 < local_a0) {
          uVar2 = param_3;
        }
        iVar1 = (**(code **)(*param_1 + 0x58))
                          (param_1[1],param_2,uVar2,param_4,param_5,param_6,param_7);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/evp_rand.c",0x230,"evp_rand_generate_locked");
          ERR_set_error(6,0xd6,0);
          uVar3 = 0;
          goto LAB_0052608c;
        }
        param_2 = param_2 + uVar2;
        param_3 = param_3 - uVar2;
        if (param_3 == 0) break;
        param_5 = 0;
      }
    }
    uVar3 = 1;
  }
LAB_0052608c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

