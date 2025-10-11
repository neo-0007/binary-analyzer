
int ec_GF2m_simple_field_inv(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = BN_GF2m_mod_inv(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec2_smpl.c",0x3a7,"ec_GF2m_simple_field_inv");
  ERR_set_error(0x10,0xa5,0);
  return 0;
}

