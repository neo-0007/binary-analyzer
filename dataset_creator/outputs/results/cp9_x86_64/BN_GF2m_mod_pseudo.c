
undefined8 BN_GF2m_mod(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_GF2m_poly2arr(param_3,auStack_38,6);
  if ((iVar1 == 0) || (6 < iVar1)) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_gf2m.c",399,__func___6);
    ERR_set_error(3,0x6a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = BN_GF2m_mod_arr(param_1,param_2,auStack_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

