
undefined4 get_parent_strength(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 0x50) == 0) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x5b,"get_parent_strength");
    ERR_set_error(0x39,199,0);
  }
  else {
    OSSL_PARAM_construct_uint(&local_a8,"strength",param_2);
    local_58._0_8_ = local_88;
    local_78._8_8_ = uStack_a0;
    local_78._0_8_ = local_a8;
    local_68._8_8_ = uStack_90;
    local_68._0_8_ = local_98;
    iVar2 = ossl_drbg_lock_parent(param_1);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x61,"get_parent_strength");
      ERR_set_error(0x39,0xc9,0);
      uVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x50))(uVar1,local_78);
      if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
        (**(code **)(param_1 + 0x48))();
      }
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg.c",0x67,"get_parent_strength");
        ERR_set_error(0x39,199,0);
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

